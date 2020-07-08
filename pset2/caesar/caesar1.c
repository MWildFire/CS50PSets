#include <stdio.h>
#include <cs50.h>


const int N = 10;

int main()
{
	int mass[N], max, min;

	printf("Элементы: |");
	for(int r = 0; r<N; r++)
	{
		mass[r] = r;
		printf( "%d|", mass[r]);
	}
	printf("\n");

	max = mass[0];
	min = mass[0];
	for(int r = 1; r<N; r++)
	{
		if(max < mass[r]) max = mass[r];
		if(min > mass[r]) min = mass[r];
	}
	printf("Min:%d\n", min);
	printf("Max:%d\n", max);

	return 0;
}