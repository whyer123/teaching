a = 0
b = 1
i = 1
n = int(input('input n:'))
while i < n: #n=3
    c = a + b
    a, b = b, c
    #a=b , b=c
    i += 1

print(n, '-th is', c)

# 1 1 2 3 5 8 13 
# a b c
#   a b c
#     a b c

