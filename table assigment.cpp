#include <iostream>
using namespace std;

intmain (){
	int i, j;
	
	for (i=1; i< 11;i = i + 1){
		cout<<"Table of :<<i "<<i<<endl;
		
		for (j=1; j < 11; j =j +1){
			cout << i << " * " << j << "="<< i*j <<endl;
		}
	}
}
