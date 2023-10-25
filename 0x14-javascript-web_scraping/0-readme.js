#!/usr/bin/node
// script  to read and print content of file.

const file = process.argv[2];
const fs = require('fs');

fs.readFile(file, 'utf8', (error, data) => {
  if (error) {
    console.log(error);
  } else {
    console.log(data);
  }
});
