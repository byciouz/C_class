#include <iostream>
using namespace std;

int main(){
	int a,b,j,k,i,max,x=1;
	cin>>a>>b;
	max=a;
	if(b>a) max=b;
	int a1[10000]={0},b1[10000]={0};
	a1[a]=1;b1[b]=1;
	for(j=1;j<=a/2;j++){
		if(a%j==0){
			a1[j]=1;
		}
	} 
	for(k=1;k<=b/2;k++){
		if(b%k==0){
			b1[k]=1;
		}
	} 
	if(a>b&&a%b==0) {
		cout<<b<<endl;
	}
	else if(b>a&&b%a==0){
		cout<<a<<endl;
	}
	else{
		for(i=(max/2);i>=0;i--){
			if(a1[i]==1&&b1[i]==1) {		
			x=i;
			break;
			}
		}
		cout<<x<<endl;
	}
	
	return 0;
}
