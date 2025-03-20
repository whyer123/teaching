import time
#有動態規劃版本
memo = {}
def my_fib(n) :

    if n<=2 :
        return 1
    if n in memo :
        return memo[n]
    
    memo[n] = my_fib(n-1) + my_fib(n-2)
    return memo[n]

#主程式
start_time = time.time()
num = int(input("輸入所求項數: "))
print(my_fib(num))
end_time = time.time()
print(f"執行時間:{end_time-start_time:.6f}")