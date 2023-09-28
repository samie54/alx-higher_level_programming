#!/bin/bash
# Show all HTTP methods of a given URL accepted from a server
curl -sI "$1" | grep "Allow" | cut -d " " -f 2-
