class Solution {
 public:
  bool isValid(string s) {
    vector<char> stack;
    vector<char> open = {'(', '{', '['};
    vector<char> close = {')', '}', ']'};
    for (auto ele : s) {
      for (auto op : open) {
        if (ele == op) {
          stack.push_back(ele);
        }
      }
      for (int i = 0; i < close.size(); i++) {
        if (close[i] == ele) {
          if (stack.empty() || stack.back() != open[i]) return false;
          stack.pop_back();
        }
      }
    }
    return stack.empty();
  }
};