/*
 ============================================================================
 Name        : cproject01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void testUpdateinFunction(int);
void testUpdateinFunction2(int *);
int***  allocateSensorTempData(int s, int t, int v);
int*** getSensorTempData();
void printSensorData(int*** p);

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */



		int*** psd = getSensorTempData();
		printSensorData(psd);
		return 0;
}


void testUpdateinFunction(int x) {
	 printf( "Before: The value of x in testUpdateinFunction is %d\n", x );
	 x = 1001;
	 printf( "After: The value of x in testUpdateinFunction is %d\n", x );
}

void testUpdateinFunction2(int *pp) {
	 printf( "Before: The value of *pp in testUpdateinFunction2 is %d\n", *pp );
	 *pp  = 1001;
	 printf( "After: The value of *pp in testUpdateinFunction2 is %d\n", *pp );
}

void printSensorData(int*** p) {
	int i,j;
	for(i=0; i<4; i++) {
		for(j=0; j<24; j++) {
			printf("Sensor %d  - > Time %d  - > Temperature is %d\n", i+1, j+1, p[i][j][0]);
		}
	}
}


int*** getSensorTempData() {
	printf("Entering getSensorTempData");
	int s = 4;
	int t = 24;
	int v = 2;

	//intialize rand
	time_t tt;
	//Intializes random number generator
	srand((unsigned) time(&tt));



	int ***p = allocateSensorTempData(s, t, v);



	int i,j;
	for(i=0; i<s; i++) {
		for(j=0; j<t; j++) {
			p[i][j][0] = rand() % 92;		//temperature
			p[i][j][1] = rand() % 22;		//wind
		}
	}
	printf("Existing getSensorTempData");
	return p;
}

int***  allocateSensorTempData(int s, int t, int v) {
	printf("Entering allocateSensorTempData");
	int ***tempdata = (int***)malloc(s * sizeof(int**));
	int i,j;
		for(i=0; i<s; i++) {
			tempdata[i] = (int**)malloc(t * sizeof(int*));
			for(j=0; j<t; j++) {
				tempdata[i][j] = (int*)malloc(v * sizeof(int*));
			}
		}
	//int (*tempData)[t][v] = malloc(sizeof(int[s][t][v]));
	printf("Existing allocateSensorTempData");
	return tempdata;
}





