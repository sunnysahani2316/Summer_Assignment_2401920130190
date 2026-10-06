class Solution {
public:
    int missingNumber(vector<int>& arr) {
        //brute force
        for(int i = 0; i <= arr.size(); i++ ){
            bool flag = 0;
            for(int j = 0 ; j < arr.size(); j++){
                if(arr[j] == i){
                    flag = 1;
                    break;
                }
                
                

            }
            if( flag == 0){
                return i;
            }
            

        }
        return -1;
        
        
    }
};