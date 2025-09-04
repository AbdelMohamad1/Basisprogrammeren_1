#include<stdio.h>

int a, b;


int main() {

	printf_s("Wat is integer a", a);
	scanf_s("%d", &a);

	printf_s("Wat is integer a", b);
	scanf_s("%d", &b);

	if (a == b) {
		printf_s("Gelijk");
	}
	else{
		printf_s("Ongelijk");
	}


}