pi = 0
k = 1
sign = 1
count = 0
while True:
    pi += 4/k * sign
    if 3.14 <= pi < 3.15:
        break
    sign *= -1
    k += 2
    count += 1

print('pi', pi)
print(k//2)

