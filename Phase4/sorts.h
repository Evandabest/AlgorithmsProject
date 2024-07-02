
#ifndef SORTS_H
#define SORTS_H

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



void bubblesort(vector<int>& arr){
    int size = arr.size() ;
    for(int i=0; i < size - 1; i++){
        for(int j=0; j < size - i - 1; j++){
            if (arr[j] >= arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // Choose the last element as the pivot
    int i = low - 1;  // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);  // Swap elements to ensure all elements less than the pivot are on the left
        }
    }

    swap(arr[i + 1], arr[high]);  // Move the pivot to its correct position
    return i + 1;  // Return the pivot index
}

// Quick Sort function that recursively sorts the array
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);  // Partition the array and get the pivot index

        quicksort(arr, low, pivot - 1);  // Recursively sort the left sub-array
        quicksort(arr, pivot + 1, high);  // Recursively sort the right sub-array
    }
}

// Wrapper function for quicksort with initial parameters
void quicksort(vector<int>& arr) {
    if (!arr.empty()) {
        quicksort(arr, 0, arr.size() - 1);
    }
}

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    vector<int> L(n1);
    vector<int> R(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Merge the temporary arrays back into arr[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function to divide and conquer
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Find the middle point

        mergeSort(arr, left, mid);  // Sort first half
        mergeSort(arr, mid + 1, right);  // Sort second half

        merge(arr, left, mid, right);  // Merge the sorted halves
    }
}

// Wrapper function for Merge Sort with initial parameters
void mergeSort(vector<int>& arr) {
    if (!arr.empty()) {
        mergeSort(arr, 0, arr.size() - 1);
    }
}
#endif// SORT_H