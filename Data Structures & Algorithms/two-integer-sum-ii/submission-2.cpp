class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right=0;
        int left=numbers.size()-1;

        while(right<left){
            if(numbers.at(right)+numbers.at(left)>target){
                left--;
            }else if(numbers.at(right)+numbers.at(left)<target){
                right++;
            }else{
                return {right+1,left+1};
            }
        }

    }
};
