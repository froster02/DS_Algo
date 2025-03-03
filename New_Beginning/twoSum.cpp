// Approach 1 - Brute Force
/*
Time Complexity: O(n²)
- Outer loop runs n-1 times
- Inner loop runs from i+1 to n
- Results in quadratic time complexity

Space Complexity: O(1)
- Only uses a vector 'v' that stores exactly 2 elements
- Constant extra space regardless of input size
*/
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

// Approach 2 - Optimized Brute Force
/*
Time Complexity: O(n²)
- Same as Approach 1 with nested loops
- More concise but still quadratic complexity

Space Complexity: O(1)
- Only returns a fixed-size array {i,j}
- No additional data structures used
*/
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

// Approach 3 - Hash Map Solution
/*
Time Complexity: O(n)
- Single pass through array
- Hash map operations (insert/find) are O(1) average case
- Linear time complexity

Space Complexity: O(n)
- Uses unordered_map that could store up to n elements
- Trade-off: uses more space but achieves linear time
*/
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