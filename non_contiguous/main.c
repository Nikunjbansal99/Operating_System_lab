#include <stdio.h>
#include <stdlib.h>

int main()
{
    int me, pr, count,num_of_blk;

    printf("Enter size of memory:");
    scanf("%d",&me);

    printf("Enter number of processes:");
    scanf("%d",&pr);
    int processSize[pr];
    int sum = 0;
    for(count=0;count<pr;count++)
    {
        printf("Enter size of process %d is :",count+1);
        scanf("%d",&processSize[count]);
        sum += processSize[count];
    }

    int blockSize[pr];
    if(sum <= me)
    {
        for(count=0;count<pr;count++)
        {
            blockSize[count] = processSize[count];
        }

    }

	firstFit(blockSize, pr, processSize, pr);
	//bestFit(blockSize, pr, processSize, pr);

	return 0 ;
}

void fragmentation(int blocksize[],int m , int processSize[],int n)
{
   int i,j;
   for(i = 0; i<m; i++)
        for(j=0; j<n; j++)
        {


        }

}
//BEST FIT
void bestFit(int blockSize[], int m, int processSize[], int n)
{

	int allocation[n];
	memset(allocation, -1, sizeof(allocation));

	for (int i=0; i<n; i++)
	{
		int bestIdx = -1;
		for (int j=0; j<m; j++)
		{
			if (blockSize[j] >= processSize[i])
			{
				if (bestIdx == -1)
					bestIdx = j;
				else if (blockSize[bestIdx] > blockSize[j])
					bestIdx = j;
			}
		}
		if (bestIdx != -1)
		{
			allocation[i] = bestIdx;
			blockSize[bestIdx] -= processSize[i];
			blockSize[bestIdx] = 0;
		}
	}

	printf("\nProcess No.\tProcess Size\tBlock no.\n");
	for (int i = 0; i < n; i++)
	{
	    printf("%d\t\t%d\t\t",i+1,processSize[i]);
        if (allocation[i] != -1)
			printf("%d\n",allocation[i] + 1);
		else
			printf("Not Allocated\n");

	}
}

//FIRST FIT
void firstFit(int blockSize[], int m,
			int processSize[], int n)
{
	int allocation[n];
	memset(allocation, -1, sizeof(allocation));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (blockSize[j] >= processSize[i])
			{
				allocation[i] = j;
				blockSize[j] -= processSize[i];
				blockSize[j] = 0;
                break;

			}
		}
	}

	printf("\nProcess No.\tProcess Size\tBlock no.\n");
	for (int i = 0; i < n; i++)
	{
	    printf("%d\t\t%d\t\t",i+1,processSize[i]);
        if (allocation[i] != -1)
			printf("%d\n",allocation[i] + 1);
		else
			printf("Not Allocated\n");


	}
}



