int titleToNumber(char* columnTitle) {
    if(!columnTitle) return 0;

    int out = 0;
    for(int i = 0; columnTitle[i] != '\0'; i++) {
        out *= 26;
        out += (columnTitle[i] - 'A' + 1);
    }
    return out;

}