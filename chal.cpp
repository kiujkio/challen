#include<iostream>
using namespace std;
int main(){
	int x,y=0,count=1,timeO=10,timeN ;
	cout<<"Input the burner location : ";
	cin>>x;
	while(x>=0 && x<100){
		if(x!=0&&count==1){
			timeO=x;
			count++;
		}else if(x==0&&count==1){
				y=0;
				cout<<"Input the burner location : ";
				cin>>x;
				count++; 
		}else if(x>0&&x<100&&x>y){
			timeN=(x-y)/2;
				if(timeO<timeN)timeO=timeN;
			y=x;
			cout<<"Input the burner location : ";
			cin>>x;
			count++;
		}
		else{
			cout<<"The location must be greater than "<<y;
			cout<<"\nInput the burner location : ";
			cin>>x;
		}
	}
	if(x==100&&count>1){
		timeN=(100-y)/2;
		if(timeN>timeO)timeO=timeN;
	}
	else {
		timeN=100-y;
		if(timeN>timeO)timeO=timeN;
	}	
	cout<<"Burning completes in " <<timeO/10.0<<" sec." ;

		return 0;
}
