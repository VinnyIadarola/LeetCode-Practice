char* restoreString(char* s, int* indices, int indicesSize) {
    if(!s || !indices) return NULL;

    if(!indicesSize) return s;

    char* out = malloc((indicesSize + 1) * sizeof(char));

    for(int i = 0; i < indicesSize; i++) {
        out[indices[i]] = s[i];
    }
    

    out[indicesSize] = '\0';
    
    return out;
    


}