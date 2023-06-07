#!/usr/bin/python3
def print_hex(start, end):
  for i in range(start, end + 1):
    print("{} = {}".format(i, hex(i)))

print_hex(0, 99)
