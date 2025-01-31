#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0, right = numbersSize - 1;
    int *result = (int *)calloc(2, sizeof(int)); 
    *returnSize = 2;

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            result[0] = left + 1;
            result[1] = right + 1;
            return (result);
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
    }

    *returnSize = 0;
    free(result);
    return (NULL);
}
