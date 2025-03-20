import string

input_str = "hello, friend!... welcome."
output_str = input_str

for char in string.punctuation:
    output_str = output_str.replace(char, "")

print(output_str)