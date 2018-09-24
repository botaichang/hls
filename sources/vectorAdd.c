#include "vectorAdd.h"

void vectorAdd(data_t A[N],data_t c, data_t B[N])
{
    unsigned int i;
myloop:
    for(i = 0; i< N; i++)
    {
        B[i]= A[i] + c;
    }
}
