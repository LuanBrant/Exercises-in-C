#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,num;

    N=1;

    while (N <= 10)
    {
        num = 0;
        while(num <= 10)
        {
            printf("%d x %d = %d\n",N,num,(N*num));
            num++;
        }
        N++;
        printf("\n");
    }



    return 0;
}
