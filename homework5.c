//Owen Sorge KH29737 CMSC 313 Homework 5
#include <stdio.h>
#include <string.h>

typedef struct {
	const char* owner;
} Car;

void startEngine(const Car *car) {
	printf("%s's car: Engine started!\n", car->owner);
}

void accelerate(const Car *car) {
	printf("%s's car: Pressing gas pedal...\n", car->owner);
}

void brake(const Car* car) {
	printf("%s's car: Applying brakes...\n", car->owner);
}

int main() {
	Car janesCar = { "Jane" };
	Car jacksCar = { "Jack" };
	startEngine(&janesCar);
	accelerate(&janesCar);
	brake(&janesCar);
	startEngine(&jacksCar);
	accelerate(&jacksCar);
	brake(&jacksCar);

	return 0;
}