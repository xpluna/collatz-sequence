// let n = readline()
let n = 10; // Replace number here
let moves = 0;
while (n !== 1) {
	console.log(n);
    n += n%2==0?-n/2:2*n+1;
    moves++;
}
console.log(`\nMoves count = ${moves}`);
