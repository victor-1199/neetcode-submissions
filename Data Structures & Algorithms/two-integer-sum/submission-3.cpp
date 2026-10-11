class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //if(i == nums-1 ){break}
        //for(){
        //for ()}
        vector<int> nums1;
        
    for(int i=0;i<nums.size();i++){
        if((i-1)==nums.size()){
            break;
        }
        for(int j =i+1;j<nums.size();j++){
            if((nums.at(i)+nums.at(j)==target)){
                return {i,j};
            }
        }
    }

    }
};
