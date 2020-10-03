int missingNumber(int* nums, int numsSize){
    int i, sum = 0;
    for(i = 0; i < numsSize; i++){ sum += nums[i]; }
    return ((numsSize * (1 + numsSize)) / 2) - sum;
}
