#include <iostream>
#include <vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {

    vector<int> ans;
    for(int col = 0; col < mCols; col++) {

        if( col&1 ) {
            // 1 or odd index -> Bottom to Top

            for(int row = nRows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            // 0 or even index -> Top to Bottom

            for(int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main() {

    // Create a 2D vector (matrix)
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int nRows = arr.size();        // number of rows
    int mCols = arr[0].size();     // number of columns

    // Call wavePrint function
    vector<int> result = wavePrint(arr, nRows, mCols);

    cout << "\nWave Print stored in vector: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
