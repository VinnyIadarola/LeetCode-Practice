int lengthOfLastWord(char* s) {
    int last_length = 0;
    char* last_seen = NULL;

    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
           last_seen = &s[i] ;
           continue;
        }

        if((last_seen != NULL) && (*last_seen != ' ')) {
            last_length++;
        } else {
            last_length = 1;
        }

        last_seen = &s[i];

    }
    return last_length;
}