#include<stdio.h>
int main(){
	int maths=68;
	int sci=56;
	int marathi=82;
	int eng=79;
	int eco=57;
	float Percentage;
	int total;
	total=maths+sci+marathi+eng+eco;
	printf("total marks is %d\n",total);
	
	Percentage=total/5.0;
	
	printf("Percentage is %f\n",Percentage);
	return 0;
	
}
