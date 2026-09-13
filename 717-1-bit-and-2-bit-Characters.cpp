class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {

        bool two_bit_started = false;
        bool single_last_seen = false;
        
        for(int bit : bits) {
            if(!two_bit_started && !bit){
                single_last_seen = true;
            } else {
                two_bit_started = !two_bit_started;
                single_last_seen = false;
            }
        }


        return single_last_seen;
    }
};