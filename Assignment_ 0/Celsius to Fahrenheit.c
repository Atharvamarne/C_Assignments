#include<stdio.h>
int main(){
	float Fahrenheit;
	float Celsius;
	
	printf("Enter temperature in Celsius: ");
	scanf("%f",&Celsius);
	
	Fahrenheit=(Celsius*9/5)+32;
	
	printf("temperature in Fahrenheit: %.2f\n",Fahrenheit);
	
	return 0;
}
