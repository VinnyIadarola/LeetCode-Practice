/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* newDigitsOver = calloc( (digitsSize  + 1), sizeof(int) );
    int* newDigits = calloc( (digitsSize), sizeof(int) );

    int carry = 1;
    *returnSize = 0;
    for (int i = digitsSize - 1; i >= 0; i--) {
        newDigits[i] = digits[i] + carry;
        newDigitsOver[i + 1] = digits[i] + carry;
        carry = 0; // consume carry

        (*returnSize)++;
        if (newDigits[i] > 9) {
            newDigits[i] = newDigits[i] % 10;
            newDigitsOver[i + 1] = newDigitsOver[i + 1] % 10;
            carry = 1;
        }
    }

    if(carry) {
        (*returnSize)++;
        newDigitsOver[0]++;
        free(newDigits);
        return newDigitsOver;
    }

    free(newDigitsOver);
    return newDigits;

}