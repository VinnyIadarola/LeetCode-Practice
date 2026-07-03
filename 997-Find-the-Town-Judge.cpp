class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        std::vector<pair<size_t, size_t>> count(n + 1);



        for(auto &rel : trust) {
            ++(count[rel[0]].first); 
            ++(count[rel[1]].second);
        }

        for(size_t i = 1; i != n + 1; ++i)
            if( count[i].first == 0 && count[i].second == n-1 )
                return i;

        return -1;  
    }
};