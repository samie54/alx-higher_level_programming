#!/usr/bin/python3

import random


def get_last_digit(number):
    if number < 0:
        return -number % 10
    else:
        return number % 10


def check_last_digit(digit):
    if digit > 5:
        return 'greater than 5'
    elif digit == 0:
        return '0'
    else:
        return 'less than 6 and not 0'


number = random.randint(-10000, 10000)
digit = get_last_digit(number)

print 'Last digit of {} is {} and is {}'.format(number, digit,
        check_last_digit(digit))
