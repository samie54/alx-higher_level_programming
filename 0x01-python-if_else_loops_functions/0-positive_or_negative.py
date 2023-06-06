#!/usr/bin/python3
import random

def check_number(number):
    if number > 0:
        return "positive"
    elif number == 0:
        return "zero"
    else:
        return "negative"

number = random.randint(-10, 10)
print("The number is {}.".format(check_number(number)))
