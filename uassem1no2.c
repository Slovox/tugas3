#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int htg(int, int);
int prima(int, int);

int true = 1;
int false = 2;

int main()
{
	int bil, ang;
	
	printf("Berikan batas range (1-...): ");
	scanf("%d", &bil);

	printf("Berikan banyak bilangan random yang diinginkan: ");
	scanf("%d", &ang);

	htg(bil, ang);
	
	return 0;
}


int htg(int bil, int ang)
{	
	int i, p = 0;
	int arr_bil[bil];
 
	srand(time(NULL));

	for (i = 0; i < ang; i++)
	{	
		arr_bil[i] = rand() % bil + 1;
		// printf("Bilangan: %d\n", arr_bil[i]);

		if (arr_bil[i] >= 1)
		{
			if (prima(arr_bil[i], 2) == true)
				{ 
					printf("%d bilangan Prima\n",arr_bil[i]); 
					p++;
				}
			// else
		 //    	{
			// 		printf("%d bukan bilangan Prima\n",arr_bil[i]); 
			// 	}	

		}
	}
	printf("banyak bilangan prima: %d\n", p);

	return arr_bil[i];
}

int prima(int n, int i) 
{ 
    if (n <= 2) 
        return (n == 2) ? 1 : 2; 
    if (n % i == 0) 
        return 2; 
    if (i * i > n) 
        return 1; 
  
    return prima(n, i + 1); 
} 

