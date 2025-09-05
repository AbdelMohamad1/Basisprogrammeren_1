#include<stdio.h>

float spanning, weerstand, stroom;

int main() {

	printf_s("Wat is uw spanning ");
	scanf_s("%f", &spanning);

	printf_s("Wat is uw weerstand ");
	scanf_s("%f", &weerstand);

	stroom = spanning / weerstand;

	printf_s("De stroom is %0.3f", stroom);



}
