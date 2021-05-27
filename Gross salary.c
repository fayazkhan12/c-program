
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
#include<stdio.h>
 
int main() {
   int gross_salary, basic, da, ta;
 
   printf("Enter basic salary : ");
   scanf("%d", &basic);
 
   da = (10 * basic) / 100;
   ta = (12 * basic) / 100;
 
   gross_salary = basic + da + ta;
 
   printf("\nGross salary : %d", gross_salary);
   return (0);
}
