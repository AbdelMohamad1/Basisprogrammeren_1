#include <stdio.h>


float Radius, Oppervlakte, Omtrek;

int main() {

	printf_s("Wat is het radius van uw cirkel in mm ");
	scanf_s("%f", &Radius); 

	(Oppervlakte = Radius * Radius * 3.14);
		printf_s("\nDe oppervlakte van uw cirkel is %0.4f mm ", Oppervlakte);

		(Omtrek = 2 * Radius * 3.14);
		printf_s("\n\nDe omtrek van uw cirkel is %0.4f mm ", Omtrek);






}
