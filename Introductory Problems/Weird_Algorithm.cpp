#include <bits/stdc++.h>

//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//  *find_by_order() --> Kth element in a Set
//  order_of_key() --> Number of items strictly smaller than K

// Pragmas
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2")

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define ld long double
#define forp(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define sz(a) (int)a.size()
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define uniq(a) (a).erase(unique(all(a)), (a).end())
#define fix(f, n) fixed << setprecision(n) << f
#define setbits(x) __builtin_popcount(x)
#define setbitsll(x) __builtin_popcountll(x)
#define MSB(n) (31 - __builtin_clz(n))
#define isPresent(ds, el) (ds.find(el) != ds.end())
#define pb push_back
#define ff first
#define ss second
constexpr int64_t INF = 2e18;
constexpr int64_t M = 1e9 + 7;
int ceil(int a, int b) { return (a + b - 1) / b; }

// Operator overloads
template <typename T1, typename T2> // cin >> pair<T1, T2>
istream &operator>>(istream &istream, pair<T1, T2> &p)
{
    return (istream >> p.first >> p.second);
}

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}

template <typename T1, typename T2> // cout << pair<T1, T2>
ostream &operator<<(ostream &ostream, const pair<T1, T2> &p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}
// void preComp(){

// }
void tushar()
{
    ll n;
    cin >> n;
    cout << n << " ";
    while (n!=1)
    {
        if(n%2==0){
            n /= 2;
        }
        else{
            n = (n * 3) + 1;
        }
        cout << n << " ";
    }
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // preComp();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        tushar();
    }
    return 0;
}
