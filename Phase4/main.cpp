#include <iostream>
#include <vector>
#include <cstdlib> // For srand and rand
#include <ctime>   // For time
#include <chrono>  // For chrono timing
#include "sorts.h"

using namespace std;

void generateRandomIntegers(vector<int> &arr);
template <typename F>
double measurePerformance(F sortFunction, vector<int> &data);
void reverseVector(vector<int> arr);

int main()
{
    vector<int> arr;
    generateRandomIntegers(arr);

    vector<int> sorted = arr;
    mergeSortStarter(sorted);

    vector<int> reversed = sorted;
    reverseVector(reversed);

    // Example usage of measurePerformance with bubbleSort
    double bubbleSortTimeRandom = measurePerformance(bubbleSort, arr);
    cout << "Time taken by bubbleSort in random order: " << bubbleSortTimeRandom << " seconds" << endl;
    double bubbleSortTimeSorted = measurePerformance(bubbleSort, sorted);
    cout << "Time taken by bubbleSort in sorted order: " << bubbleSortTimeSorted << " seconds" << endl;
    double bubbleSortTimeReverse = measurePerformance(bubbleSort, reversed);
    cout << "Time taken by bubbleSort in reversed order: " << bubbleSortTimeReverse << " seconds" << endl;

    // Example usage of measurePerformance with quickSort
    double quickSortTimeRandom = measurePerformance(quicksortStarter, arr);
    cout << "Time taken by quickSort in random order: " << quickSortTimeRandom << " seconds" << endl;
    double quickSortTimeSorted = measurePerformance(quicksortStarter, sorted);
    cout << "Time taken by quickSort in sorted order: " << quickSortTimeSorted << " seconds" << endl;
    double quickSortTimeReversed = measurePerformance(quicksortStarter, reversed);
    cout << "Time taken by quickSort in reversed order: " << quickSortTimeReversed << " seconds" << endl;

    // Example usage of measurePerformance with mergeSort
    double mergeSortTimeRandom = measurePerformance(mergeSortStarter, arr);
    cout << "Time taken by mergeSort in random order: " << mergeSortTimeRandom << " seconds" << endl;
    double mergeSortTimeSorted = measurePerformance(mergeSortStarter, sorted);
    cout << "Time taken by mergeSort in sorted order: " << mergeSortTimeSorted << " seconds" << endl;
    double mergeSortTimeReversed = measurePerformance(mergeSortStarter, reversed);
    cout << "Time taken by mergeSort in reversed order: " << mergeSortTimeReversed << " seconds" << endl;

    return 0;
}

void generateRandomIntegers(vector<int> &arr)
{
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator with the current time

    for (int i = 0; i < 10000; ++i)
    {
        int randomNumber = rand() % 10001; // Generate a random number in the range [0, 10000]
        arr.push_back(randomNumber);       // Append the random number to the vector
    }
}

void reverseVector(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        ++start;
        --end;
    }
}

template <typename F>
double measurePerformance(F sortFunction, vector<int> &data)
{
    auto start = chrono::high_resolution_clock::now();
    sortFunction(data);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    return duration.count();
}
