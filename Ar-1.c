//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
//For example
//enter the array size: 2
//enter the elemnts of array A
//enter a[0]:1
//enter a[1]:2
//enter the array size: 3
//enter the elemnts of array B
//enter b[0]:1
//enter b[1]:2
//enter b[2]:3
//Array c:- 1 2 1 2 3
#include<stdio.h>

void main(){
	 int n;
	printf("enter the array size: ");
	scanf("%d",&n);
	
	int a[n];
	
	int i;
	printf("enter the elemnts of array A\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	int m;
	printf("enter the array size: ");
	scanf("%d",&m);
	
	int b[m];

	
	printf("enter the elemnts of array B\n");
	
	for(i=0;i<m;i++)
	{ 
		printf("enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	
	int c[n+m];
	for(i=0;i<n;i++){
		c[i]=a[i];
	}
	for(i=0;i<m;i++){
		c[n+i]=b[i];
	}
	printf("Array c:- ");
	for(i=0;i<n+m;i++){
		printf("%d ",c[i]);
	}
	

	
}	
