#include <stdio.h>
int main()
{
	int a,b,i,c=0,d; //c bölen, d kalan olarak aldým.
	
	printf("Enter the first number.");
	scanf("%d",&a);
	
	printf("Enter the second number.");
	scanf("%d",&b);
	
	for(i=0; i<a; i++)
	{
		a=a-b;
		c++;
		if(a<b && a>0)
		{
			d=a;
		}
	}
	
	printf("The division is %d and the remainder is %d.\n",c,d);
	
	return 0;
}
