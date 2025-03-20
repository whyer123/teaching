def Fibonacci(n): # 3
    fib = [0, 1]
    while True:
        next = fib[-2] + fib[-1] # 1 2 3 5
        if next <= n: # 1<=3 2<=3 3<=3 5<=3
            fib.append(next) #[0,1,1,2,3]
        else:
            break
    return fib

n = int(input('n:'))
print(Fibonacci(n))

# 0 1 1 2 3 5 8 13 21

