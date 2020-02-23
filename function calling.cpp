#include<stdio.h>
int addnumbers(int num1, int num2)
{

int sum=num1+num2;



return sum;
}
 int main()
 {
 	int var1, var2;
 	printf("enter number1:");
 	scanf("%d", &var1);
 	printf("enter number2:");
 	scanf("%d", &var2);
 	
 	
 	
 int res= addnumbers( var1, var2);
 printf("output: %d", res);
 return 0;
 }



