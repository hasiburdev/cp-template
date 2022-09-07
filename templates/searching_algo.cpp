#include <iostream>
using namespace std;

pair<int, int> staricaseSearch(int arr[][4], int n, int m, int target);

int main() {

  // Test Codes here.
  int arr[][4] = {
      {10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
  int n = 4, m = 4;
  pair<int, int> result = staricaseSearch(arr, n, m, 48);
  cout << result.first << " " << result.second << endl;

  return 0;
}

pair<int, int> staricaseSearch(int arr[][4], int n, int m, int target) {
  int row = 0, column = m - 1;
  if (target < arr[0][0] || target > arr[n - 1][m - 1]) {
    return {-1, -1};
  }

  while (row < n || column >= 0) {
    if (target == arr[row][column]) {
      return {row, column};
    } else if (target > arr[row][column]) {
      row++;
    } else {
      column--;
    }
  }
  return {-1, -1};
}