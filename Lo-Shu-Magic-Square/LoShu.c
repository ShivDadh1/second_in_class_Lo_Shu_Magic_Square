#include <stdbool.h>
#include <stdio.h>

void main()
{
    int two_d_array[3][3] = {{4,9,2},{3,5,7},{8,1,6}};
    int additionFirstRow = two_d_array[0][0] + two_d_array[1][0] + two_d_array[2][0];
	int row[3];
	int column[3];
	int diaganol = two_d_array[0][0] + two_d_array[1][1] + two_d_array[2][2];
	int secondDiaganol = two_d_array[2][0] + two_d_array[1][1] + two_d_array[0][2];
	bool isMagicSquare = true;
	for (int i = 0; i < 3; i++) 
	{
		row[0] = row[0] + two_d_array[i][0];
		row[1] = row[1] + two_d_array[i][0];
		row[2] = row[2] + two_d_array[i][0];
	}
	for (int i = 0; i < 3; i++) 
	{
		column[i] = two_d_array[i][0] + two_d_array[i][1] + two_d_array[i][2];
	}
	for (int i = 0; i < 3; i++)
	{
		if (row[i] != additionFirstRow || column[i] != additionFirstRow) 
		{
			isMagicSquare = false;
		}
	}
	if (diaganol != additionFirstRow || secondDiaganol != additionFirstRow)
	{ 
		isMagicSquare = false;
	}
	if (isMagicSquare)
	{
		for(int i=0; i<3; i++) 
		{
    		for(int j=0; j<3; j++) 
			{
      			printf("%d ", two_d_array[i][j]);
    		}
    	printf("\n"); // new line
  		}
		printf("%s", "Lo Shu Magic square\n");
	}
	else
	{
		for(int i=0; i<3; i++) 
		{
    		for(int j=0; j<3; j++) 
			{
      			printf("%d ", two_d_array[i][j]);
    		}
    	printf("\n"); // new line
  		}
		printf("%s", "Not Lo Shu Magic square\n");
	}
}