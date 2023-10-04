#include <stdio.h>

// Function to return gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Driver code
int main()
{
	int a = 10, b = 15;

	// Function call
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	a = 35, b = 10;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	a = 31, b = 2;
	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	return 0;
}
ALGORITHM
Step1:Take two numbers as input.
Step2:Find the greater of the two numbers.
Step3:Keep on dividing the greater number by the smaller number until remainder becomes 0.
Step4:When the remainder becomes 0 print the smaller number i.e., the denominator as the output.
Step5:Exit

TIME COMPLEXITY
Time Complexity: O(min(a, b))
