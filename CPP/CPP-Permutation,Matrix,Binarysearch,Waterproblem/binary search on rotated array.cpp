#include <bits/stdc++.h>
using namespace std;
// Binary Search on Rotated Array
int search(vector<int> nums, int target)
{
    int low = 0, high = nums.size() - 1;
    // Normal Binary Search
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        // check if left part of the array is sorted or not
        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && nums[mid] > target)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        // check for the right part of the array
        else
        {
            if (nums[mid] > target && nums[high] < target)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> target;
    int res = search(nums, target);
    cout << res << endl;
    return 0;
}
