#include <iostream>
#include <vector>

using namespace std;

int lomutoPartition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j <= high - 1; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

int hoarePartition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    while(i < j) {

        while(i <= high - 1 && arr[i] <= pivot) {
            i++;
        }

        while(j >= low + 1 && arr[j] > pivot) {
            j--;
        }

        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if(high <= low) return;

    int partitionIdx = hoarePartition(arr, low, high);

    quickSort(arr, low, partitionIdx - 1);
    quickSort(arr, partitionIdx + 1, high);
}

int main() {

    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    quickSort(arr, 0, n - 1);

    for(int a : arr) cout << a << " ";

    return 0;
}
