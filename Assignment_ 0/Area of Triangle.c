#include<stdio.h>
int main(){
	int base;
	int height;
	int area;
	
	printf("Enter the base: ");
	scanf("%d",&base);
	printf("Enter the height: ");
	scanf("%d",&height);
	
	area=0.5*base*height;
	
	printf("area is %d\n",area);
	return 0;
	
}
