#include<stdio.h>

int a, b, c;


int main() {

	printf_s("Wat is integer a ");
	scanf_s("%d", &a);

	printf_s("Wat is integer b ");
	scanf_s("%d", &b);

	printf_s("Wat is integer c ");
	scanf_s("%d", &c );

	if (a > b && a> c) {
		printf_s("%d", a);

	}
	else if (b > a && b> c) {

		printf_s("%d", b);

	}
	else{
		printf_s("%d", c);

	}
		
	


}