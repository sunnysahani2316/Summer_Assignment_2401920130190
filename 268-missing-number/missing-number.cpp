class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int Asum = 0;
        int n = nums.size();
        for(int i= 0;i<n;i++){
             Asum = nums[i] + Asum;
        }
        int Nsum = (n*(n+1))/2;
        int k = Nsum - Asum;

        return k;

    }       
};