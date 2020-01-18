#include <stdio.h>
#include <stdlib.h>

int main()
{
    int me, pr, count,num_of_blk;

    printf("Enter size of memory:");
    scanf("%d",&me);
    printf("Enter number of processes:");
    scanf("%d",&pr);
    int processSize[pr],blockSize[pr];
    for(count=1;count<=pr;count++)
    {
        printf("Enter size of process %d is :",count);
        scanf("%d",&processSize[count]);
        blockSize[count] = processSize[count];
    }
	bestFit(blockSize,pr, processSize, pr);

	return 0 ;
}

//BEST FIT
void bestFit(int b[], int m, int p[], int n)
{
    int fragment[20],i,j,temp,lowest=9999;
	static int barray[20],parray[20];

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(barray[j]!=1)
			{
				temp=b[j]-p[i];
				if(temp>=0)
					if(lowest>temp)
					{
						parray[i]=j;
						lowest=temp;
					}
			}
		}

		fragment[i]=lowest;
		barray[parray[i]]=1;
		lowest=10000;
	}
	int s=0;
	printf("\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tInternal_Fragments");
	for(i=1;i<=n && parray[i]!=0;i++)
	{
	    printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,p[i],parray[i],b[parray[i]],fragment[i]);
		s = s + fragment[i];
	}
	printf("\nExternal_Fragmentation: %d \n",s);

}
