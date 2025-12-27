#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col) { // We need to specify the no. of col in c++ while passing a 2D array as a parameter.
    
    for(int row = 0; row < 3; row++) {        
        for(int col = 0; col < 3; col++) {    
            if(arr[row][col] == target)    {
                return 1;
            } 
        }
    }
    return 0;
}


// row wise sum
void printSum(int arr[][3], int row, int col) {

    cout << "Printing sum -> " << "\n";
    for(int row = 0; row < 3; row++) {
        int sum = 0;
        for(int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << "\n";
}

/* col wise sum
void printSum(int arr[][3], int row, int col) {

    cout << "Printing sum -> " << "\n";
    for(int col = 0; col < 3; col++) {
        int sum = 0;
        for(int row = 0; row < 3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << "\n";
}
*/

int main() {
    int arr[3][3];

    cout << "Enter the elements " << "\n";

    for(int row = 0; row < 3; row++) {     
        for(int col = 0; col < 3; col++) {   
            cin >> arr[row][col];           
        }
    }

    cout << "Printing the array " << "\n";

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << "\n";
    }

    cout << "Enter the element to search" << "\n";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 3)) {
        cout << "Element found " << "\n";
    } else {
    cout << "Not found " << "\n";
    }

    printSum(arr, 3, 3);
}