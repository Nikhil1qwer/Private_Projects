#include<stdio.h>

  int main ()
  {
  	float k,l;
  	
  	printf("\n Enter a weight in kilograms: ");
  	scanf("%f",&k);
  	
  	while (k>0.00)
  	{
  		l = k * 2.2;
  		
  		printf("L = %.2f",l);
  		printf("\n Enter a weight in kilograms: ");
  		scanf("%f",&k);
	}
	
	printf("That's all for now!!");
	return 0;
  }
