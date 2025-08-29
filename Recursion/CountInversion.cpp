#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &v, int left, int mid, int right) {
  int st = left;
  int InvCount = 0;
  int end = mid + 1;
  vector<int> temp;
  while (st <= mid && end <= right) {
    if (v[st] <= v[end]) {
      temp.push_back(v[st]);
      st++;
    } else {
      InvCount += (mid - st + 1);
      temp.push_back(v[end]);
      end++;
    }
  }
  while (st <= mid) {
    temp.push_back(v[st]);
    st++;
  }
  while (end <= right) {
    temp.push_back(v[end]);
    end++;
  }
  for (int k = 0; k < temp.size(); k++) {
    v[left + k] = temp[k];
  }
  return InvCount;
}
int mergeSort(vector<int> &v, int left, int right) {
  if (left >= right) return 0;
  int mid = left + (right - left) / 2;
  return (mergeSort(v, left, mid) + mergeSort(v, mid + 1, right) +
          merge(v, left, mid, right));
}
int main() {
  int count = 0;
  vector<int> nums = {2, 4, 1, 3, 5};
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] > nums[j]) count++;
    }
  }
  cout << "Count of inversions is : " << count << endl;
  cout << "Count of inversions using merge sort is : "
       << mergeSort(nums, 0, nums.size() - 1) << endl;
  return 0;
}
