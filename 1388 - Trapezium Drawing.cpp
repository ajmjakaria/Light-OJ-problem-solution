/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.11.2018
*/

#include<bits/stdc++.h>
using namespace std;

#define sqr(x) (x)*(x)

int main()
{
    int t;
    double Ax, Ay, Bx, By, b, c, d, ans = 0;
    cin >> t;
    for(int i = 1; i <= t; i ++)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf",&Ax, &Ay, &Bx, &By, &b, &c, &d);
        double AB = sqrt(sqr(Bx - Ax) + sqr(By - Ay));
        double sin_theta = (By - Ay)/AB;
        double cos_theta = (Bx - Ax)/AB;
        double e = AB - c;

        double s = (d + b + e)/2;
        double area = sqrt(s * (s - d) * (s - b) * (s - e));
        double h = (2.0 * area) / e;
        double AE = sqrt(fabs(sqr(d) - sqr(h)));
        if (sqr(b) > sqr(d) + sqr(e))
            AE = - AE;



        double cx, cy, dx, dy;
        dx = Ax + AE * cos_theta - h * sin_theta;
        dy = Ay + AE * sin_theta + h * cos_theta;
        cx = Ax + (AE + c) * cos_theta - h * sin_theta;
        cy = Ay + (AE + c) * sin_theta + h * cos_theta;
        printf("Case %d:\n%lf %lf %lf %lf\n", i, cx, cy, dx, dy);

    }
    return 0;
}

