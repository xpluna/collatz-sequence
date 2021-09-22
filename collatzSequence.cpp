#include <iostream>

using namespace std;

int main(){
	cout << "Enter a number" << endl;
	
	int n;
	cin >> n;
	
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
		
		cout << n << endl;
		moves++;
	}
	
	cout << "\nMoves count = " << moves;
	
	return 0;
}