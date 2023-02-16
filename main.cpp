#include<string>
#include<iostream>
#include"chat.h"

using namespace std;

int main() {

	Users a;
	Users b("Gena", "Batya228", "Anime");
	int i;
	int j;
	string h;
	bool sign_in_as = 1;
	bool in_use = 0;
metka:
	cout << "Hello there!" << endl;
	cout << "Welcome to my solo chat!" << endl;
	cout << "Please, choose one of selected options" << endl;
	cout << "Choose user to use" << endl;
	cout << "1 - user a, 2 - user b" << endl;
	cin >> j;
	switch (j)
	{
	case 1:
		sign_in_as = 0; //если 0, то юзер а
		break;
	case 2:
		sign_in_as = 1; // если 1, то юзер б
		break;
	default:
		cout << "Wrong user" << endl;
		goto shiza;
	}
	cout << "1 - regestartion" << endl;
	cout << "2 - sign in" << endl;
	cout << " " << endl;
	cin >> i;
	if (i == 1)
	{
		if (sign_in_as == 0)
		{
			if (a.GetName())
			{
				bool tt = a.GetName();
			}
			else
			{
				a.Reg();
				in_use = 1;
				goto mnogogoto;
			}
		}
		if (sign_in_as == 1)
		{
			if (b.GetName())
			{
				bool jj = b.GetName();
				b.Reg();
				in_use = 1;
				goto mnogogoto;
			}
		}
	}
	if (i == 2)
	{
		if (sign_in_as == 0)
		{
			if (a.Sign_in() == 76)
			{
				in_use = 1;
				sign_in_as = 1;
				goto mnogogoto;
			}
			else
			{
				cout << "Error 1" << endl;
				goto shiza;
			}
		}
		if (sign_in_as == 1)
		{
			if (b.Sign_in() == 76)
			{
				in_use = 1;
				sign_in_as = 1;
				goto mnogogoto;
			}
			else
			{
				cout << "Error 1" << endl;
				goto shiza;
			}
		}
	}


mnogogoto:
	if (in_use == 1)
	{
		h = "";
		cout << "[console]: Greetings there again!" << endl;
		cout << "[console]: Press e to leave" << endl;
		cout << "[console]: type 'all' to type in global chat" << endl;
		cout << "[console]: type logoff to log off" << endl;
		cout << "[console]: '!help'to type this menu again"<<endl;
		cout << "[console]: if you want to change your password, type 'passchange'" << endl;
		cout << "[developer]: enjoy!" << endl;
		
		while (h != "exit")
		{
			cin >> h;
			if (h == "!help")
			{
				cout << "press e to leave" << endl;
				cout << "type 'all' to type in global chat" << endl;
				cout << "type logoff to log off" << endl;
				cout << "'!help'to type this menu again" << endl;
				cout << "if you want to change your password, type 'passchange'" << endl;
			}
			if (h == "passchange")
			{
				if (sign_in_as)
				{
					a.ChangePass();
				}
				else
				{
					b.ChangePass();
				}
			}
			if (h == "all")
			{
				if (sign_in_as)
				{
					a.All();
				}
				else
				{
					b.All();
				}
			}
			if (h=="logoff")
			{
				cout << "Are you sure you want to log off? (y/n)";
				char he;
				cin >> he;
				if (he == 'y')
				{
					goto metka;
				}
			}
		}
	}
	shiza:
	return 0;
}
