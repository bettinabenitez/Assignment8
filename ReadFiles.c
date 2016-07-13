//Bettina Benitez
#include <stdio.h>
#include <math.h>

int main () {
	FILE *openFile;
	float c, total = 0;
	int n = 0;
	float arr[11];
	openFile = fopen("trial.txt", "r");
	while (fscanf(openFile, "%f", &c) != EOF) {
		printf("%d %.1f\n", n, c);
		arr[n] = c;
		n++;
	}
	for (int i = 0; i < 11; i++) {
		total += arr[i];
	}
	float ave = total/11;
	printf("\nAverage is: %.2f", ave);
	for (int i = 0; i <11; i++) {
		arr[i] -= ave;
		arr[i] = sqrt(arr[i]);
	}
	float mean;
	for (int i = 0; i < 11; i++) {
		mean += arr[i];
	}
	mean = mean/11;
	float stdev = sqrt(mean);
	printf("\nStandard Deviation is: %.2f", stdev);
	return 0;
}
