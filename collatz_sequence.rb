puts "Enter a number"
n, moves = gets.chomp.to_i, 0

while n != 1
    n += (n % 2 == 0) ? -n/2 : 2*n+1
    puts n
    moves += 1
end

puts "\nMoves count = #{moves}"