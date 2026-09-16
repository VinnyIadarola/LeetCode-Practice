class Solution {
public:
    int hammingDistance(int x, int y) {

        size_t count = 0;
        for(size_t i = 0; i != 32; ++i) {
            size_t x_bit = (x >> i) & 1;
            size_t y_bit = (y >> i) & 1;

            if((x_bit ^ y_bit))
                ++count;

            
         
        }

        return count;


    }
};