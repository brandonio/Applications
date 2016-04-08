#include <stdio.h>
#include <stdbool.h>


bool mult3(int i)
{
	if(i%3 == 0)
{
	return true;
}
return false;
}

bool mult5(int i)
{
	if(i%5 == 0)
{
	return true;
}
return false;
}


int main()
{
	for(int i = 1; i <= 100; i++)
{
	if(mult3(i) && mult5(i))
{
	printf("FizzBuzz\n");
}
else if(mult5(i))
{
	printf("Buzz\n");
}
else if(mult3(i))
{
	printf("Fizz\n");
}
else
{
	printf("%d\n", i);
}
}
}














