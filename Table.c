#include<stdio.h>
int main()
{
    int T;
    printf("Type number to get Multiplicaton Table:");
    scanf("%d",&T);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n",T,i,T*i);
    }
    
    return 0;
}