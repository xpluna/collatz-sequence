print("Enter a number\n");
$n = <>;
$moves = 0;

while ($n != 1){
	if ($n % 2 == 0) {
		$n /= 2;
	}
	
	else {
		$n *= 3;
		$n += 1;
	}
	print("$n\n");
	$moves += 1;
}

print("\nMoves Count = $moves")