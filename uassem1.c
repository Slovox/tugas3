#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr(int);

int main()
{
	int bil;

	printf("Berikan banyak isi array: ");
	scanf("%d", &bil);

	arr(bil);

	return 0;
}

int arr(int bil)
{
	int i, arr_bil[bil];
	
	srand(time(NULL));

	for (i = 0; i < bil; i++)
	{
		
	}
		if(i != bil)
			i = 0;

		else
		{
			arr_bil[i] = (rand() % bil + 1);

			printf("Array ke %d = %d\n", i , arr_bil[i]);
		}

	return arr(bil - 1);
}
