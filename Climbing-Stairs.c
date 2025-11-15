int climbStairs(int n) {
    int ago_2, ago_1;
    if(n <= 2) return n;

    //for n = 1
    ago_2 = 1;

    // for n = 2
    ago_1 = 2;

    for(int i = 3; i < n; i++) {
        int temp = ago_1;

        ago_1 = ago_1 + ago_2;
        ago_2 = temp;
    }

    return ago_1 + ago_2;
}