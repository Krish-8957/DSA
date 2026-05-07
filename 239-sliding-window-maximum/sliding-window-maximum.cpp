class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        deque<int> dq;
        vector<int> ans;

        // Process first window
        for (int i = 0; i < k; i++) {
            
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        // Process remaining windows
        for (int i = k; i < nums.size(); i++) {

            ans.push_back(nums[dq.front()]);

            // Remove elements not part of current window
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }
            // Remove smaller elements
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        // Last window answer
        ans.push_back(nums[dq.front()]);

        return ans;
    }
};