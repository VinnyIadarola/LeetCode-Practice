char* addBinary(char* a, char* b) {
    if(a == NULL) return b;
    if(b == NULL) return a;

    int a_len = strlen(a);
    if( (a_len == 0) || !strcmp(a, "0") ) return b;

    int b_len = strlen(b);
    if( (b_len == 0) || !strcmp(b, "0") ) return a;

    

    // Non-trivial solution
    const int max_len = (a_len > b_len) ? a_len : b_len;
    char* sumO = malloc( (max_len + 1 + 1) * sizeof(char) ); //1 bit for if carry 1 more for null
    char* sum = malloc( (max_len + 1) * sizeof(char) );
    sumO[max_len + 1] = '\0';
    sum[max_len] = '\0';


    char carry = '0';
    for( int i = 0; i < max_len; i++) {
        char add[4];

        
        add[0] = ((a_len - 1 - i) >= 0) ? a[a_len - 1 - i] : '0';
        add[1] = ((b_len - 1 - i) >= 0) ? b[b_len - 1 - i] : '0';
        add[2] = carry;
        add[3] = '\0';
        
        if( !strcmp(add, "111") ) {
            carry = '1';
            sumO[max_len - i] = '1';
            sum[max_len - 1 - i] = '1';
        } else if ( !strcmp(add, "110") || !strcmp(add, "101") || !strcmp(add, "011") ) {
            carry = '1';
            sumO[max_len - i] = '0';
            sum[max_len - 1 - i] = '0';
        } else if ( !strcmp(add, "100") || !strcmp(add, "010") || !strcmp(add, "001") ) {
            carry = '0';
            sumO[max_len - i] = '1';
            sum[max_len - 1 - i] = '1';
        } else {
            carry = '0';
            sumO[max_len - i] = '0';
            sum[max_len - 1 - i] = '0';
        }
    }

    if( carry == '0' ) {
        free(sumO);
        return sum;
    } else {
        free(sum);
        sumO[0] = '1';
        return sumO;
    }



}