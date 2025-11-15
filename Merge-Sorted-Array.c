void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if(nums1 == NULL) return;
    if((nums2 == NULL) || (n == 0)) return;

    
    int p1 = 0, p2 = 0;

    int* numArr = calloc(nums1Size, sizeof(int));
    
    for(int i = 0; i < nums1Size; i++) {
        int n1 = (p1 >= m) ? INT_MAX : nums1[p1];
        int n2 = (p2 >= n) ? INT_MAX : nums2[p2];
 
        numArr[i] = (n1 > n2) ? n2 : n1;
        if(n1 > n2) {
            numArr[i] = n2;
            p2++;
        } else {
            numArr[i] = n1;
            p1++;
        }
    }


    for(int i = 0; i < nums1Size; i++) 
        nums1[i] = numArr[i];

    free(numArr);
}