#include <iostream>
#include <cstdlib>
using namespace std; 
int main(){

	int input = 0;  

	cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl; 
	cin >> input; 

	while(input!=-1){
		double s = 1; 
		double sum = 0;
		double denominator = 1;  
		for (int i=0; i<input + 1; i++){
			sum += (4/denominator)*s;
			denominator += 2; 
			s = -s; 
		}

		cout.setf(ios::fixed); 	   // Display in fixed point notation. For example, display 1e-1 as 0.1
		cout.setf(ios::showpoint); // Always display the decimal point.
		cout.precision(3);         // Set the number of digits to display after the decimal point to 3

		cout << "The approximate value of pi using "<< input + 1 <<" terms is: " << sum << endl; 
		cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl; 
		cin >> input; 
	}
	return 0; 
	
}

