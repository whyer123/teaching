# 輸入兩個字串 s1 和 s2
s1 = input("請輸入第一個字串: ")
s2 = input("請輸入第二個字串: ")

# 創建一個空的字串 s3 來存放結果
s3 = ""

# 計算最短字串的長度
min_length = min(len(s1), len(s2))

# 交替合併字符
for i in range(min_length):
    s3 += s1[i]  # 添加 s1 的字符
    s3 += s2[i]  # 添加 s2 的字符

# 添加剩餘的部分
s3 += s1[min_length:]  # 如果 s1 有剩餘的字符，添加到 s3
s3 += s2[min_length:]  # 如果 s2 有剩餘的字符，添加到 s3

# 輸出結果
print("合併後的新字串是:", s3)