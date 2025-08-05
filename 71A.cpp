#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /// 请在段落内编写算法
    int n;
    scanf("%d", &n);
    for (int p = 0; p < n; p++)
    {
        char str[101];
        scanf("%s", str);
        int len = strlen(str);
        if (len <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            int d = len - 2;
            printf("%c%d%c\n", str[0], d, str[len - 1]);
        }
    }
    ///
    return 0;
}