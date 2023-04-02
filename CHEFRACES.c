#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,a,b;
        int count=0;
        scanf("%d%d%d%d",&x,&y,&a,&b);
        if(x!=a && x!=b){
            count++;
            
        }
        if(y!=a && y!=b){
            count++;}
            
    printf("\n%d",count);
    
}
return 0;
}
