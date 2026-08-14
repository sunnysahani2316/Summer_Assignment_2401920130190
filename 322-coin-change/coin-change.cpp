class Solution {
public:
int solve(vector<int>& coins, int amount){
    int n = coins.size();
    vector<int>dp(amount+1,amount+1);

    if(amount==0)return 0;
    
    dp[0]=0;
    for(int val= 1;val<=amount;val++){
     for(int i =0;i<coins.size();i++){
        if(coins[i]<=val){
        int res = dp[val-coins[i]];
        if(res!=amount+1){
            dp[val]=min(dp[val],1+res);
        }
        }
     }
    }
     return dp[amount]==amount+1? -1:dp[amount];
}
    int coinChange(vector<int>& coins, int amount) {
        int f = solve(coins,amount);
        return f;
    }
};