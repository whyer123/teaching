list = [3,1,2,1,3,2]
n = 6

# i=0(3) j : 1(1) 2(2) 3(1) 4(3) *5(2)
# i=1(1) j : 2(2) 3(1) *4(3) 5(2)

count = 0

for i in range(n-1) :
    for j in range(i+1,n) :

        if list[i] == list[j] :
            break
        if list[i] > list[j] :
            count = count + 1

print(count)       

# 3 
# 1
# 2
# 1
# 3