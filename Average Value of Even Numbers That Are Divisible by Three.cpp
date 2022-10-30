class Solution {
public:
    int averageValue(vector<int>& nums) {
        
        int s=0,c=0;
        for(auto i:nums)
        {
            if(i%3==0 and i%2==0)
            {
                s+=i;
                c++;
            }
        }
        if(c==0) return 0;
        return s/c;
    }
};
