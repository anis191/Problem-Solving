a=input()
a_list = list(a)
space_position=[]
p=0
for i in a_list:
    if i == ' ':
        space_position.append(p)
        p +=1
    else:
        p +=1
        continue
for i in a_list:
    if i == ' ':
        a_list.remove(' ')
k=0
for i in a_list:
    if k % 2 == 0:
        a_list[k] = a_list[k].upper()
    else:
        a_list[k] = a_list[k].lower()
    k +=1
for i in space_position:
    a_list.insert(i,' ')
for i in a_list:
    print(i,end='')