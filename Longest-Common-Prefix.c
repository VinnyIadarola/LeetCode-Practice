char* longestCommonPrefix(char** strs, int strsSize) {
    if (strs == NULL) return NULL;
    if (*strs == NULL) return NULL;
    if(strsSize == 0) return "";

    char* base = strs[0];


    int currentLen = strlen(base);

    for (int i = 1; i < strsSize; i++) {
        for(int j = 0; (j < currentLen); j++) {
            if( (strs[i][j] == '\0') || base[j] != strs[i][j]) {
                currentLen = j;
                break;
            }


        }
        if(currentLen == 0) break; 
    }

    char* pref = strndup(base, currentLen);


    return pref;
}