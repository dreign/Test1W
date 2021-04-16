// Test1W.CPlus.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <time.h>


int NarcissisticNumber() {
	int count = 0;
	int ge, shi, bai;
	for (int n = 100; n < 100000; n++) {
		ge = n % 10;
		shi = (n - ge) / 10 % 10;
		bai = (int)(n / 100);
		if (ge * ge * ge + shi * shi * shi + bai * bai * bai == n) {
			count++;
			//printf("%d,", n);
		}
	}
	return count;
}


int main()
{
	double begintime, endtime;
	int a[1002];
	//DWORD begintime=GetTickCount();
	begintime = clock();
	int total = 0;
	int i = 100;
	for (i = 1; i <= 10000; i++) {
		total += NarcissisticNumber();
	}
	//Sleep(1000);
	//DWORD endtime=GetTickCount();
	endtime = clock();
	printf("\nRunning Time:%dms", endtime - begintime);
	printf("\n%d", begintime);
	printf("\n%d", endtime);
	printf("\ntotal:%d", total);
	getchar();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
