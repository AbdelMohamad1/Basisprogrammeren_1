#include<stdio.h>

float BedragExlusiveBtw, BedragInlusiveBtw, Btw;

int main() {
	
	printf_s("Wat is uw bedrag Exlusive Btw ", BedragExlusiveBtw);
		scanf_s("%f", &BedragExlusiveBtw);
		(BedragInlusiveBtw = BedragExlusiveBtw * 1.21);
		(Btw = BedragInlusiveBtw / 1.21 * 0.21);

		printf_s("\nBedragExlusiveBtw         %0.2f", BedragExlusiveBtw);
		printf_s("\nBtw                       %0.2f", Btw);
		printf_s("\n                               +");
		printf_s("\n                          ------");
		printf_s("\nBedragInlusiveBtw         %0.2f", BedragInlusiveBtw);




}
