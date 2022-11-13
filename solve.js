process.stdin.resume();
process.stdin.setEncoding('utf-8');
let inputString = '';
let currentLine = 0;
const readLine = _ => inputString[currentLine++];

const main = _ => {
// solution goes here....

}

process.stdin.on('data', inputStdin => inputString += inputStdin);
process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => string.trim());
    main();  
});
