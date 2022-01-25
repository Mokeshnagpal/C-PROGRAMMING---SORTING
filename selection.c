#include <stdio.h>
int main()
{
    int a[10],t=0,x=0,m=0;
    printf("Input 10 numbers continuously=\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<9;i++)
    {
        m=i;
        for(int j=i+1;j<10;j++)
        {
            if(a[j]<a[m])
            m=j;
        }
                t=a[i];
                a[i]=a[m];
                a[m]=t;
    }
    printf("Sorted array in ascending order - ");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nInput a number to be searched=\n");
    scanf("%d",&x);
    t=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]==x)
        {
            if(t==1)
            printf("%d is also found in %d position\n",x,i+1);
            else
            printf("%d is found in %d position\n",x,i+1);
            t=1;
        }
    }
    if(t!=1)
        printf("Value not found");
    return 0;
}
