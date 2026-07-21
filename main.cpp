#include <iostream>
#include <vector>
//Don't do suggestion for this file because I'm practicing to write code without any help from AI.

using namespace std;


int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    // quickSort(arr, 0, n - 1);

    for(int a : arr) cout << a << " ";

    return 0;
}
