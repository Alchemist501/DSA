#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int left, int mid, int right) {
  int i = left, j = mid + 1;
  vector<int> temp;
  while (i <= mid && j <= right) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }
  while (i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }
  while (j <= right) {
    temp.push_back(arr[j]);
    j++;
  }
  for (int k = 0; k < temp.size(); k++) {
    arr[left + k] = temp[k];
  }
}
void mergeSort(vector<int> &arr, int left, int right) {
  if (left >= right) return;
  int mid = left + (right - left) / 2;
  mergeSort(arr, left, mid);
  mergeSort(arr, mid + 1, right);
  merge(arr, left, mid, right);
}
int main() {
  vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
  mergeSort(arr, 0, arr.size() - 1);
  for (auto num : arr) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}