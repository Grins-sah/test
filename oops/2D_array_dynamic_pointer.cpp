#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int*ptr = new int[5]{1};
    cout<<ptr[2]<<endl;

}
/**
 *
#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;

    // Allocate memory for a single 1D array that behaves like 2D
    int* arr = new int[rows * cols]{0}; // Initialize all elements to 0

    // Access using arr[i * cols + j]
    arr[1 * cols + 2] = 5;
    cout << arr[1 * cols + 2] << endl;  // Output: 5

    // Deallocate memory
    delete[] arr;

    return 0;
}

 */