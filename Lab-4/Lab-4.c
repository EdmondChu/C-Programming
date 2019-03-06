#include <stdio.h>

int 
main (void){
	int marksA [2];
	int marksT [2];
	int i, sum=0, failA = 0, failT = 0;
	double avg;
	char grade;
	
	for(i = 0; i <4; i++)
	{
		if (i<=1)
		{
			printf("Enter assignment mark %d:\n",i+1);
			scanf("%d",&marksA[i]);
			
			if(marksA[i] <50)
			{
				failA = 1;
			}
		}
		
		else
		{
			printf("Enter test mark %d:\n",i+1);
			scanf("%d",&marksT[i-2]);
			
			if(marksT[i-2] <50)
			{
				failT = 1;   	 	 
			}
		}
	}
	
	for(i = 0; i <4; i++)
	{
		if (i<=1)
		{
			printf("Your Assignment %d is %d\n", i+1,marksA[i]);
			sum += marksA[i];
		}
		
		else
		{
			printf("Your Test %d is %d\n",i-1,marksT[i-2]);
			sum += marksT[i-2];
		};
	}
	
	avg = (sum*100/4);
	
	if(failA == 1)
		{
			avg = avg - 1000;
		}
	
	avg = avg/100;
		
	if(failT == 1)
	{
		grade = 'F';
	}
	else
	{

		if((int)avg >= 80)
		{
			grade = 'A';
		}
		
		else if((int)avg < 80 && (int)avg >=70)
		{
			grade = 'B';
		}

		else if((int)avg < 70 && (int)avg >=60)
		{
			grade = 'C';
		}
	
		else if((int)avg < 60 && (int)avg >=50)
		{
			grade = 'D';
		}
	
		else
		{
			grade = 'F';
		}
	}
	printf("Your letter grade is %c\n",grade);
	return (0);
}


