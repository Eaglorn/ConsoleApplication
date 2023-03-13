#include <stdio.h>
#include <stdlib.h>

void mas(int arg[], int count)
{
	for (int i = 0; i < count; i++)
    {
    	arg[i]=rand();
    	printf("%i ", arg[i]);
    }
    printf("\n");
}

int main()
{
	int row,column;
	
	int mas1[5];
	int mas2[10];
	
	mas(mas1,5);
	mas(mas2,10);
    
}


