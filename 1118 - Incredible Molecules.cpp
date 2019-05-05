/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.11.2018
Computer Science & Engineering
*/

#include<bits/stdc++.h>
using namespace std;
#define sqr(x) ((x)*(x))
#define pi acos(-1.0)
#define eps 1e-10
int main()
{
    int t;
    cin >> t;
    double x1, y1, r1, x2, y2, r2;
    double ans;
    for(int i = 1; i <= t; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double a=sqrt(sqr(x1-x2)+sqr(y1 - y2));
        if((a + eps) >= (r1 + r2))
        {
            ans = 0;
        }
        else if(a < fabs(r1 - r2) + eps)
        {
            double o = min(r1, r2);
            ans=pi*o*o;

        }
        else{
        double p=acos((sqr(r1)+sqr(a)-sqr(r2))/(2.0*a*r1));
        double q=acos((sqr(r2)+sqr(a)-sqr(r1))/(2.0*a*r2));
        ans=p*sqr(r1)+q*sqr(r2)-sin(p)*a*r1;
        }
        printf("Case %d: %.6lf\n", i, ans);
    }
    return 0;
}
