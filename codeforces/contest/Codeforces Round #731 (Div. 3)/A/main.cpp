#include <algorithm>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* Utilities */
#define sfor(i, n) for (int i = 0; i < n; i++)
#define forin(i, j, k, in) for (int i = j; i < k; i += in)
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define pa(i, arr, n) \
    sfor(i, n) { cout << arr[i] << " "; }
#define pael(i, arr, n) \
    sfor(i, n) { cout << arr[i] << endln; }
#define in(a, b, c) b <= a &&a <= c
#define clr(x) memset(x, 0, sizeof(x))
#define endln "\n"
#define pb push_back
#define ll long long
#define ul unsigned long

/* Constants */
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a[2], b[2], f[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1] >> f[0] >> f[1];
        int length = abs(a[0] - b[0]) + abs(a[1] - b[1]);
        if (a[0] == b[0] && a[0] == f[0] && min(a[1], b[1]) < f[1] && max(a[1], b[1]) > f[1]) length += 2;
        if (a[1] == b[1] && a[1] == f[1] && min(a[0], b[0]) < f[0] && max(a[0], b[0]) > f[0]) length += 2;
        cout << length << endln;
    }
}
