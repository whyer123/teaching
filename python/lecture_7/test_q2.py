year = int(input("請輸入一個年份："))  # 讓使用者輸入年份

if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print(f"{year} 是閏年")
else:
    print(f"{year} 不是閏年")