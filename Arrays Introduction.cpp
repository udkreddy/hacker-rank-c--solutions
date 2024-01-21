#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++) {
        cin >> arr[i];
    }
    
    for (int i = count -1; i >= 0; i--) {
        cout << arr[i] << " ";
    } 
    return 0;
}
