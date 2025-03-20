import math
n = int(input())

for i in range(n) : 
    line = input().split()
    player = line[0]
    player = int(player)
    p = line[1]
    p = float(p)
    i = line[2]
    i = int(i)
    q = 1 - p
    a1 = p*math.pow(q,i-1)
    ans = a1 / (1-math.pow(q,player))
    print(f"{ans:.4f}")
