#include <iostream>
//Don't do suggestion for this file because I'm practicing to write code without any help from AI.

using namespace std;

void sortAlgo(vector<int>& arr) {
    //insertion sort

    int n = arr.size();

    for(int i = 1; i < n; i++) {

        int key = arr[i];

        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = key;

    }

}



int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    sortAlgo(arr);

    for(int a : arr) cout << a << " ";

    return 0;
}