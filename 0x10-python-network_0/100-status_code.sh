#!/bin/bash
# Sends 'GET' request to a given 'URL' ; & shows response status code
curl -s -o /dev/null -w "%{http_code}" "$1"
