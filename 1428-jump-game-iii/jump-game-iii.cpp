class Solution {
public:
    bool solve(vector<int>& arr, int start){
        if(start < 0 || start >= arr.size() || arr[start] < 0){
            return false;
        }
        
        if(arr[start] == 0){
            return true;
        }

        int jump = arr[start];
        arr[start] = -arr[start];

        return solve(arr, start + jump) || solve(arr, start - jump);
    }

    bool canReach(vector<int>& arr, int start) {
        return solve(arr, start);
    }
};