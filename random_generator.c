#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* generator(int);

main()
{
	int n;
	printf("Enter length of array:\n");
	scanf("%d",&n);
	int* result=generator(n);
	int i;
	
	for(i=0;i<n;i++){ //printing the array
		printf("%d ",*result+i);
	}
	
 //freeing allocated memory
		free(result);
		result++;
	
}

int* generator(int n)
{
	srand(time(NULL));
	int i,j;
	int *p_arr;
	p_arr=(int*)malloc(sizeof(int)*n); //generating the array of n ints
	for (i=0;i<n;i++){
		*(p_arr+i)=rand()%100;
		for(j=0;j<n;j++){
			if(*(p_arr+i)==*(p_arr+j)){
				*(p_arr+j)=rand()%100;
			}
		}
	}
	return p_arr;
	
}
