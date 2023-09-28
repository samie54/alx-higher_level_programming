#!/bin/bash
# Gets byte size of HTTP response header of a given URL
curl -s "$1" | wc -c
