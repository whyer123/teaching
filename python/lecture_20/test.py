# lst = [1,2,2,3,4,3,2] 
# n 在 lst 裡出現幾次 ？

# 1 -> 1
# 2 -> 3
# 3 -> 2

#count_a_b = lst.count(a) + lst.count(b)
#count_a_b = lst.count(10) + lst.count(10)
#count_a_b = 2 + lst.count(10)
#count_a_b = 2 + 2
#count_a_b = 4

lst = [10,10] 

n = 10
count = 0

for i in lst :
    if i == n :
        count = count + 1

print(count)