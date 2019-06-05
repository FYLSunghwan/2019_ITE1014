#include <cstdio>
int count(int cnt) {
    int ans=0;
    while(cnt) {
        if(cnt%10==3 || (cnt%10)==6 || (cnt%10)==9) ans++;
        cnt/=10;
    }
    return ans;
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        int ans=count(i);
        if(ans) {
            for(int j=0;j<ans;j++) printf("clap ");
            printf("\n");
        }
        else printf("%d\n",i);
    }
    return 0;
}