#!/usr/bin/python3
def print_numbers(start, end):
  for i in range(start, end + 1):
    print("{:0>2d}".format(i), end=", ")

if __name__ == "__main__":
  print_numbers(0, 100)
