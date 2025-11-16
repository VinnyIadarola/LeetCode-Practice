bool isHappy(int n) {

    int annoyance = 10;
    while(n != 1) {
        int sum = 0;
        while(n) {
            int digit = n % 10;
            sum += digit*digit;
            n = n / 10;
        }

        n = sum;
        if(annoyance-- == 0) return false; 
    }

    return true;
}