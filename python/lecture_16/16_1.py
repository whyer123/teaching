line = input()

a,b = line.split()

lis_a = []
lis_b = [] 
for i in a :
    lis_a.append(int(i))
for i in b :
    lis_b.append(int(i))

lis_a = lis_a[::-1]
lis_b = lis_b[::-1]

i = 0
carry = 0
ans = 0
while i < len(lis_a) or i < len(lis_b) :
    try :
        c1 = lis_a[i]
    except :
        c1 = 0
    try :
        c2 = lis_b[i]
    except :
        c2 = 0
    i += 1
    c3 = c1 + c2 + carry
    if c3 > 9 :
        ans += 1
        carry = 1
    else :
        carry = 0
    print(f"c1:{c1}, c2:{c2}")

print(ans)
