#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 110;
    for (int i = 1; i <= t; i++){
        int n = i;
        while (n)
        {
            int r = n % 10;
            if (r == 0)
            {
                cout <<i<<" ";
                break;
            }
            n /= 10;
        }
   }
}