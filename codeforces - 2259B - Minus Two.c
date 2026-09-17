#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int cnt[4] = {0, 0, 0, 0};
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            cnt[x % 4]++;
        }
        int ans = cnt[0];
        if(cnt[2] > ans)
        {
            ans = cnt[2];
        }
        if(cnt[1] + cnt[3] > ans)
        {
            ans = cnt[1] + cnt[3];
        }
        printf("%d\n", ans);
    }
    return 0;
}
