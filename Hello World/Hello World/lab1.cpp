#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	 // Replace this line with your code (have fun!).
	int gcd = 0;
	for (int i = 1; i <= a || i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}
	return gcd;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n <= 1)
	{
		return n;
	}
	// Replace this line with your code (challenge: do this with recursion!).
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
