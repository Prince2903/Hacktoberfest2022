#include <iostream>
#include <vector>
using namespace std;

// Precomputer left max & right max for every index
int getwater_eff(vector<int> v, int n)
{
    int res = 0;
    vector<int> lmax(n), rmax(n);
    lmax[0] = v[0];
    rmax[n - 1] = v[n - 1];
    // precomputing left max
    for (int i = 1; i < v.size() - 1; i++)
    {
        lmax[i] = max(lmax[i], lmax[i - 1]);
    }
    // precomputing right max
    for (int i = v.size() - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i], rmax[i + 1]);
    }
    for (int i = 1; i < v.size() - 1; i++)
    {
        res += (min(lmax[i], rmax[i]) - v[i]);
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << res << endl;
    res = getwater_eff(v, n);
    cout << res << endl;
    return 0;
}
