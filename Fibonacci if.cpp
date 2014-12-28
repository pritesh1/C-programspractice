#include <iostream>
#include <math.h>
using namespace std;
 
// A utility function that returns true if x is perfect square
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
 
// Returns true if n is a Fibinacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
 
// A utility function to test above functions
int main()
{
	long n;
	cin >> n ;
	long input[n];
	for (int i = 0; i < n; i++){
		cin >> input[i] ;
	}
	
  for (int i = 0; i < n; i++){
  
  	 
     isFibonacci(input[i])? cout << "IsFibo\n":
                     		cout << "IsNotFibo\n" ;
	}
  return 0;
}
