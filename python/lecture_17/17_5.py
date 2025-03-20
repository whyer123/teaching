def find_path(n) :
    if n == 1 :
        return 1
    elif n%2 == 1 :
        return find_path(3*n+1) + 1
    else :
        return find_path(n//2) + 1
    
# 8 4 2 1 
#f(8) = f(4) + 1 = f(2) + 1 + 1 = 1 + 1 + 1 + 1 = 4

while True :
    try :
        line = input()
        a,b = map( int , line.split() )

        low = min(a,b)
        high = max(a,b)
        ans = 0
        for i in range(low,high+1) :
            ans = max(ans, find_path(i))
        print(f"{a} {b} {ans}")
    except :
        break

