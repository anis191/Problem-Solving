List = []
number_list = input()
number = number_list.split()
for i in number:
    List.append(int(i))
List.sort(reverse=True)
print(List[0], "eh o maior")