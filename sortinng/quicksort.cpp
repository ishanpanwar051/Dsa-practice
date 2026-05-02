#include<iostream>
using namespace std;

int partition(int arr[], int st, int ed) {
    int pivotele = arr[st];
    int count = 0;

    for (int i = st + 1; i <= ed; i++) {
        if (arr[i] <= pivotele) count++;
    }

    int pivotidx = count + st;
    swap(arr[st], arr[pivotidx]); 

    int i = st, j = ed;

    while (i < pivotidx && j > pivotidx) {
        while (arr[i] <= pivotele) i++; 
        while (arr[j] > pivotele) j--;  
        if (i < pivotidx && j > pivotidx) {
            swap(arr[i++], arr[j--]);   
        }
    }

    return pivotidx; 
}

void quicksort(int arr[], int st, int ed) {
    if (st >= ed) return;
    int pivot = partition(arr, st, ed);
    quicksort(arr, st, pivot - 1);
    quicksort(arr, pivot + 1, ed);
}

int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    return 0;
}