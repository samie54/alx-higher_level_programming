#!/bin/bash
# Bash script sends a POST request to givenn 'URL'
curl -s -X POST -d "email=test@gmail.com&subject=I am here for PLDs every time" "$1"
