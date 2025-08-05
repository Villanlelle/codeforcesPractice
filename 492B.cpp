#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, l;
    scanf("%d%d", &n, &l);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    double p = arr[0] - 0;
    double q = l - arr[n - 1];
    double d = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > d)
        {
            d = arr[i + 1] - arr[i];
        }
    }
    double e;
    e = d / 2.0;
    double max = e;
    if (p > max)
        max = p;
    if (q > max)
        max = q;
    printf("%.10lf\n", max);
    return 0;
}