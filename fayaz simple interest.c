#include<stdio.h>
int main()
{
	float p,r,t,interest;
	printf("enter the principle amount : ");
	scanf("%f\n",&p);
	printf("enter the rate  : ");
	scanf("%f\n",&r);
	printf("enter the time req : ");
	scanf("%f\n",&t);
	 interest=p*r*t/100;
		printf("enter the simple interst %lf\n", interest);
	
return 0;
}
