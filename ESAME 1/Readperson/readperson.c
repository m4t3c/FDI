#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

struct person {
	char name[256];
	unsigned int age;
};

void person_read(FILE* f, struct person* pp) {

	fscanf(f, "%s %u", pp->name, &pp->age);

	return;
}