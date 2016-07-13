//Bettina Benitez
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
	
	printf("How many numbers do you want? ");
	int input;
	scanf("%d", &input); //prompt
	int *arrNormal = (int*) malloc(input*sizeof(int)); //malloc for the normal array
	int *arrAscend = (int*) malloc(input*sizeof(int)); //malloc for the ascending array
	int *arrDescend = (int*) malloc(input*sizeof(int)); //malloc for the descending array
	
	printf("Your array numbers are: \n");
	for (int i = 0; i < input; i++) {
		arrNormal[i] = rand() % 101; //gets random number
		printf("%d: %d\n", i + 1,  arrNormal[i]); //prints the original
		arrAscend[i] = arrNormal[i]; //stores in the ascending array
		arrDescend[i] = arrNormal[i]; //stores in the descending array
	}
	
	printf("Ascending Order: \n");
	for (int i = 0; i < input; i++) {
		int temp;
		for (int j = i + 1; j < input; j++) {
			if (arrAscend[i] > arrAscend[j]) { //swap happens
				temp = arrAscend[i]; //holds the first number
				arrAscend[i] = arrAscend[j]; //puts the second number into the first spot
				arrAscend[j] = temp; //the second number takes the first number
			}

		}
		printf("%d: %d\n", i + 1,  arrAscend[i]);
	}

	printf("Descending Order: \n");
	for (int i = 0; i < input; i++) {
		int temp;
		for (int j = i + 1; j < input; j++) {
			if (arrDescend[i] < arrDescend[j]) {
				temp = arrDescend[i];
				arrDescend[i] = arrDescend[j];
				arrDescend[j] = temp;
			}
		}
		printf("%d: %d\n",i + 1, arrDescend[i]);
	}
	free(arrAscend);
	free(arrDescend);
	free(arrNormal);
	return 0;
}
