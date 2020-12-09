#include <stdio.h>
#include <stdlib.h>

int main()
{
	double n[9] = { 0,1,4,9,16,25,36,49,64 };
	double y[9] = { 0,1,2,3,4,5,6,7,8 };
	double s = 1;
	double x;
	double L=0.00;
	scanf_s("%5f",&x);
	for (int i = 0; i <= 8; i++)
	{
		for (int  j= 0; j <= 8; j++)
		{
			if (j != i)
			{
				s=s*(x - n[j])/(n[i]-n[j]);
			}			
		}
		s = s * y[i];
		L = L + s;
		s = 1;
	}
	printf("%5f",L);
	return 0;
}