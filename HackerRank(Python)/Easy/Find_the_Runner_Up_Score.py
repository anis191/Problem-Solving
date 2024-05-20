n = int(input())
score = []
for i in range(n):
    x = input().split()
    score.append(x)
score.sort(reverse=True)
k = 1
for j in score:
    if  j > score[k]:
        print(score[k])
        break
    else:
        j += 1
        k += 1
        continue
