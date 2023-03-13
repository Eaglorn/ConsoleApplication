#include <stdio.h>

int main()
{
	int row,column;
    
    printf("Количество строк=");
    scanf("%i", &row);
    
    printf("Количество столбцов=");
    scanf("%i", &column);
    
    row=row-1;
    column=column-1;
	
	int mas[row][column];
    
    for (int j = 0; j <= row; j++)
    {
    	for (int k = 0; k <= column; k++)
    	{
    		scanf("%i", &mas[j][k]);
    	}
    }
    
}
