#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) { // We need to specify the no. of col in c++ while passing a 2D array as a parameter.
    
    for(int row = 0; row < 3; row++) {        
        for(int col = 0; col < 4; col++) {    
            if(arr[row][col] == target)    {
                return 1;
            } 
        }
    }
    return 0;

}

int main() {
    //creating 2d array
    int arr[3][4];
//  int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 14, 16}; // is technique sy sirf row wise element dalain gy automatically

//  int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}}; // is technique sy hm khud decide kr rhy konsi row main kia element ayein gy
    cout << "Enter the elements " << "\n";
    // taking input -> row wise  << input
    for(int row = 0; row < 3; row++) {        // 1 2 3 4
        for(int col = 0; col < 4; col++) {    // 5 6 7 8
            cin >> arr[row][col];           // 9 10 11 12
        }
    }

    // Column wise input
/*  for(int col = 0; col < 4; col++) {        // 1 4 7 10
        for(int row = 0; row < 3; row++) {    // 2 5 8 11
            cin >> arr[row][col];             // 3 6 9 12
        }
    }
*/
    // taking output / print
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << "\n";
    }

    cout << "Enter the element to search" << "\n";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)) {
        cout << "Element found " << "\n";
    } else {
    cout << "Not found " << "\n";
    }
}