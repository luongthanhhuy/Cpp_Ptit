// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

int a[1005];

int main()
{
    faster();
    int t, n, k;
    cin >> t;
    while(t--)
    {
        int dd[1000005] = {};
        cin >> n >> k;
        FOR(i, 1, n)
        {
            cin >> a[i];
            dd[a[i]]++;
        }
        if(a[n] < k || !dd[k]) cout << -1 << endl;
        else cout << dd[k] << endl;
    }
    return 0;
}

