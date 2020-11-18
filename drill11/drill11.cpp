#include "std_lib_facilities.h"

int main(){
	int birth_year=2002;
	
	
	cout << "Decimal:\t" << showbase << dec << birth_year << endl;
	cout << "Hexadecimal:\t"<< showbase << hex << birth_year << endl;
	cout << "Octal:\t\t" << showbase <<oct << birth_year << endl;
	
	cout << "My Age:\t\t" << dec <<18<< endl;
	
	for(int i=0;i<=3;i++){
		cout << "Standard:\t" << 1234567.89 << endl;
		cout << "DefaultFloat:\t" << defaultfloat << 1234567.89 << endl;
		cout << "Fixed:\t\t" << fixed << 1234567.89 << endl;
		cout << "Scientific:\t" << scientific << 1234567.89 << endl;
		cout << endl;
	}
	
	//A fixed a legjobb mert az pontosabban adja meg mint a többi
	
	int a, b, c, d;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
	
	
	
	return 0;
}
