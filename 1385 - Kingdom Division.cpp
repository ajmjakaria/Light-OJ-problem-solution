/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.11.2018
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double a, b, c, ans = 0;
    cin >> t;
    for(int i = 1; i <= t; i ++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        double d = ((b * b)-(a * c))/b;
        if((b*b-a*c)/b<=0)
            printf("Case %d: -1\n", i);
        else
        {
            ans = (a*c)*(b+c+a+b)/d;
            printf("Case %d: %lf\n", i, ans/b);
        }
    }
    return 0;
}
