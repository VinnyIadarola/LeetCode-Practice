class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        size_t stone_count['z' - 'A' + 1];

        for(char c : stones) 
            ++stone_count[c - 'A'];

        int out = 0;
        for(char c : jewels) 
            out += stone_count[c - 'A'];

        return out;
        
    }
};