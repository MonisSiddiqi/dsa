#include<vector>
#include<iostream>

using namespace std;


//Divide the array in sorted and unsorted array and assume initally 1st element is sort
//Pick next element from unsorted array and place it into the sorted array
//Do it repeatedly for all the elements of unsorted array

//Say initially the sorted array i [0] and unsorted array is [1..N-1]

//Choose element from unsorted array and place it in sorted array

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