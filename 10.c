#include<stdio.h>

int main()
{
	int a ;
	

	printf("Enter the age of the person: ");
	scanf("%d",&a);


	if (a>=18)
	{
		printf("Eigibal for voting");
	}
	else
	{
		printf("Not eligibal for voting\n You are allowed to vote after %d years ",18-a);
	}	

	return 0;
}
