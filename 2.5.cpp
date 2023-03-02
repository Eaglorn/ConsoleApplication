#include <stdio.h>

int main()
{
    for (i = 1; i <= 9; i++)
    {
        printf("hello");
    }
    
    for (i = 0; i <= 15; i++)
    {
        printf(i);
    }
    
    for (i = 0; i <= 15; i++)
    {
        if (i % 2 == 1)
		{
			printf(i);
		}
    }
    
    for (i = 5; i <= 16; i++)
    {
        printf(i);
    }
}
