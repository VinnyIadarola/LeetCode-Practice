int findKthPositive(int* arr, int arrSize, int k) {
    if(!arr || !arrSize || !k) return 0;

    int hash[1000] = {0};

    for(int i = 0; i < arrSize; i++) {
        hash[arr[i] - 1]++;    
    }

    for(int i = 0; i < 1000; i++){
        k -= (hash[i] == 0);
        if(k == 0) return i + 1;
    }


    return k + 1000;
}