#include "std_lib_facilities.h"

struct information
{
	information(double telefon, string kn, string vn, string e)
		: telNum(telefon), keresztNev(kn), vezetekNev(vn), email(e)
	{}

	double telNum;
	string keresztNev, vezetekNev, email;
};

void printTable(const vector<information>& v)
{
	cout << '|' << setw(15) << " Kereszt Név " <<  '|' << setw(18) << " Vezeték Név" << '|' << setw(25) << " Email Cím" << '|' << setw(15) << " Telefonszám " << '|' << endl;
	for (int i = 0; i < 100; ++i)
		cout << "-";
	cout << endl;
	for (information i : v)
		cout << '|' << setw(15) << i.keresztNev <<  '|' << setw(15) << i.vezetekNev << '|' << setw(25) << i.email << '|' << setw(15) << fixed << setprecision(0) << i.telNum << '|' << endl;
	cout << endl;
	for (int i = 0; i < 100; ++i)
		cout << "-";
}
int main()
{
	vector<information> v_info = {
		{ 12351346612, "Nándor", "Valami", "asdasdasd@gmail.com" },
		{ 06123571236, "Dániel", "Kekw", "asdasdasd@hotmail.com" },
		{ 13782369333, "Ádám", "Nemtudom", "asdasdas@hotmail.com" },
		{ 12357123578, "Bence", "asdasd", "asdsasdasd@gmail.com" },
		{ 86347894568, "Márkó", "Sarbak", "asdsasd@gmail.com" }
	};

	printTable(v_info);
  
	cout << endl;
	keep_window_open();
	return 0;
}
