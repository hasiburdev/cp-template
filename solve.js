process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here

// your code goes here
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
	console.log("END");
   processData(_input);
});

function processData(input) {
    //Enter your code here
    input=input.split("\n");
    var t=Number(input.shift());
    while(t>0){         
        solve(input);
        t--;
    }
} 

function solve(data) {
    console.log(data)
 
}
