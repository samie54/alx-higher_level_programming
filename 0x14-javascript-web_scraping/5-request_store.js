#!/usr/bin/node
// Script to gets contents of webpage; stores it in a file.

const fs = require('fs');
const request = require('request');
request(process.argv[2]).pipe(fs.createWriteStream(process.argv[3]));
