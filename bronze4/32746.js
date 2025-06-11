const fs = require('fs');
const input = fs.readFileSync(0, 'utf-8').trim();
const N = parseInt(input);

const s = "SciComLove";
console.log(N % 2 === 0 ? s : s.split('').reverse().join(''));
