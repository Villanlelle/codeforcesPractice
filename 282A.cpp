#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x = 0;
    int pl = 0, mi = 0;
    scanf("%d", &n);
    while (n--)
    {
        char ch[4];
        scanf("%s", &ch);
        if (ch[1] == '+')
        {
            pl++;
        }
        if (ch[1] == '-')
        {
            mi++;
        }
    }
    x = 0 + pl - mi;
    printf("%d\n", x);
    return 0;
}