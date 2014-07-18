/*������ ʵ�֣��㷨���Ӷ�O(nlogn)*/
#include<stdio.h>
#include<stdlib.h>
/*����ڵ�i�����������������ѣ�����ʹ�ڵ�i�������������*/
void maxHeap(int A[],int len,int i)
{
	int l,r,large,temp;
	l=2*i;
	r=2*i+1;
	large=i;
	if(l<len)
	{
		if(A[l]>A[i])
		{
			large=l;
		}
	}
	if(r<len)
	{
		if(A[r]>A[large])
		{
			large=r;
		}    
	}
	if(large!=i)
	{
		temp=A[large];
		A[large]=A[i];
		A[i]=temp;
		maxHeap(A,len,large);
	}
}
/*���������*/
void buildMaxHeap(int A[],int len)
{
	int i;
	for (i=len/2-1;i>=0;i--) {
		maxHeap(A,len,i);
	}
}

/*������*/
void maxHeapSort(int A[],int len)
{
	int i,temp;
	buildMaxHeap(A,len);
	printf("build max root heap\n");
	for (i=0;i<len;i++)
		printf("%d ",A[i]);
	printf("\n");
	for(i=len;i>1;i--)
	{
		temp=A[0];
		A[0]=A[i-1];
		A[i-1]=temp;
		printf("%d  ",A[i-1]);
		buildMaxHeap(A,i-1);
	}
	printf("\n");
}
/*���Զ�����*/
int main()
{
	int i;

	int A[11]={4,1,3,2,16,9,10,14,8,7,6};
	maxHeapSort(A,11);

	for(i=0;i<11;i++)
	{
		printf("%d  ",A[i]);
	}
	printf("\n");
}
