const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];
rl.on('line', (line) => {
    input.push(line.trim());
    if (input.length === 3) {
        const n = parseInt(input[0]);
        const a = input[1];
        const b = input[2];
        
        let count = 0;
        for (let i = 0; i < n; i++) {
            if (a[i] !== b[i]) count++;
        }

        console.log(count);
        rl.close();
    }
});
