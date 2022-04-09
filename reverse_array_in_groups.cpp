// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

void reverseInGroups(vector<long long> &a, int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        if (i + k >= n)
        {
            reverse(a.begin() + i, a.end());
        }

        else
        {
            reverse(a.begin() + i, a.begin() + i + k);
        }
    }
}
 