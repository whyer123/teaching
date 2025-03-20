from collections import Counter
n = int(input())
for i in range(n):
    lst = []
    if i == 0:
        input()
    if i != 0:
        print()
    while True:
        try:
            s = input()
            lst.append(s)
        except EOFError:
            break
    count = Counter(lst)
    a = len(lst)
    for j in sorted(count):
        print(f"{j} {count[j]} {count[j] / n * 100:.4f}")

