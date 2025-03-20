sentence = input("請輸入一句話：")  # 讓使用者輸入一句話
reversed_sentence = sentence[::-1]

# count_a = sentence.count('a') 一行解

count_a = 0

for i in range(len(sentence)) :
    if sentence[i] == 'a' :
        count_a += 1

print(f"反轉結果：{reversed_sentence}")
print(f"字母 a 的數量：{count_a}")

