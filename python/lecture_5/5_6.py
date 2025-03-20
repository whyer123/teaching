import math

while True:
    
    n = int(input("請輸入一個非負整數 n（輸入 0 結束程式）: "))
    if n == 0:
        break  
    
    if n < 0:
        print("請輸入一個非負整數！")
        continue

    x = float(input("請輸入 x 的值: "))

    e_power_x = 1  
    for i in range(1, n + 1):
        e_power_x += (x**i) / math.factorial(i)  

    # 輸出 e^x 的估計值
    print(f"當 n = {n} 和 x = {x} 時，e^x 的近似值為: {e_power_x}")
