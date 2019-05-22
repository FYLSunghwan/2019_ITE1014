#include <cstdio>
#include <utility>
#include <cstring>
#include <algorithm>

#define pii pair<int,int>

using namespace std;

pii words[1000];

int main() {
    FILE *fp = fopen("article.txt","r");
    char c;
    int chs=0, lets=0;
    while((c=fgetc(fp))!=EOF) {
        if(c==' ' || c=='\n') continue;
        else {
            chs++;
        }
        if(c>='A' && c<='Z') {
            words[c-'A'].first++;
            words[c-'A'].second=c-'A';
            ++lets;
        }
        else if(c>='a' && c<='z') {
            words[c-'a'].first++;
            words[c-'a'].second=c-'a';
            ++lets;
        }
    }
    sort(words,words+26);
    printf("letter: %d, char: %d\n",lets,chs);
    char freq=words[25].second+'A',notfreq=words[0].second+'A';
    printf("freq:%c, notfreq:%c",freq,notfreq);
}
