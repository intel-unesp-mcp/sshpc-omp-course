#include <stdio.h>
#include <stdlib.h>

int main(){
    int* input;    
    int snum, i, sum;

    sum = 0;
    snum=10000;
    
    input = (int*) malloc (sizeof(int)*snum);

    for(i=0;i<snum;i++) {
        input[i] = i+1;
    }

    #pragma omp parallel for
    for(i=0;i<snum;i++)
    {
        int* tmpsum = input+i;
        sum += *tmpsum;
    }
    printf("sum %d", sum);
}
