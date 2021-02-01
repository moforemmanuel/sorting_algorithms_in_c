#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,n,temp,array[100];
	printf("Enter number of elements : \n");
	scanf("%d",&n);
	printf("Enter %d Integers : \n",n);
	for (i=0;i<n;i++)
	scanf("%d",&array[i]);
	
		for (i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(array[i]>array[j])
				{
					temp=array[i];
					array[i]=array[j];
					array[j]=temp;
				}
			}
		}
		printf("Sorted Elements in Ascending order is : \n");
		for(i=0;i<n;i++)
		printf("%d \n",array[i]);
		
		return 0;
	}

