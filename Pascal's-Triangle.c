1/**
2 * Return an array of arrays of size *returnSize.
3 * The sizes of the arrays are returned as *returnColumnSizes array.
4 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
5 */
6int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
7    int** triangle = malloc(numRows * sizeof(int*));
8    *returnColumnSizes = malloc(numRows * sizeof(int));
9    *returnSize = numRows;
10
11    if(numRows == 0) return triangle;
12
13
14    for(int i = 0; i < numRows; i++) {
15        triangle[i] = malloc((i+1) * sizeof(int));
16        (*returnColumnSizes)[i] = i+1;
17
18        triangle[i][0] = 1;
19        triangle[i][i] = 1;
20
21        for(int j = 1; j < i; j++) {
22            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i-1][j];
23        }
24    }
25
26
27    
28
29
30
31
32    return triangle;
33}