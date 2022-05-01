#include "Funcs.h"

// Q78
int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

	printf("[Q78]\n");

	if (nums == NULL || returnSize == NULL) {
		return NULL;
	}
	int** ret = (int**)malloc(sizeof(int*) * (1 << numsSize));
	*returnColumnSizes = (int*)malloc(sizeof(int) * (1 << numsSize));
	*returnSize = 1 << numsSize;

	int t[MAX_NUM];
	for (int mask = 0; mask < (1 << numsSize); mask++)
	{
		int eachSize = 0;
		for (int i = 0; i < numsSize; i++)
		{
			if (mask & (1 << i)) {
				t[eachSize++] = nums[i];
			}
		}
		int* tmp = (int*)malloc(sizeof(int) * eachSize);
		memcpy(tmp, t, sizeof(int) * eachSize);
		(*returnColumnSizes)[mask] = eachSize;
		ret[mask] = tmp;
	}
	return ret;
}
