#include "std_lib_facilities.h"

int main(){
	double number=0, min=0, max=0, sum=0;
	string unit;
	vector<double>vector;
	
	while(unit!="|"){
		cout <<"To exit type '|', press any button to continue\n";
		cin >> unit;
			if(unit=="|")
				break;
		cout <<"Give me a number: \n";
		cin >> number;
		cout <<"Give me a unit: \n";
		cin >> unit;
		
		if(unit!="cm" && unit!="m" && unit!="in" && unit!="ft"){
			cout <<"Illegal units, please choose another one\n";
			cin >> unit;
		}
	
		if(unit=="cm")
			number/=100;
		if(unit=="ft")
			number*=0.254;
		if(unit=="in")
			number*=0.3048;
		vector.push_back(number);
		sum+=number;
		
			
		//cout <<number<<unit<<endl;
				
	}
	for(int i=1;i<vector.size();i++){
		if(vector[i]<vector[min]){
			min=i;
		}	
	}
	for(int i=1; i<vector.size();i++){
		if(vector[i]>vector[max]){
			max=i;
		}
	}
	sort(vector);
	cout <<"Sorted values: \n";
	
	for(int i=0; i<vector.size();i++)
		cout<<vector[i]<<"m, \n";
	
	cout <<"The smallest value is: "<<vector[min]<<"m\n";
	cout <<"The largest value is: "<<vector[max]<<"m\n";
	cout <<"You gave "<<vector.size()<<" numbers.\n";
	cout <<"The sum of the value is: "<<sum<<"m\n";
	
	return 0;
}
