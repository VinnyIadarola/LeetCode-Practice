int reverse(int x){
    int result = 0;


    while(x != 0) {
        if(x > 0) 
            if(INT_MAX/10 < result) return 0;

        if(x < 0) 
            if(INT_MIN/10 > result) return 0;
            
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}


