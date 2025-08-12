#include <iostream>
#include <vector>
using namespace std;
int Position(vector<int> &v, int start, int end) {
  int idx = end + 1;
  int pivot = v[start];
  for (int j = end; j > start; j--) {
    if (v[j] >= pivot) {
      swap(v[j], v[--idx]);
    }
  }
  swap(v[start], v[--idx]);
  return idx;
}
void QuickSort(vector<int> &v, int start, int end) {
  if (start >= end) return;
  int pivIdx = Position(v, start, end);
  QuickSort(v, start, pivIdx - 1);
  QuickSort(v, pivIdx + 1, end);
}
int main() {
  vector<int> v = {56, 12, 34, 78, 90, 23, 45, 67, 89, 11};
  QuickSort(v, 0, v.size() - 1);
  for (auto ele : v) {
    cout << ele << " ";
  }
  cout << endl;
  return 0;
}