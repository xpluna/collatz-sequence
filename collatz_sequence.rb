puts "Enter a number"
n, moves = gets.to_i, 0

while n != 1
	n += n.even? ? -n/2 : 2*n+1
	puts n
	moves += 1
end

puts "\nMoves count = #{moves}"
