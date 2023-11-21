// To print out the grade of a student in three subjects
// Name: Evans Jephunneh
// Matric No.: AUL/PYE/23/002
// Department: Physics
// Prog.: Physics and Electronics
#include<stdio.h>
#include<stdlib.h>



int main()
{
	float gst211, mth212, cmp211;
	
	printf("What is your persentage score in gst211? ");
	scanf("%f", &gst211);
	printf("What is your persentage score in mth212? ");
	scanf("%f", &mth212);
	printf("What is your persentage score in cmp211? ");
	scanf("%f", &cmp211);
	
	float Average = (gst211 + mth212 + cmp211)/3;
	
	if(Average >= 70 )
	{
		printf("\nYour grade is A");
	}
	else if (Average >= 60)
	{
		printf("\nYour grade is B");
	}
	else if (Average >= 50)
	{
		printf("\nYour grade is C");
	}
	else if (Average >= 40)
	{
		printf("\nYour grade is D");
	}
	else if (Average >= 30)
	{
		printf("\nYour grade is E");
	}
	else
	{
		printf("\nYour grade is F");
	}
	
	return 0;
}


