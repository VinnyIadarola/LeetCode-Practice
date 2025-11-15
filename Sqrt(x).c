int mySqrt(int x) {
    if(x == 0) return 0;


    int low = 0;
    int high = x;

    while(high > low) {
        int mid = low + (high - low) / 2;
        long mid_sq = (long)mid * mid;

        if(mid_sq == x) return mid;

        if(mid_sq < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    int dec = ((long)(low*low) > (long)(x));
    return low - dec;



}