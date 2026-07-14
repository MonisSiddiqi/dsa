#include<vector>
#include<iostream>

using namespace std;

void insertionSort(vector<int>& arr) {
    for(int i = 1; i < arr.size(); i++) {
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

    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr);

    for(int a : arr) cout << a << " ";

    return 0;
}