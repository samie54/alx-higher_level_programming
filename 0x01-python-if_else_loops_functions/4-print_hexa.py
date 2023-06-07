#!/usr/bin/python3
def print_hex(start, end):
  """Prints the hexadecimal representations of the numbers from start to end.
 
  Args:
    start: The starting number.
    end: The ending number.
 
  """
  for i in range(start, end + 1):
    print("{} = {}".format(i, hex(i)))
 
if __name__ == "__main__":
  print_hex(0, 99)
