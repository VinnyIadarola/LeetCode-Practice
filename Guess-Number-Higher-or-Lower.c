/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * 
 */

int guess(int num);

int guessNumber(int n){
    int high = n;
    int low = 1; 
    int middle = ((long)high + low)>>1;
    int direction = guess(middle);


    while(direction != 0) {
        if(high == low) return low;

        if(direction == 1) 
            low = middle + 1;
        
        if(direction == -1)
            high = middle - 1;
        middle = ((long)high + low)>>1;
        direction = guess(middle);
    }


    return middle;

}


