class SparseVector {
public:
    vector<pair<int,int>>val;
    SparseVector(vector<int> &nums) {
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0){
                val.push_back({i,nums[i]});
            }
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int i=0,j=0;
        int Dot=0;
        while(i<val.size() && j<vec.val.size()){
            if(val[i].first== vec.val[j].first){
                Dot += val[i].second * vec.val[j].second;
                ++i;
                ++j;
            }
            else if (val[i].first > vec.val[j].first){
                j++;
            }
            else
                i++;
        }
        return Dot;
    }
};