#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        while(i <= high - 1 && arr[i] <= pivot) {
            i++;
        }

        while(j >= low + 1 && arr[j] > pivot) {
            j--;
        }

        if(j > i) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if(high <= low) return;

    int partitionIdx = partition(arr, low, high);

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
