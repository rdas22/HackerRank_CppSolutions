#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int m,n,s,k,count=0,i;
    m = *a;
    n = *b;
    s = m+n;
    k = (m-n);
    *a = s;
    if(k<0)
    {
        for(i=0;k<0;++i)
        {
            ++k;
            ++count;
        }
        *b = count;
    }
    else
    {
        *b = k;
    }
    

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

