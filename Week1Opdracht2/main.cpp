#include<stdio.h>


//Declareren van integers a,b,enc
int a, b, c;


int main() {

	printf_s("Wat is integer a ");
	scanf_s("%d", &a); 

	printf_s("Wat is integer b ");
	scanf_s("%d", &b);

	printf_s("Wat is integer c ");
	scanf_s("%d", &c);

	c = (a + b + c) / 3;



	printf_s("Het Gemiddelede is %d",c);

}