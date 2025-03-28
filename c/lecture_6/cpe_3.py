word_list = []

while True:
    try:
        line = input().lower().split()  # 讀取並轉小寫
    except EOFError:
        break

    for word in line:
        cleaned_word = ""  # 用來存儲只包含字母的單詞
        for c in word:
            if c.isalpha():  # 只保留字母
                cleaned_word += c  # 手動累加字母
        
        if cleaned_word and cleaned_word not in word_list:  # 手動去重
            word_list.append(cleaned_word)

# 排序後輸出
word_list.sort()
for word in word_list:
    print(word)