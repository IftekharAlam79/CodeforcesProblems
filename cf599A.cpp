#include<iostream>

using namespace std;

int main(){
	int d1,d2,d3;
	
	cin>>d1>>d2>>d3;
	
	int result=min(min(d1+d2+d3,2*(d1+d2)),min(2*(d1+d3),2*(d2+d3)));
	
	cout<<result<<endl;
	
	
	

	
	return 0;
	
}
