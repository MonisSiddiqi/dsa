#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if(minIndex != i) {
            swap(arr[minIndex], arr[i]);
        }

    }
}

void selectionSortStable(vector<int>& arr) {
    for(int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int key = arr[minIndex];

        while(minIndex > i) {
            arr[minIndex] = arr[minIndex - 1];
            minIndex--;
        }

        arr[i] = key;

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

    selectionSort(arr);

    for(int a : arr)
        cout << a << " ";

    return 0;
}