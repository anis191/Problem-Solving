import re

src = 'lab-2-source.c'
des = 'lab-2-desc.c'

with open(src, 'r') as file:
    c = file.read()
    c = re.sub(r"//.*", "", c)
    c = re.sub(r"/\*.*?\*/", "", c, flags=re.DOTALL)
    print(c)

with open(des, 'w') as file:
    file.write(c)
