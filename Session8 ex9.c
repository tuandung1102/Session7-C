#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int n,sum,a[100005],b[100005],c[100005],x=1,max;
int cmp(const void *ptr1, const void *ptr2){
    int *x=(int*)ptr1;
    int *y=(int*)ptr2;
    if(*x<*y)return -1;
    else return 1;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    qsort(a,n+1,sizeof(int),cmp);
    b[1]=a[1];
    c[1]=1;
    for(int i=2;i<=n;i++){
        if(a[i]==b[x])c[x]++;
        else{
            max=fmax(max,c[x]);
            x++;
            c[x]=1;
            b[x]=a[i];
        }
    }
    for(int i=1;i<=x;i++)if(c[i]==max){
        printf("%d ",b[i]);
        return 0;
    }
}
/*
8
1 5 2 3 23 5 1 2
*/
