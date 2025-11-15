int searchInsert(int* nums, int numsSize, int target) {
    int start = 0;
    int end = numsSize - 1;
    

    while ( (end - start) > 1 ) {
        int mid = start + (end - start)/2;
        if (target == nums[mid]) return mid;

        if (target > nums[mid]) 
            start = mid + 1;
        else 
            end = mid - 1;            
    }
    if (target <= nums[start]) return start;
    return end + (target > nums[end]);

}