#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Found it!
        }
    }
    return -1; // Not found
}

int main(){
    const int SIZE = 5;
    int array[SIZE] = {9,3,5,2,1};
    int input;
    cout << "Please enter the number you want to search " << endl; cin >> input;
    int index = linearSearch(array,SIZE,input);
    if (index == -1){
        cout << "not found";
    }
    else cout << "Found the number" << input << "  in the position " <<index+1 << endl;

    
}