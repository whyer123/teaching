n = int(input("請輸入一個數字 n："))  # 讓使用者輸入 n
total = 0
sign = 1  # 用來控制正負號

for i in range(1, n + 1):
    term = sign * (2 * i - 1) / i
    if i == n:
        nth_term = round(term, 2)  # 取到小數點後兩位
    total += term
    sign *= -1  # 每一項的符號交替

total = round(total, 2)
print(f"第 {n} 項是: {nth_term}")
print(f"前 {n} 項的和: {total}")