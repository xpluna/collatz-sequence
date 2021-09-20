using System;

namespace Program
{
	class CollatzSequence
	{
		static void Main(string[] args)
		{
			Console.Write("Enter a number\n");
			int n = Convert.ToInt32(Console.ReadLine());
			int moves = 0;
			
			while (n != 1)
			{
				if (n % 2 == 0)
				{
					n /= 2;
				}
				
				else
				{
					n *= 3;
					n++;
				}
				
				Console.WriteLine(n);
				moves++;
			}
			
			Console.WriteLine("\nMoves Count = " + moves);
		}
	}
}