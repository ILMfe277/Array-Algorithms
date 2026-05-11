#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int>& arr) {
    return is_sorted(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    cout << (isSorted(arr) ? "true\n" : "false\n");

    return 0;
}