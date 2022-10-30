class Solution {
public:
    static bool comp(pair<string, long long int>&p1, pair<string, long long int>&p2) {
                if (p1.second > p2.second)
                    return true;

                string s = p1.first;
                string t = p2.first;
                bool res = (s < t);
                if (p1.second == p2.second)
                    return res;

                return false;
    }
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        vector<vector<string>>resultant;
        map<string, long long int>mapping1;
        map<string, vector<pair<string, long long int>>>mapping11;


        int n = creators.size();
        int i;
        for (i = 0; i < n; i++)
        {
            mapping1[creators[i]] += views[i];
            mapping11[creators[i]].push_back({ids[i], views[i]});
        }
        long long int viewsmax = 0;
        for (auto i : mapping1)
        {
            viewsmax = max(viewsmax, i.second);
        }
      
        vector<string>tmp;
        for (auto i : mapping1)
        {
            if (i.second == viewsmax)
            {
                tmp.push_back(i.first);
            }
        }
        for (auto i : tmp)
        {
            auto res = mapping11[i];
            sort(res.begin(), res.end(), comp);

            auto r1 = res.begin();
            resultant.push_back({i, r1->first});



        }
        return resultant;
    }
};
