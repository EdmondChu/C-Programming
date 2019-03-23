#include <stdio.h>

int 
main(void){
	
	int num, r,tens, adress;
	
	printf("Enter a number from 10 to 99\n");

	do
	{
		scanf("%d",&num);
	}while(num <10 || num >99);
	
	tens = f1(num);
	printf("%d\n",tens); 
	
	r =f2(num);
	printf("%d\n",r); 
	
	adress = f_adress(num);
	printf("%d\n",adress);
	return(0);
}

int f1(int num)
{
	return(num/10);
}

int f2(int num)
{
	return(num%2);
}

void f_adress (int num)
{
	return (void);
}


