#include<stdio.h>

float km_per_h;
double m_per_s;


int main() {

	printf_s("Wat is uw snelheid in km/h ", km_per_h);
	scanf_s("%f", &km_per_h);

	m_per_s = km_per_h / 3.6;

	printf_s("Uw snelheid in m/s is %1f", m_per_s);




}