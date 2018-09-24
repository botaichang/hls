#include "vectorAdd.h"
#include <stdio.h>

int main()
{
    data_t A[N] = {1,2,3,4,5};
    data_t c = 2;
    data_t B[N] = {0};
    data_t B_expect[N]= {3,4,5,6,7};
    vectorAdd(A,c,B);
    unsigned int i;
    printf("%3s,%3s\n","B","B_expect");
    for(i = 0; i< N; i++)
    {
        printf("%3d,%3d\n",B[i],B_expect[i]);
    }
    return 0;
}

