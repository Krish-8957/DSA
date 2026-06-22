class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int maxidx=max_element(nums.begin(),nums.end())-nums.begin();

       for( int i=0;i<nums.size();i++){
        if(i!=maxidx&&nums[maxidx]<2*nums[i]){
            return -1;
        }
       }
       return maxidx;
    }
};