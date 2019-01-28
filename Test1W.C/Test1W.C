#include <stdio.h>
#include "stdlib.h"
#include <tchar.h>

#include<time.h>   //用到clock()函数
int NarcissisticNumber() {
    int count=0;
    int ge, shi, bai;
    for (int n = 100; n < 100000; n++) {
        ge = n % 10;
        shi = (n - ge) / 10 % 10;
        bai = (int)(n / 100);
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == n) {
            count++;
            //printf("%d", n);
        }
    }
	return count;
}


int main()
{
    int begintime, endtime;
    int a[1002];
    begintime = clock();
    int total=0;
    int i = 100;    
    for (i = 1; i <= 10000; i++) {
        total+=NarcissisticNumber();
    }
    endtime = clock();    
    printf("\nRunning Time:%dms", endtime - begintime);
    printf("\ntotal:%d", total);

    getchar();
    return 0;
}