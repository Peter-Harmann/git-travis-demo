#include "fact.h"

int factorial(int n) {
	int product = 1;
	for (int i = n; i > 0; i--) {
		product *= i;
	}
	return product;
}
