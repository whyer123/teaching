price = input("請輸入消費金額: ")
price = int(price)

give_change = 100 - price

fifty = give_change // 50
give_change = give_change % 50

ten = give_change // 10
give_change = give_change % 10

five = give_change // 5
give_change = give_change % 5

print("50: ", fifty)
print("10: ", ten)
print(" 5: ", five)
print(" 1: ", give_change)