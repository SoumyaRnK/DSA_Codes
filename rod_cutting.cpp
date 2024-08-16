#include <bits/stdc++.h>
using namespace std;

// int findseg1(int n, int x, int y, int z, vector<int> &dp)
// {

//     if (n == 0)
//     {
//         return 0;
//     }
//     if(n<0){
//         return INT_MIN;
//     }
//     if (dp[n] != INT_MIN)
//     {
//         return dp[n];
//     }

//     int a = findseg1(n - x, x, y, z, dp) + 1;
//     int b = findseg1(n - y, x, y, z, dp) + 1;
//     int c = findseg1(n - z, x, y, z, dp) + 1;

//     dp[n] = max(a, max(b, c));

//     return dp[n];
// }

int findseg(int n, int x, int y, int z)
{

    if (n == 0)
    {
        return 0;
    }

    if (n < 0)
    {
        return INT_MIN;
    }

    int a = findseg(n - x, x, y, z) + 1;
    int b = findseg(n - y, x, y, z) + 1;
    int c = findseg(n - z, x, y, z) + 1;

    //int ans = max(a, max(b, c));
    int ans=0;
    if(a>1){
        cout<<a<<endl;
        ans+=a;
    }
    if(b>1){
        ans+=b;
    }
    if(c>1){
        ans+=c;
    }
    return ans;
}

int main()
{

    int seg = 7;
    int x = 5, y = 2, z = 2;
    vector<int> dp(seg + 1, INT_MIN);
    dp[0]=0;
    int ans = findseg(seg, x, y, z);
    if (ans < 0)
    {
        cout << " ";
    }
    else
        cout << ans;
}