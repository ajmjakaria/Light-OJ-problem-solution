/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 05.02.18
*/

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int rgb[101][101], dp[50][50], n;
int rec(int r, int c)
{
    int ret = INT_MAX;
    if(r == n+1) return 0;
    if(dp[r][c] != -1) return dp[r][c];
    for(int i = 1; i <= 3; i++)
    {
        if(i != c)
            ret = min(ret, rec(r+1, i) + rgb[r][i]);
    }
    return dp[r][c] = ret;
}

int main()
{
    int t;
    cin >> t;
    //cin.ignore();
    for(int kase = 1; kase <= t; kase++)
    {
        memset(dp, -1, sizeof dp);
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= 3; j++)
                cin >> rgb[i][j];
        }
        printf("Case %d: %d\n", kase, rec(1, 0));
    }
    return 0;
}
