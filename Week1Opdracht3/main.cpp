#include<stdio.h>

int a, b;


int main() {

	printf_s("Wat is integer a ");
	scanf_s("%d", &a);

	printf_s("Wat is integer b ");
	scanf_s("%d", &b);

	if (a > b) {
		printf_s("%d", a);

	}
	else {
		
		printf_s("%d", b);
	
	}

}