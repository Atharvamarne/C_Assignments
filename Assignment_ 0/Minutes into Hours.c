#include<stdio.h>
int main(){
	int minutes;
	int hours;
	int remainingminutes;
	
	printf("Enter the minutes: ");
	scanf("%d",&minutes);
	
	hours=minutes/60;
	remainingminutes=minutes%60;
	
	printf("hours is %d\n",hours);
	printf("minutes is %d\n",minutes);
	return 0;
	
}
