#pragma warning(disable: 4996)
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	FILE * fptr;
	fptr = fopen("textfile.txt", "w");
	srand(time(0));

	float num = 0.0, num1 = 0.0, num2 = 0.0, num3 = 0.0;

	for (int i = 0; i < 3; i++)
	{
		num = (float)rand();
		fprintf(fptr, "%f\n", num);
	}

	fclose(fptr);
	fptr = fopen("textfile.txt", "r");

	fscanf(fptr, "%f\n %f\n %f\n", &num1, &num2, &num3);
	float avg = (num1 + num2 + num3) / 3;
	float def1 = (num1 - avg), def2 = (num2 - avg), def3 = (num3 - avg);
	float squ1 = (def1 * def1), squ2 = (def2 * def2), squ3 = (def3 * def3);
	float squAvg = (squ1 + squ2 + squ3) / 3;
	float stdDev = sqrt(squAvg);
	printf("%f\n %f\n %f\n", num1, num2, num3);
	printf("average: %f\n standard deviation: %f\n", avg, stdDev);

	fclose(fptr);
	
	getchar();
	getchar();
}