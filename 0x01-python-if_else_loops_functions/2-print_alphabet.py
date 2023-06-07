#!/usr/bin/python3
# This function prints the lowercase alphabet.
def print_alphabet():
    for char in range(ord('a'), ord('z') + 1):
        print(chr(char), end="")
 
 
if __name__ == "__main__":
    print_alphabet()
