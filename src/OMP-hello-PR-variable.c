#include <stdio.h>
#include <omp.h>
int main() {

    char hn[600];
    int thi=10;
    int thid=200;
    int thid2=20;

    printf("before Thread shared %d private %d firstprivate %d \n", thi, thid, thid2);
    #pragma omp parallel shared(thi) private(thid) firstprivate(thid2)
    {
        gethostname(hn,600);
        printf("hello from hostname %s shared %d private %d firstprivate %d \n",hn, thi, thid, thid2);
	thi = omp_get_thread_num();
	thid = omp_get_thread_num();
	thid2 = omp_get_thread_num();
        printf("hello from hostname %s shared %d private %d firstprivate %d \n",hn, thi, thid, thid2);
    }

    printf("Outside Thread shared %d private %d firstprivate %d \n", thi, thid, thid2);
    return(0);
}
