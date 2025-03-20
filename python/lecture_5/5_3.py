# 輸入字串
s = input("請輸入一個字串（最多 10 個字母）: ")

# 儲存排列結果
count = 0
s_size = len(s)

# 三層迴圈來生成所有長度為 3 的排列
for i in range(s_size):
    for j in range(s_size):
        if i != j:  # 保證字符不重複
            for k in range(s_size):
                if k != i and k != j:  # 保證字符不重複
                    print(s[i] + s[j] + s[k])
                    count += 1

# 輸出排列組合的總數
print(f"總排列組合數: {count}")