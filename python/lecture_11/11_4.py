# 0 1 1 2 3 5 8 13
# 1 2 3 4 5 6 7 8

def fib(n) :
    if n==1 :
        return 0
    elif n==2 :
        return 1
    else :
        return fib(n-1) + fib(n-2)

