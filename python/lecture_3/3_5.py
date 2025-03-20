while True:
    n = int(input("Enter a nonnegative integer (0 to quit): "))

    if n < 0:
        print("Please enter a nonnegative integer.")
        continue  # 如果輸入的是負數，重新輸入

    if n == 0:
        print("Program ended.")
        break  # 當輸入 0 時結束程式

    # 計算階乘
    factorial = 1
    for i in range(1, n + 1):
        factorial *= i

    print(f"The factorial of {n} is {factorial}")