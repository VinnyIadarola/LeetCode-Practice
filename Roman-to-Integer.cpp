class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;


        // int len = s.size();


        for(int i = s.size() - 1; i >= 0; i--) {
            switch(s[i]) {
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    sum += 5;
                    if(i != 0 && s[i - 1] == 'I'){
                        i -= 1;
                        sum -= 1;
                    }
                    break;
                case 'X':
                    sum += 10;
                    if(i != 0 && s[i - 1] == 'I'){
                        i -= 1;
                        sum -= 1;
                    }
                    break;

                case 'L':
                    sum += 50;
                    if(i != 0 && s[i - 1] == 'X'){
                        i -= 1;
                        sum -= 10;
                    }
                    break;

                case 'C':
                    sum += 100;
                    if(i != 0 && s[i - 1] == 'X'){
                        i -= 1;
                        sum -= 10;
                    }
                    break;

                case 'D':
                    sum += 500;
                    if(i != 0 && s[i - 1] == 'C'){
                        i -= 1;
                        sum -= 100;
                    }
                    break;

                case 'M':
                    sum += 1000;
                    if(i != 0 && s[i - 1] == 'C'){
                        i -= 1;
                        sum -= 100;
                    }
                    break;
            }
        }
        return sum;
    }


};