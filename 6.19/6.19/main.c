#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int r[11] = { 0 };
	int r1, r2, total;
	int times = 0, s;
	srand(time(NULL));

	while (times <= 36000)
	{
		r1 = (rand() % 6) + 1;
		r2 = (rand() % 6) + 1;
		total = r1 + r2;

		for (s = 0; s < 11; s++)
		{
			if (s + 2 == total)
			{
				r[s]++;
			}
		}
		times++;
	}
	for (s = 0; s < 11; s++)
	{
		printf("%d\t%d\n", s + 2, r[s]);
	}
	return 0;
}

