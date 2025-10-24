#include <iostream>
#include <vector>
using namespace std;

void rowSum(const vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = 0; j < arr[i].size(); j++)
            sum += arr[i][j];
        cout << "Row " << i + 1 << " sum: " << sum << endl;
    }
}

void colSum(const vector<vector<int>>& arr) {
    if (arr.empty()) return;
    int cols = arr[0].size();
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
            sum += arr[i][j];
        cout << "Column " << j + 1 << " sum: " << sum << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Input rows: ";
    cin >> rows;
    cout << "Input cols: ";
    cin >> cols;

    vector<vector<int>> A(rows, vector<int>(cols));

    cout << "Enter elements:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];

    cout << "Input array:" << endl;
    for (const auto& row : A) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }

    rowSum(A);
    colSum(A);

    return 0;
}
