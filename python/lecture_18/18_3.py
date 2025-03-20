line_number = int(input())
letter_counts={}
for i in range(line_number) :
    line = input()
    for char in line :
        if char.isalpha():  
            char = char.upper()  
            if char in letter_counts:
                    letter_counts[char] += 1
            else:
                letter_counts[char] = 1

#letter_counts = {'A': 3, 'B': 5, 'C': 3, 'D': 1}
sorted_counts = sorted(letter_counts.items(), key=lambda x: (-x[1], x[0]))

for letter, count in sorted_counts:
    print(f"{letter} {count}")