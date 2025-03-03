// Approach 1

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>v;
            for(int i=0;i<nums.size()-1;i++) {
                for(int j=i+1;j<nums.size();j++) {
                    if(nums[i]+nums[j]==target) {
                        v.push_back(i);
                        v.push_back(j);
                        return v;
                    }
                }
            }
            return v;
        }
    };

// Approach 2
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(nums[i] + nums[j] == target)
                        return {i,j};
                }
            }      
            return {};
        }
    };

// Approach 3
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mp;
            for(int i = 0; i < nums.size(); i++){
                if(mp.find(target - nums[i]) != mp.end())
                    return {mp[target - nums[i]], i};
                mp[nums[i]] = i;
            }
            return {};
        }
    };