#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    int len = 10;
	int i;
	int r; 
	int temp;
    int counter = 0;
    int num[len];
	bool isMagicSquare = true;

do
{
    counter = counter + 1;
    for(i = 0; i<10; i++)
	{
        num[temp] = i;
		temp++;
	}
    for( i=9; i>0; i--){
        r = rand()%i;   // random number
        temp = num[i];
        num[i] = num[r];
        num[r] = temp;
    }
    //print the array
    for( i=0; i<len; i++ )
        printf("%d\n",num[i]);

    int two_d_array[3][3] = {{num[0],num[1],num[2]},{num[3],num[4],num[5]},{num[6],num[7],num[8]}};
    int additionFirstRow = two_d_array[0][0] + two_d_array[1][0] + two_d_array[2][0];
	int row[3];
	int column[3];
	int diaganol = two_d_array[0][0] + two_d_array[1][1] + two_d_array[2][2];
	int secondDiaganol = two_d_array[2][0] + two_d_array[1][1] + two_d_array[0][2];
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
		printf("%s", "%i", "Lo Shu Magic square\n", counter);
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
    }  while (isMagicSquare == false);  
}