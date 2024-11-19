#include<stdio.h>

int main(){
	// khai bao bien
	int radius = 2;
	float pi = 3.14;
	
	// Tinh chu vi va in ra ket qua
	int perimeter = 2 * pi * radius;
	printf("Ket qua perimeter la %d \n", perimeter);
	
	// Tinh dien tich va in ra ket qua
	int acreage = pi * (radius * radius);
	printf("Ket qua acreage la %d \n", acreage);

	return 0; 
}
