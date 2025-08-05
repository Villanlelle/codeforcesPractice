#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    scanf("%d%d", &a, &b);
    int l;
    int arr[l];
    if (a == b)
    {
        l = 1;
        arr[0] = a;
    }
    else
    {
        l = 3;
        int m = -10086, n;
        n = 3 * a - b - m;
        arr[0] = m;
        arr[1] = b;
        arr[2] = n;
    }
    printf("%d\n", l);
    for (int i = 0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}