while True:
    try:
        s=input()
        a,b=s.split(" ")
        a=int(a) 
        b=int(b)
        ans = 0
        h = max(a,b)
        l = min(a,b)
        for i in range(l,h+1):
            count=1
            while i!=1:
                if i%2==1:
                    i=3*i+1
                else:
                    i=i//2
                count=count+1
            ans = max(ans, count)
        print(a,b,ans)
            
    except EOFError:
        break