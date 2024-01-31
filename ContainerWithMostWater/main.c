#include <stdio.h>
#include <stdlib.h>

int maxArea(int* height, int heightSize)
{
	int wynik = 0;

	int i = 0;
	int j = heightSize - 1;

	wynik = min(height[i], height[j]) * (j - i);

	while (j != i)
	{
		int spr;
		spr = min(height[i], height[j]) * (j - i);
		if (spr > wynik)
		{
			wynik = spr;
		}
		if (height[j] < height[i])
		{
			j--;
		}
		else
		{
			i++;
		}
	}

	return wynik;
}

int main()
{
	int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
	int heightSize = sizeof(height) / sizeof(height[0]);
	printf("%d\n", maxArea(height, heightSize));

	return 0;
}