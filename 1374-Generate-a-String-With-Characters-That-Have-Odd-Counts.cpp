class Solution {
public:
    string generateTheString(int n) {
        string out;
        out.reserve(n);
        out.assign(n-1, 'a');

        if( n % 2 )
            out += 'a';
        else 
            out += 'b';
        
        return out;
    }
};