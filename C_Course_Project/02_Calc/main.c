// solve system of equation 
// polynomial equations 

#include<stdio.h>
#include<stdlib.h>

float power(float val, int pow) {
	float power_val = 1.0;
	if (pow == 0) {
		power_val = power_val;
	}
	else {
		while (pow != 0) {
			if (pow > 0) {
				pow = pow - 1;
				power_val = power_val * val;
			}
			else {
				pow = pow + 1;
				power_val = power_val * (1 / val);
			}
		}
	}
	return power_val;
}


float find_value(float* ptr_coff, int n, int len, float x) {
	float y = 0 ;
	float *x_pows;

	x_pows = power(x, n);
	n = n - 1;

	for (int i = 0; i < len; i++) {
		y = y + ptr_coff[i] * x_pows[i];
	}
		
	return y;
}

int main() {

	int degree_poly;
	float x = 2;
	printf("Enter the highest degree for polynoial equation\n");
	scanf_s("%d", &degree_poly);

	int length_coeffs = degree_poly + 1;

	float *coeffs;
	coeffs = (float*)malloc(length_coeffs * sizeof(float));
	printf("Enter the coefficients for polynoial equation\n");

	for (int i = 0; i < length_coeffs; i++) {
		scanf_s("%f", &coeffs[i]);
	}
	float* ptr_coeffs;
	ptr_coeffs = coeffs;
	printf("%f\n", power(2, 0));
	printf("%f", find_value(ptr_coeffs, degree_poly, length_coeffs, x));

	free(coeffs);
	printf("Enter Key");
	scanf_s("Wait");
	return 0;

}