male_number = int(input("Enter number of males: "))
female_number = int(input("Enter number of females: "))

all_number = male_number + female_number

male_percent = male_number * 100 // all_number 
female_percent = female_number * 100 // all_number 

print(f"Precent males: {male_percent}%")
print(f"Precent males: {female_percent}%")