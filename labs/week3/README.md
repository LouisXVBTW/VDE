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
|:----|----:|
|esp |0xffffd020|
|ebp|0xffffd038|
|main rtn|0x56556276|

esp            0xffffd000\
ebp            0xffffd018\
fun1 rtn       0x5655622b

esp            0xffffcfe0\
ebp            0xffffcfe8\
fun2 rtn       0x565561fc

### Task2
In this task, discover buffer overflow vulnerability and exploit the program of the following code (i.e. print out the following message in the terminal “You have correctly ...Well done!”)

<p align='center'>
<img src="https://github.com/LouisXVBTW/Vulnerability-Discovery-And-Exploitation/blob/main/images/week3task2.png">
</p>
