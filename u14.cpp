#include <iostream>
#include <vector>
using namespace std;//binary search
int binarySearch(const vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents overflow
        
        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13}; // Example sorted array
    int target = 7;
    
    int result = binarySearch(nums, target);
    if (result != -1) {
        cout << "Element found at postion: " << result+1 << endl;
    } else {
        cout << "Element not found." << endl;
    }
    
    return 0;
}
