#!/usr/bin/python3
numbers = []
for i in range(1, 10):
    for j in range(i, 10):
        if i != 8:
            numbers.append(i * 10 + j)

for number in numbers:
    print(number, end=", ")
