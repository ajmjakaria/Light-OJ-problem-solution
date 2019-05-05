/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///
///Abu Jafar MD Jakaria 06.11.2018
*/

#include<bits/stdc++.h>
using namespace std;

vector < pair<int, int> > v;
vector < pair<int, int> > m;

int main()
{
    int t, n, x, y;
    cin >> t;
    for(int c = 1; c <= t; c++)
    {
        cin >> n;
        m.clear();
        v.clear();


        pair<int, int> inp;
		pair<int, int> p;
		pair<int, int> q;
		int ans = 0;
		int freq = 0;

        while(n--)
        {
            scanf("%d", &inp.first);
			scanf("%d", &inp.second);
			v.push_back(inp);
        }

        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                p = v[i];
                q = v[j];

                x = v[i].first + v[j].first;
                y = v[i].second + v[j].second;

                inp.first = x;
                inp.second = y;

                m.push_back(inp);


            }

        }

        sort(m.begin(), m.end());

        for (int i = 1; i < m.size(); i++) {
			if((m[i].first == m[i-1].first) && (m[i].second == m[i-1].second)) {
				freq++;
			}

			else {
				ans = ans + (freq * (freq + 1)) / 2;
				freq = 0;
			}
		}


		printf("Case %d: %d\n",c, ans);

    }
}
