n=int(input())
List=[]
all_number = input()
number = all_number.split()
for i in number:
    List.append(int(i))
List.sort(reverse=True)
max = List[0]
for i in range(1,len(List)):
    if max > List[i]:
        print(List[i])
        break
