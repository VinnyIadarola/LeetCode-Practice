class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> output;
        output.reserve(26);
        unordered_map<char, pair<int, int>> map;
        for(char c : words[0]) {
            ++(map[c].first);
            ++(map[c].second);


        }
    
        for (auto it = words.begin() + 1; it != words.end(); ++it) { 
            for(char c : *it) {
                map[c].second = map[c].second ? map[c].second - 1 : 0;
            }

            for(auto & [c, p] : map) {
                p.first -= p.second;
                p.second = p.first;
            }
        }

        for(auto &[c, p] : map) {
            while(p.first-- > 0)
                output.emplace_back(string(1, c));
        }

        return output;
    }
};