import itertools

# 輸入字串
s = input("請輸入一個字串（最多 10 個字母）: ")

# 使用 itertools.permutations 來生成所有長度為 3 的排列
permutations = list(itertools.permutations(s, 3))

# 輸出所有排列組合
# permutations = [('a', 'b', 'c'), ('a', 'c', 'b'), ('b', 'a', 'c')]
for p in permutations:
    print("".join(p))

# 輸出排列組合的總數
print(f"總排列組合數: {len(permutations)}")