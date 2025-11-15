int removeElement(int* nums, int numsSize, int val) {
   if ( nums == NULL)  return 0;

   int k = 0;


   for(int i = 0; i < numsSize; ++i) {
        if(nums[i] == val) continue;
        nums[k++] = nums[i];
   }

   return k;
}