list = [1,2,3]
n = 3

for i in range(n-1) : # 0 1
    for j in range(i+1,n) : #1 2 #2
        print(list[i],list[j])

# 1 2
# 1 3
# 2 3