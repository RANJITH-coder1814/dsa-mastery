// Problem: Maximum Subarray (Kadane's Algorithm)
// Difficulty: Medium
// Approach:
// - Use running sum
// - Reset when sum < 0
//
// Time Complexity: O(n)
// Space Complexity: O(1)

int maxSubArray(vector<int>& nums) {
    int sum = 0, maxi = INT_MIN;

    for (int x : nums) {
        sum += x;
        maxi = max(maxi, sum);
        if (sum < 0) sum = 0;
    }

    return maxi;
}
