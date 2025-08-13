#include<stdio.h>
int main(){
	float Area;
	float radius;
	float pi=3.14;
	
	printf("radius of circle is: ");
	scanf("%f",&radius);
	
	Area=pi*radius*radius;
	printf("Area of circle is: %f\n",Area);
	
	return 0;
}
