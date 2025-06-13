const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];
rl.on("line", function (line) {
    input.push(line);
    if (input.length === 2) {
        const N = parseInt(input[0]);
        const s = input[1];
        if (s.includes("ooo")) {
            console.log("Yes");
        } else {
            console.log("No");
        }
        rl.close();
    }
});