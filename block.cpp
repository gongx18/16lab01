//block.cpp
#include <iostream>
using namespace std; 
int main(){
	int r; 
	int c; 
	cout<<"Enter number of rows and columns:"<<endl; 
	cin>> r; 
	cin>> c; 


	while(r != 0 && c != 0){
		for(int i = 0; i< r; i ++){
			int j = 0; 
			while(j != c){
				cout << "X.";
				j++;  
			} 
			cout << "\n";
		} 
		cout<<"Enter number of rows and columns:"<<endl; 
		cin>> r; 
		cin>> c; 
	}
	return 0; 	
}
