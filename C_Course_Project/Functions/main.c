#include <stdio.h>

void sayHello() {
	printf("Hello\n");
}

void greet(char aName[]) {
	printf("Hello %s\n", aName);
}

int add(int num1, int num2) {
	num1 = num1 + num2;
	return num1;
}

double divide(int num1, int num2) {
	return num1 / num2;
}

double multiply(int num1, int num2) {
	return num1 * num2;
}

int main(int argc, char **argv) {
	double result;
	int n1;
	int n2;
	int total;

	n1 = 10;
	n2 = 3;

	sayHello();
	greet("Fred");

	total = add(n1, n2);
	printf("%d + %d = %d\n", n1, n2, total);
	result = divide(100, 3);
	printf("Result = %f\n", result);
	printf("Result of multiplication = %f\n", multiply(10, 49));

	scanf_s("Wait on output window");

	return 0;
}
