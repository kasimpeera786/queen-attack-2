#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int min(int a,int b){
    if(a>b)
        return b;
    return a;
}
int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int rq,i; 
    int cq;
    int c[8];
    scanf("%d %d",&rq,&cq);
     c[0] = n-cq;
     c[1] = cq-1;
     c[2] = n-rq;
     c[3] = rq-1;
     c[4] = min(rq,cq)-1;
     c[5] = min(n-rq,n-cq);
     c[6] = min(n-rq,cq-1);
     c[7] = min(rq-1,n-cq);
    
    for(int a0 = 0; a0 < k; a0++){
        int ro; 
        int co; 
        scanf("%d %d",&ro,&co);
        if(ro==rq&&(co-cq)>0){
            if(c[0]>(co-cq-1))
                c[0] = co-cq-1;
            //printf("%d %d\n",a0,0);
        }
        if(ro==rq&&(co-cq)<0){
             if(c[1]>(cq-co-1))
                c[1] = cq-co-1;
           //// printf("%d %d \n",a0,1);
        }
        if(co==cq&&(ro-rq)>0){
            if(c[2]>(ro-rq-1))
                c[2]=(ro-rq-1);
           // printf("%d %d\n",a0,2);
        }
        if(co==cq&&(ro-rq)<0){
            if(c[3]>(rq-ro-1))
                c[3]=(rq-ro-1);
           // printf("%d %d\n",a0,3);
        }
        if((co-cq)==(ro-rq)&&(ro-rq)<0){
            if(c[4]>(rq-ro-1))
                c[4]=(rq-ro-1);
           // printf("%d %d\n",a0,4);
        }
        if((co-cq)==(ro-rq)&&(ro-rq)>0){
            if(c[5]>(ro-rq-1))
                c[5]=(ro-rq-1);
//printf("%d %d\n",a0,5);
        }
        if((co-cq)==(rq-ro)&&(ro-rq)>0){
            if(c[6]>(ro-rq-1))
                c[6]=(ro-rq-1);
            //printf("%d %d\n",a0,6);
        }
        if((co-cq)==(rq-ro)&&(ro-rq)<0){
            if(c[7]>(rq-ro-1))
                c[7]=(rq-ro-1);
           // printf("%d %d\n",a0,7);
        }
        // your code goes here
        
    }
    int sum=0;
    for(i=0;i<8;i++){
        sum = sum + c[i];
        //printf("%d ",c[i]);
    }
    printf("%d",sum);
    return 0;
}
