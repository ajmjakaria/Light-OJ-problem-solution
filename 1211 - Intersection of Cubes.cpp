/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.11.2018
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, t, a, n, s[7], res;
    s[1]=s[2]=s[3]=1;
    s[4]=s[5]=s[6]=1000;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> a;
        s[1]=s[2]=s[3]=1;
        s[4]=s[5]=s[6]=1000;
        for(int x=1; x <= a; x++)
        {
            for(int j=1; j<=3; j++)
            {
                scanf("%d",&n);
                if(n>s[j])
                {
                    s[j]=n;
                }
            }
            for(int j = 4; j <= 6; j++)
            {
                cin >> n;
                if(n < s[j])
                {
                    s[j] = n;
                }
            }

        }
        if(s[4]>s[1] && s[5]>s[2] && s[6]>s[3])
        {
            res = (s[4]-s[1])*(s[5]-s[2])*(s[6]-s[3]);
            printf("Case %d: %d\n", i, res);
        }
        else
            printf("Case %d: 0\n",i);
    }
    return 0;
}
