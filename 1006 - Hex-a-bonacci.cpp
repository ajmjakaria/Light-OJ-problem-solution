#include<bits/stdc++.h>
using namespace std;

long long hx[100000];
long long a, b, c, d, e, f;
long long fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(hx[n] != -1) return hx[n];
    hx[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )% 10000007;
    return hx[n];
}

int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        memset(hx, -1, sizeof(hx));
        scanf("%lld %lld %lld %lld %lld %lld %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
