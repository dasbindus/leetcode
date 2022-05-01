/* 
 * Leetcode.c: 定义应用程序的入口点
 */

#include "Leetcode.h"
#include "Funcs.h"

int main()
{
	printf("---------- Start ---------\n");
	// Q78
	int nums78[3] = { 1, 2, 3 };
	int returnSize78;
	int* returnColumnSizes78;
	subsets(nums78, 3, &returnSize78, &returnColumnSizes78);

	printf("----------- End ----------\n");
	return 0;
}
