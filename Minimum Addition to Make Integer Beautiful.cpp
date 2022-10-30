#define ll long long
class Solution {
public:
    ll check(ll n)
    {
        ll sum=0;
        while(n)
        {
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        
        
        ll ans=0;
        ll po=1;
        while(check(n)>target)
        {
            ans+=(10-(n%10))*po;
            n/=10;
            n++;
            po*=10;
        }
        return ans;
    }
};
