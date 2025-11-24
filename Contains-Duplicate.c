int comp(const void* a, const void* b) {
    return ( *(int*)a - *(int*)b );
}




bool containsDuplicate(int* nums, int numsSize) {
    if(!nums || !numsSize) return true;

    qsort(nums, numsSize, sizeof(nums[0]), comp);

    for(int i = 1; i < numsSize; i++) {
        if(nums[i] == nums[i - 1])
            return true;
    }

    return false;
}