import random

# 隨機生成一個 1 到 100 之間的數字
answer = random.randint(1, 100)
guess = -1
attempts = 0

# 使用 while 迴圈讓玩家不斷猜，直到猜對為止
while guess != answer:
    guess = int(input("猜一個 1 到 100 之間的數字: "))
    attempts += 1
    if guess < answer:
        print("太小了！")
    elif guess > answer:
        print("太大了！")
    
# 猜對後的提示
print(f"恭喜你，猜對了！你一共猜了 {attempts} 次。")