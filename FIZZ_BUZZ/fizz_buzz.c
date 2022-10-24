#include <stdio.h>

/**
 * main - prints integers one-to-N, labeling any integers divisible by three as “Fizz,” integers divisible by five as “Buzz” and integers divisible by both three and five as “FizzBuzz.”
 *
 * Return: Always (0) Success
 */

int main(void)
{
		int count = 0;
		int num;

//Takes number breakpoint input from user
		printf("Enter number breakpoint: ");
		scanf("%d", &num);
  
	while(count < num)
	{
//increments the count variable
		count++;

//Prints "Fizz" if count is divisible by 3, but not by 5
		if (count % 3 == 0 && count % 5 != 0)
		{
		  printf("%s\n", "Fizz");
		}

//Prints "Buzz" if count is divisible by 5, but not by 3 
		else if(count % 5 == 0 && count % 3 != 0)
         {
				 printf("%s\n", "Buzz");
		 }

//Prints "FizzBuzz" if count is divisible by both 3 and 5
		else if(count % 5 == 0 && count % 3 == 0)
		{
				printf("%s\n", "FizzBuzz");
		}

//Prints current count value if count is neither divisible by 3 nor 5
		else
		{
				printf("%d\n", count);
		}
	}

	return (0);
}

