int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0 || nums == NULL) return 0;

    int k = 1;
    int* lastUnique = &nums[k - 1];

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == *lastUnique) continue;

        lastUnique = &nums[i];
        nums[k++] = nums[i];
    }
    
    return k;
}