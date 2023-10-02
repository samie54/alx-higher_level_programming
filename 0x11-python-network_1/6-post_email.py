#!/usr/bin/python3
"""
Python script: accepts in a URL; sends a request to the URL and displays the value.

"""
import requests
from sys import argv

if __name__ == '__main__':
    payload = {'email': argv[2]}
    r = requests.post(argv[1], data=payload)
    print(r.text)
