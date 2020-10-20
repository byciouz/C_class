#include<stdio.h>
#include<cmath>
#include<math.h>

int find(int x ){
    int i;
    int sum =1 ;
    for (i=2;i <=sqrt(x) ;i++){
        if(x%i==0){
            sum  = sum  + i; 
            if(i != sqrt(x))
                sum = sum  + x/i;
        }
    }
    return sum;
}
int main(){
	int i;
    for(i = 1 ; i < 10000  ;i++){
        int fuck = find(i);
        if( i == find(fuck) && i < fuck)
            printf("%d %d\n", i ,fuck);
    }


    return 0;
}

