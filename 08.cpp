#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int i,j,n;
	printf("�п�J�Ʀrn:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		if(i%j==0)
		break;
		if(i==j)
		printf("%d  ",i);
	}
 } 
