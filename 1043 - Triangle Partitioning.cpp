/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 04.11.2018
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, r, ad;
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        cin >> a >> b >> c >> r;
        ad = a*sqrt(r/(r+1));
        printf("Case %d: %.10lf\n", i, ad);
    }
    return 0;
}
