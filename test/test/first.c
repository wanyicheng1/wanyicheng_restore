#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int x,sum = 0;
	scanf_s("%d", &x);
	double j = 0;
	int n = 3;
	for (int i = 5; i >= 1; i--)
	{		
		if (i % 2 == 0)
		{
			sum = sum * x;
		}
		else
		{			
			sum = sum * x + (pow(-1,j/2))*n;
			n--;
		}
		j++;
	}
	sum = sum * x + 7;	
	printf("%d\n", sum);
}