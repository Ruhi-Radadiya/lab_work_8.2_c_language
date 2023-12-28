//Q.3 Write a Program to find square of each element from the given array.
//For example,
//Enter size of Array:5
//Enter a[0]:7
//Enter a[1]:4
//Enter a[2]:9
//Enter a[3]:6
//Enter a[4]:3
//The squre are : 49
//The squre are : 16
//The squre are : 81
//The squre are : 36
//The squre are : 9
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter size of Array:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
			printf("The squre are : %d\n",a[i]*a[i]);	
	}

}