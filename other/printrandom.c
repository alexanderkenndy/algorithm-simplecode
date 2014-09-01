#include<stdio.h>
#include<malloc.h>

void combination(int arr [], int nLen, int m, int out [], int outLen);
void printCombination(int arr[], int nLen, int m);
int main(void)
{
	int arr [] = {1,2,3,4,5,6};
	printCombination(arr,6,4);
	return 0;
}

void combination(int arr [], int nLen, int m, int out [], int outLen)
{
	if (m == 0) 
	{
		int j;
		for (j = 0; j < outLen; j++)
		{
			printf(" %d", out[j]);
		}
		printf("\n");
		return;
	}

	int i;
	for (i=nLen; i >= m; --i)
	{
		out[m-1] = arr[i-1];
		combination(arr,i-1,m-1,out,outLen);
	}
}

void printCombination(int arr[], int nLen, int m)
{
	if(m > nLen) 
	{
		return;
	}

	int *out = (int *) malloc(sizeof(int));
	combination(arr,nLen,m,out,m);
	free(out);
}
