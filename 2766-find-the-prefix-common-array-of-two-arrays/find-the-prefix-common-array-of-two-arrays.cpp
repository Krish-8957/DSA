class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        int n = A.size();

        vector<int> ans(n);
        unordered_set<int> st;

        int common = 0;

        for(int i = 0; i < n; i++){

            if(st.count(A[i])){
                common++;
            }
            else{
                st.insert(A[i]);
            }

            if(st.count(B[i])){
                common++;
            }
            else{
                st.insert(B[i]);
            }

            ans[i] = common;
        }

        return ans;
    }
};