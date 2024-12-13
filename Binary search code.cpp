#include < iostream>

#include < vector>

using namespace std;

// Function to perform binary search on a sorted array or vector

int binarySearch(const vector& arr, int target) {

int low = 0;

int high = arr.size() - 1;

// While there is a search range

while (low <= high) {

int mid = low + (high - low) / 2; // To avoid overflow

// Check if the target is found at the middle index

if (arr[mid] == target) { 

return mid; // Return the index of the target

}

else if (arr[mid] < target) {

// If the target is greater, narrow the search to the right half

low = mid + 1;
} 

else {

// If the target is smaller, narrow the search to the left half

high = mid - 1;

 }

}

// Return -1 if the target is not found

return -1;

}

int main() { 

// Example sorted vector

Vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; 

// Target element to search

int target = 7;

// Perform binary search

int result = binarySearch(arr, target);
// Output the result

if (result != -1) {

 cout << "Element " << target << " found at index " << result << 

"." << endl;

}

else {

cout << "Element " << target << " not found." << endl;

} 

return 0; 

}
