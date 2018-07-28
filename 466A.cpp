#include<iostream>

using namespace std;

int main(){
	
	int ride,speride,ride_value,speride_value;
	int res;
	
	cin>>ride>>speride>>ride_value>>speride_value;
	
    if(speride*ride_value>speride_value){
    	int normal_ride=(ride%speride)*ride_value;
      
    	
    	if(normal_ride<speride_value){
    		
    		cout<<(ride/speride)*speride_value+normal_ride;
    		
   }
		else 
		{
		
			cout<<(ride/speride)*speride_value+speride_value;
			}
    	
    	
	}
	
	
	else 
	
	cout<<ride*ride_value<<endl;
	
	
	
	return 0;
	
	
}
