class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();++i){
            if((i+1)==nums.size()){
                break;
            }
            for(int j=i+1;j<nums.size();++j){
            if(nums.at(i)==nums.at(j)){
                return true;
            }
            }
            
    }
    return false;
}

};