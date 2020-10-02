#include "std_lib_facilities.h"

int main(){
	string first_name, friend_name;
	char friend_sex=0;
	int age;
	
	cout <<"Enter the name of the person you want to write to\n";
	cin >> first_name;
	
	cout <<"Enter the name of the person who you are friend with.\n";
	cin >> friend_name;
	
	cout <<"Enter the word m if your friend is a male or the word f if your friend is a female.\n";
	cin >> friend_sex;
	
	cout <<"Enter your friend's age\n";
	cin >> age;
	
	cout <<"Dear "<<first_name<<",\n";
	cout <<"How are you? I am fine. I miss you. I started learning programming and it's going really well so far.";
	cout <<" Have you seen "<<friend_name<<" lately?";
	
	if(friend_sex=='m')
		cout <<" If you see "<<friend_name<<" please ask him to call me. ";
	else if(friend_sex=='f')
		cout <<" If you see "<<friend_name<<" please ask her to call me. ";
		
	cout <<"I hear you just had a birthday and you are "<<age<<" years old. ";
	if(age<=0 || age>=110){
		simple_error("you're kidding!");
		}
	else if(age<=12){
		cout <<"Next year you will be "<<age+1<<".\n";
	}
	else if(age==17){
		cout <<"Next year you will be able to vote.\n";
	}
	else if(age>=70){
		cout <<"I hope you are enjoying retirement.\n";
	}
	cout <<"\nYours sincerely,\n\n\n"; 
	cout <<"Márkó Sarbak\n";
	
	return 0;
}

