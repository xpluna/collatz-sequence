n, moves = int(input("Enter a number\n")), 0

while n != 1:
	if n % 2 == 0:
		n //=2
	
	else:
		n *= 3
		n += 1
	
	print(n)
	moves += 1

print(f"\nMoves Count = {moves}")