1/**
2 * Note: The returned array must be malloced, assume caller calls free().
3 */
4int* getRow(int rowIndex, int* returnSize) {
5    *returnSize = rowIndex + 1;
6    int* currRow = calloc((rowIndex + 1), sizeof(int));
7    int* prevRow = calloc((rowIndex + 1), sizeof(int));
8
9
10    prevRow[0] = 1;
11
12    for(int i = 1; i <= rowIndex; i++) {
13        currRow[0] = 1;
14        currRow[i] = 1;
15
16        for(int j = 1; j < i; j++) {
17            currRow[j] = prevRow[j] + prevRow[j - 1];
18        }
19
20
21
22        int* temp = currRow;
23        currRow = prevRow;
24        prevRow = temp;
25    }
26
27    return prevRow;
28}