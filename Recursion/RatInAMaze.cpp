#include <iostream>
#include <vector>
using namespace std;
void Recursion(int arr[][4], int row, int col, vector<char> &path) {
  if (row == 3 && col == 3) {
    for (auto &p : path) {
      cout << p << " ";
    }
    cout << endl;
    return;
  }
  arr[row][col] = -1;
  // Left
  if (col > 0 && arr[row][col - 1] == 1) {
    path.push_back('L');
    Recursion(arr, row, col - 1, path);
    path.pop_back();
  }
  // Right
  if (col < 3 && arr[row][col + 1] == 1) {
    path.push_back('R');
    Recursion(arr, row, col + 1, path);
    path.pop_back();
  }
  // Up
  if (row > 0 && arr[row - 1][col] == 1) {
    path.push_back('U');
    Recursion(arr, row - 1, col, path);
    path.pop_back();
  }
  // Down
  if (row < 3 && arr[row + 1][col] == 1) {
    path.push_back('D');
    Recursion(arr, row + 1, col, path);
    path.pop_back();
  }
  arr[row][col] = 1;
}
int main() {
  vector<char> path;
  int arr[][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
  cout << "The elements of the array are: " << endl;
  for (const auto &row : arr) {
    for (const auto &elem : row) {
      cout << elem << " ";
    }
    cout << endl;
  }
  cout << "The path in the array is: " << endl;
  Recursion(arr, 0, 0, path);
  cout << endl;
  return 0;
}