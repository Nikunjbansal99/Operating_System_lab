#include <stdio.h>

int main()
{


	int b, a, i, j, k;
	a = 3;
	b = 5;

	int alloc[5][3] = {{ 0, 1, 0 },{ 2, 0, 0 },{ 3, 0, 2 },{ 2, 1, 1 },{ 0, 0, 2 }};
    int max[5][3] = {{ 7, 5, 3 },{ 3, 2, 2 },{ 9, 0, 2 },{ 4, 2, 2 },{ 5, 3, 3 }};
    int available[3] = { 3, 3, 2 };

	int index = 0, f[b], ans[b];
	for (k = 0; k < b; k++)
    {
		f[k] = 0;
	}
	int need[b][a];
	for (i = 0; i < b; i++)
	{
		for (j = 0; j < a; j++)
			need[i][j] = max[i][j] - alloc[i][j];
	}
	int y = 0;
	for (k = 0; k < b; k++)
	{
		for (i = 0; i < b; i++)
		{
			if (f[i] == 0)
			{
			    int flag = 0;
				for (j = 0; j < a; j++)
				{
					if (need[i][j] > available[j])
					{
						flag = 1;
						break;
					}
				}
				if (flag == 0)
                {
					ans[index++] = i + 1;
					for (y = 0; y < a; y++)
						available[y] = alloc[i][y] + available[y];
					f[i] = 1;
				}
			}
		}
	}

	printf("SAFE Sequence :\n");
	for (i = 0; i <= b - 1; i++)
		printf(" P%d\t", ans[i]);
    return (0);

}
