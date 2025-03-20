def lei(n):
    ans = 0
    for i in range(1,n+1) :
        ans+=(4*(-1)**(i-1))/(2*i-1)
    return ans

print(lei(3))
