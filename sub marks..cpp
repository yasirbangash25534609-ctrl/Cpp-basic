#include <iostream>
using namespace std; 
int main(){
	int eng , pf ,ict;
	int total;
	
	cout<<"Enter eng marks:";
	cin>> eng;
	cout<<"Enter pf marks:";
	cin>> pf;
	cout<<"Enter ict marks:";
	cin>> ict;
	
	total= eng + pf +ict;
	
	cout<< "Total =" << total<<endl;
	
	if( total >= 100){
		cout <<"True - pass";
	}else{
		cout <<"False - Fail";
	}
	return 0;
}
