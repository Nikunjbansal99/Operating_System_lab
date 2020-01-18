#include<stdio.h>
void main()
{
    int me,pageSize, pr, count, avail_pages,l,e;

    printf("Enter size of memory:");
    scanf("%d",&me);

    printf("Enter Page Size:");
    scanf("%d",&pageSize);

    printf("Enter number of processes:");
    scanf("%d",&pr);
    int require[pr];
    for(count=0;count<pr;count++)
    {
        printf("Enter the pages requirement for process%d :",count+1);
        scanf("%d",&require[count]);
    }
    int p[100];
    int frameno;
    int i;
    int choice=1;
    avail_pages=me/pageSize;

    for(i=0;i<avail_pages;i++)
    {
        p[i]=0;
        printf("\nEnter the frame of page%d:",i);
        scanf("%d",&p[i]);
    }

do
{
    printf("\nEnter a process number:");
    scanf("%d",&l);
    printf("\nEnter a page number:");
    scanf("%d",&e);
    frameno=p[e];

    printf("\nFrame number is:%d",frameno);
    printf("\nDo you want to continue(1/0)?:");
    scanf("%d",&choice);
}while(choice==1);
}
