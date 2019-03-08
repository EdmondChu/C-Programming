#include <stdio.h>

int 
main(void){
	int a,b,c, largest, smallest;
	
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&a ,&b, &c);
		
	largest = max_of_3(a,b,c);
	smallest = min_of_3(a,b,c);	   
	
	printf("Largest number is %d\n",largest);
	printf("Smallest numebr is %d\n", smallest);
	printf("%d, %d, %d, S:%d, L:%d\n",a,b,c,smallest,largest);
	return(0);
}

int max_of_3(int a, int b, int c)
{	 
	int larger;
	
	if(a>b)
	{
		larger = a;
	}
	
	else
	{
		larger = b;
	}
	
	if (c > larger)
	{
		larger = c;
	}
	
	return (larger);
}

int min_of_3(int a, int b, int c)
{
	int smaller;
	
	if(a<b)
	{
		smaller = a;
	}
	
	else
	{
		smaller = b;
	}
	
	if (c < smaller)
	{
		smaller = c;
	}

	return(smaller);
}

