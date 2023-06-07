#!/usr/bin/python3
/*Prints the hexadecimal representations of the numbers from start to end*/
 
  /*********************************
  Args
    start: The starting number.
    end: The ending number.
  *********************************/
 
 for i in range(0, 99):
    print("{} = {}".format(i, hex(i)))
