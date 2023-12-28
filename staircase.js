const fs = require('fs');
const path = require('path');

const filePath = path.join(__dirname, "message_file.txt");

function decode(message_file){
  const lines = message_file.split(/\r\n|\n/);
  if (lines.length > 0 && lines[lines.length - 1] === "") {
    lines.pop();
  }
  let index = 0;
  let sentence = "";
  for (let i = 1; index < lines.length; i ++) {
    index += i;
    for (const line of lines) {
      const parts = line.split(' ');
      if (parts.length > 1 && parts[0] === index.toString()) {
        sentence += parts[1] + " ";
      }
    }
  }
  sentence = sentence.slice(0, -1);
  return sentence;
}
const data = fs.readFileSync(filePath, 'utf8');
console.log(decode(data));
/*
function getword(nums) {
  get line number;
  get word until last line number is gotten
  first word is 1.
    next word is count plust index;
  output
}
import G
function get
*/
