#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, t;
    scanf("%lld%lld", &n, &t);

    long long *arr = (long long *)malloc(n * sizeof(long long));
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long num = 0;
    long long total = 0;
    long long left = 0;
    for (long long right = 0; right < n; right++)
    {
        total = total + arr[right];
        while (total > t)
        {
            total = total - arr[left];
            left++;
        }
        if ((right - left + 1) > num)
        {
            num = right - left + 1;
        }
    }
    printf("%lld\n", num);

    free(arr);
    return 0;
}