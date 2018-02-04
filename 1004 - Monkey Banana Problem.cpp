/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 04.02.18
*/

#include<bits/stdc++.h>
using namespace std;

int row, col, dp[500][500], arr[500][500], n;
int knapsack(int rcount, int ccount)
{
    int ret = INT_MIN;
    if(rcount > row || ccount < 1) return 0;
    if(dp[rcount][ccount] != -1) return dp[rcount][ccount];
    if(rcount < n){
            ret = max(ret, knapsack(rcount + 1, ccount)+arr[rcount][ccount]);
            ret = max(ret, knapsack(rcount + 1, ccount + 1)+arr[rcount][ccount]);
    }
    else{
        ret = max(ret, knapsack(rcount + 1, ccount) + arr[rcount][ccount]);
        ret = max(ret, knapsack(rcount + 1, ccount - 1) + arr[rcount][ccount]);
    }
    dp[rcount][ccount] = ret;
    return dp[rcount][ccount];
}

int main()
{

    int t;
    scanf("%d", &t);
    for(int kase = 1; kase <= t; kase++)
    {
        memset(dp, -1, sizeof dp);
        memset(arr, 0, sizeof arr);
        scanf("%d", &n);
        row = 2*n-1;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
                scanf("%d", &arr[i][j]);
        }
        for(int i = n+1; i <= row; i++)
            for(int j = 1; j <= 2*n-i; j++)
                scanf("%d", &arr[i][j]);

        printf("Case %d: %d\n", kase, knapsack(1, 1));
    }
    return 0;
}
