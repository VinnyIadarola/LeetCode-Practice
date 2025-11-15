int majorityElement(int* nums, int numsSize) {
    if (nums == NULL) return -1;
    if (numsSize == 1) return nums[0];

    int currMaj = nums[0];
    int count = 1;


    for(int i = 1; i < numsSize; i++) {
        count += (nums[i] != currMaj) ? -1 : 1;

        if(count == 0) {
            currMaj = nums[i];
            count = 1;
        }
    }
    return currMaj;
}