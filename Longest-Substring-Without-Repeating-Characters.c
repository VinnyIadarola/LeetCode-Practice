int lengthOfLongestSubstring(char* s) {
    if(s == NULL) return -1;

    int abcs[127 - 32];
    memset(abcs, -1, (127-32)*sizeof(int));
    int max_len = 0;
    int curr_len = 0;
    int start_index = 0;


    for(int i = 0; s[i] != '\0'; i++) {
        int abc_index = s[i] - 32;


        // printf("%i\n", abcs[abc_index] );
        if((abcs[abc_index] == -1) || (abcs[abc_index] < start_index)) {


            abcs[abc_index] = i;
            curr_len++;
            continue;
        }

        // reset case
        max_len = (curr_len > max_len) ? curr_len : max_len;
        curr_len -= (abcs[abc_index]) - start_index;
        start_index = abcs[abc_index] + 1;
        abcs[abc_index] = i;

    }

    return (curr_len > max_len) ? curr_len : max_len;
}