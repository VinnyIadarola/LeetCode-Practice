1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4        vector<pair<size_t, int>> score_pair;
5        score_pair.reserve(score.size());
6
7        for(size_t i = 0; i != score.size(); ++i) {
8            score_pair.push_back(pair<size_t, int>(i, score[i]));
9        }
10
11        std::sort(
12            score_pair.begin(), 
13            score_pair.end(), 
14            [](pair<size_t, int> a, pair<size_t, int> b) {
15                return b.second < a.second;
16            }
17        );
18
19        vector<string> output(score.size(), "");
20
21        const string medalist[3] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
22
23        for(size_t i = 0; i != score_pair.size(); ++i) {
24            string placement_title = (i < 3) ? medalist[i] : to_string(i + 1);
25
26            output[score_pair[i].first] = placement_title;
27        }
28
29        return output;
30
31
32
33
34    }
35};