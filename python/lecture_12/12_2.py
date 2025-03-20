list = [3,1,2,1,3,2]

size = len(list)

ans = 0

for i in range(size) :
    target = list[i]
    count = 0
    for j in range(i+1,size) :
        if list[j] < target :
            count += 1
        if list[j] == target :
            break
    ans += count

print(ans)