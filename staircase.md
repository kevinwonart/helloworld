Certainly! To get the decoded message from the message_file.txt create a Node.js script as standard JavaScript running in a browser does not have access to the file system for security reasons. Node.js, however, can read files and decode your message. Here's an example how to decode a text document and return a string from an input file using JavaScript. A function called decode(message_file) is called through a file input variable called data.

```javascript
const fs = require('fs');
const path = require('path');

// Path to the text file
const filePath = path.join(__dirname, "message_file.txt");

function decode(message_file){
  const lines = message_file.split(/\r\n|\n/); // Split the text into lines
  // Remove the last empty element if it exsits
  if (lines.length > 0 && lines[lines.length - 1] === "") {
    lines.pop();
  }

  // Get the number of the pyramid needed for the sentence
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
  ```
