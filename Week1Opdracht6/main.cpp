#include<stdio.h>

float a;


int main() {

	printf_s("Wat is integer a  ", a);
	scanf_s("%f", &a);
	printf_s("Dit in het aangegeven cijfer met 4 decimale = %0.4f", a);// als ik 0,x zet voor f dan bepaal ik de decimale//
}