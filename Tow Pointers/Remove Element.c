![psttt](https://user-images.githubusercontent.com/51443318/95138504-aae51600-076a-11eb-97dc-51a36a8c9f87.png)
int removeElement(int* nums, int numsSize, int val){
    int i, j;
    for(i = 0, j = 0; j < numsSize; j++){
        if(nums[j] != val){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
