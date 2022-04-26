# File 1 / Task 1

All notes go here - make sure to log well louis or this will be not fun. 

*sudo bash -c 'echo 0 > /proc/sys/kernel/randomize_va_space'*
*gcc -fno-stack-protector -w -g -m32 -no-pie -z execstack -o one one.c*


DONT FORGET TO COMPILE WITHOUT SECURITY ENABLED

things to make note of: 

"static char input[16]" can be overflowed. "strcpy"(line 26) is used to copy "input" into it. 

"printf('%s\n', output)" should be a format string exploit 
(can read more from: https://web.ecs.syr.edu/~wedu/Teaching/cis643/LectureNotes_New/Format_String.pdf)

the output is the product of function "openFile"

in "openFile" the variable filescan has been assigned "malloc(16)" which i think is vulnerable. ( google this ) ( this might be a double free vuln)



https://www.win.tue.nl/~aeb/linux/hh/hh.html#toc11.3

## GDB notes

> http://users.ece.utexas.edu/~adnan/gdb-refcard.pdf

break 9 (entry to main)

main entry:0x565562cd
main return:0x5655634c

x/s with address will print text 


Trying to overflow the malloc. after 24 As we hit a invalid pointer.
I think i need to have a valid pointer in memory before i can continue??


# File 2

filename[24] can be overflowed 
