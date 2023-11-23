#include <stdio.h>

int recursiveMaximum(const int array[], int size)
{

	if (size == 1) 
	{
		return array[0];
	}
	int maxOfRest = recursiveMaximum(array + 1, size - 1);
	return (array[0] > maxOfRest) ? array[0] : maxOfRest;
}

int main() 
{
	int myArray[] = { 15, 7, 22, 43, 11 };
	int max = recursiveMaximum(myArray, sizeof(myArray) / sizeof(myArray[0]));
	printf("陣列中的最大值為：%d\n", max);
	return 0;
}
