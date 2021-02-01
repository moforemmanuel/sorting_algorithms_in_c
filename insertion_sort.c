#include <stdio.h>
#include <stdlib.h>

int main(){
int n,i,j,temp,table[1000];
printf("Enter number of elements : \n");
scanf("%d",&n);
printf("Enter %d Integers : \n",n);
for (i=0;i<n;i++)
scanf("%d",&table[i]);
for (i=1;i<=n-1;i++){
		j=i;
		while(j>0 && table[j-1]>table[j])
		{
			temp = table[j];
			table[j]=table[j-1];
			table[j-1]=temp;
			j--;
		}
	}
	printf("Sorted List in ascending order is : \n");
		for(i=0;i<=n-1;i++)
		printf("%d \n",table[i]);
		
	return 0;
}

