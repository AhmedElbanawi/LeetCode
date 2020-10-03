int singleNumber(int* nums, int numsSize){
    int Number = 0, i;
    for(i = 0; i < numsSize; i++){ Number ^= nums[i]; }
    return Number;
}
