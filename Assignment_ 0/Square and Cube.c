#include<stdio.h>
int main(){
	int number;
	int square;
	int cube;
	
	printf("Enter number: ");
	scanf("%d",&number);
	
	square=number*number;
	cube=number*number*number;
	
	printf("square is %d \n",square);
	printf("cube is %d \n",cube);
	return 0;
}
