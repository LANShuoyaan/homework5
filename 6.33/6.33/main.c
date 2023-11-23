#include <stdio.h>

int binarySearch(const int array[], int key, int low, int high)
{
	if (low <= high) 
	{
		int mid = low + (high - low) / 2;

		if (array[mid] == key)
		{
			return mid; 
		}

		if (array[mid] > key)
		{
			return binarySearch(array, key, low, mid - 1);
		}
		else 
		{
			return binarySearch(array, key, mid + 1, high);
		}
	}

	return -1;  
}

int main()
{
	int arr[] = { 00,11,22,33,44,55 };
	int keyToFind;

	printf("Enter the key to search: ");
	scanf("%d", &keyToFind);

	int result = binarySearch(arr, keyToFind, 0, 5);

	if (result != -1) 
	{
		printf("Key found at index %d.\n", result);
	}
	else 
	{
		printf("Key not found in the array.\n");
	}

	return 0;
}


