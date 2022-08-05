#include "pch.h" 
#include <utility>
#include <limits.h>
#include "Hypatia.h"
#include <stdexcept>

static unsigned long long result;

unsigned long long rad_deg(
	unsigned long long a
) {
	result = a * 180;
	return result;
}

unsigned long long deg_rad(
	unsigned long long a
) {
	result = 180 / a;
	return result;
}
unsigned long long factorial(
	unsigned long long a
) {
	if (a < 0) {
		return 0;
	}
	else {
		for (int i = 1; i <= a; ++i) {
			result *= i;
		}
	}
	return result;
}
unsigned long long permutation(
	unsigned long long a, unsigned long long b
) {
	result = factorial(a) / factorial(a - b);
	return result;
}

unsigned long long combination(
	unsigned long long a, unsigned long b
){
	result = factorial(a) / (factorial(b) * factorial(a - b));
	return result;
}

unsigned long long pascal_row(
	unsigned long long a, unsigned long long b
){
	for (b >= 0; b--;) {
		result = combination(a, b);
		return result;
	}
}

unsigned long long katsman_row(
	unsigned long long a, unsigned long long b
) {
	for (b >= 0; b--;) {
		result = permutation(a, b);
		return result;
}
