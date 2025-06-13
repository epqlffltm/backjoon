const input = require('fs').readFileSync('/dev/stdin', 'utf8').trim().split('\n');

const N = Number(input[0]);
const S = input[1];

let sum = 0;
for (let i = 0; i < N; i++) {
    if (S[i] === 'j' || S[i] === 'i') 
      sum += 2;
    else if (S[i] === 'o') 
      sum += 1;
}

console.log(sum);
