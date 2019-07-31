#include <iostream>
#include <string>
using namespace std;
int main ()
{
	char Menu;
	string User_re,User_log;
	string Pass_re,Pass_log;
	do
	{
		cout << "\n//////////MENU/////////" << endl;
		cout << "1. Register" << endl;
		cout << "2. Login " << endl;
		cout << "Q. Exit program" << endl;
		cout << "______________________" << endl << endl;
		cout << "Enter Munu : ";
		cin >> Menu ;
		cout << endl;

		if(Menu == '1')
		{
			cout << "*******Register*******" << endl;
			cout << "Input Username : " ;
			cin >> User_re;
			cout << "Input Password : " ;
			cin >> Pass_re;
		}else if(Menu == '2')
		{
			cout << "*******Login*******" << endl;
			cout << "Input Username : " ;
			cin >> User_log;
			cout << "Input Password : " ;
			cin >> Pass_log;
			if(User_log != User_re || Pass_log != Pass_re)
			{
				do
				{
					cout << "\n!!! Username or password incorrect please try again !!!" << endl ;
					cout << "Input Username : ";
					cin >> User_log;
					cout << "Input Password : ";
					cin >> Pass_log;
				}while(User_log != User_re || Pass_log != Pass_re);
			}else cout << "User and Password Correct ^__^" << endl;
		}else if(Menu == 'Q') cout << "Exit Program...." << endl<<endl;
	}while(Menu!='Q');
	return(0);
}