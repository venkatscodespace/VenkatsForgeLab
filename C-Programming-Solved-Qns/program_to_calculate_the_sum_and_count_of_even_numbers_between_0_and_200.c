#include <stdio.h>

int main()
{
	int c=0,sum=0;
	for (int i=0; i<200; i++)
	{
	    if (i%2==0)
	    {
	        c+=1;
	        sum+=i;
	    }
	}
	printf("Sum: %d",sum);
	printf("\nCount: %d",c);
	return 0;
}
