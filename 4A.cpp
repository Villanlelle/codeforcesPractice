#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /// 请在段落内编写算法
    int w, y;
    scanf("%d", &w);
    y = w % 2;
    if (y == 0)
    {
        if (w == 2)
            printf("NO\n");
        else
            printf("YES\n");
    }
    else
        printf("NO\n");

    ///
    return 0;
}