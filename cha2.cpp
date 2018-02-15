#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;


int main(){
	srand(time(0)); 
	long long int k,a,i,j,l,N,sum=0,z=2;;
	cin>>N;
	int num[N]={};
	
	for(i=0;i<N;i++){
		sum+=z;
		z*=2;
		
	}
		
	for(k=0;k<100000000;k++){
		a=rand()%sum;
			z=2;
			j=1;
			l=1;
			while(j<=sum){
				if(a<=j){
					num[N-l]++;
					break;
					}
				z*=2;
				j+=z;
				l++;
			}	
	}
	sum=0;	
	for(i=0;i<N;i++){
	
		cout<<i+1<<" : "<<num[i]<<endl;	
		sum+=num[i];
	}
	cout<<sum;
	return 0;
}
