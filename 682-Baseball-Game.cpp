class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<string>::iterator ops = operations.begin();
        vector<int> scores;
        
        scores.reserve(operations.size());

        for(auto it = operations.begin(); it != operations.end(); ++it) {
            string &op = *it;
            const int end_idx = scores.size() - 1;
            if(op == "+") {
                const int sum_score = scores[end_idx] + scores[end_idx - 1];
                scores.push_back(sum_score);
            
            } else if(op == "D") {
                const int dub_score = scores[end_idx] * 2;
                scores.push_back(dub_score);

            } else if(op == "C") {
                scores.pop_back();


            } else {
                scores.push_back(stoi(op));
            }
        }

        return accumulate(scores.begin(), scores.end(), 0);


    }
};