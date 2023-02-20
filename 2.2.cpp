#include <stdio.h>

int main()
{
    int a,b;
    
    printf("a=");
    scanf("%i", &a);
    
    printf("b=");
    scanf("%i", &b);
	
	if(a>b)
	{
		printf("a больше");
	}
	else
	{
		if (a<b)
		{
			printf("а меньше");
		}
		else
		{
			printf("а и b равны");
		}
	}
}
