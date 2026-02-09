class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if (intervals.empty())
            return {};
        sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            auto& last = result.back();
            auto& curr = intervals[i];
            if (curr[0] <= last[1]) {
                last[1] = max(last[1], curr[1]);
            } else {
                result.push_back(curr);
            }
        }
        return result;
    }
};