#include <stdio.h>
#include <assert.h>

int Fibonacci(int n) // This is a Recursive Function that calculates the nth Fibonacci Number.
{
    assert(n>0);
    if (n > 2)
        return (Fibonacci(n-1) + Fibonacci(n-2));
    else
        return 1;
}

int printOutputString(int FibonacciNum){
    
    if (FibonacciNum%15 == 0)
        printf("FizzBuzz\n");
    else if (FibonacciNum%5 == 0)
        printf("Fizz\n");
    else if (FibonacciNum%3 == 0)
        printf("Buzz\n");
    else if (isPrime(FibonacciNum) == 1)
        printf("BuzzFizz\n");
    else
        printf("%d\n", FibonacciNum);
}

int isPrime(int FibonacciNum) // This function checks if a number is Prime
{
    int i = 0, flag = 0;
    for (i = 2; i<FibonacciNum/2;i++)
    {
        if(FibonacciNum%i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 0;
    else 
        return 1;
}

int main() {
	int FibonacciNum,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
    FibonacciNum = Fibonacci(n);
    printOutputString(FibonacciNum);
	return 0;
}