#!/bin/bash
# Bash script sends a POST request to givenn 'URL'
curl -s -X POST -d "email=someone@email.com&subject=I am here for PLDs every time" "$1"
