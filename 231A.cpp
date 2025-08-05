#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, c, num = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a + b + c >= 2)
        {
            num++;
        }
    }
    printf("%d\n", num);
    return 0;
}