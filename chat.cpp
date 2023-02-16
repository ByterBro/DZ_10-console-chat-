#include<string>
#include<iostream>
#include"chat.h"
using namespace std;

	Users::Users(string name, string log, string pass)
	{	
		_name = name;
		_login = log;
		_password = pass;
	}
	Users::Users() = default;
	Users::~Users() = default;
	void Users::Reg()
	{
		cout << "Hello, type your name please: ";
		string name;
		cin >> name;
		_name = name;
		cout << "Type your login: ";
		string log;
		cin >> log;
		_login = log;
		cout << "Type your password: ";
		string pass;
		cin >> pass;
		_password = pass;
	}
	int Users::Sign_in()
	{	
		string logen;
		string pass;
		cout << "Hello, type your login please: ";
		cin >> logen;
		cout << "Type your password: ";
		cin >> pass;
		cout << endl;
		try
		{
			if (logen == _login)
			{
				if (pass == _password)
				{
					return 76;
				}
				else
				{
					
					throw "wrong password or login";
					return 0;
				}
			}
		}
		catch (const char* e)
		{
			cout << e << endl;
			return 0;
		}
	}
	void Users::ChangePass()
	{
		string curpass;
		cout << "Type your current password" << endl;
		cin >> curpass;
		try
		{
			if (curpass == _password)
			{
				string newpas;
				cout << "Type new password" << endl;
				cin >> newpas;
				_password = newpas;
				cout << "Password changed" << endl;
			}
			else
			{
				cout << "Try again" << endl;
				throw "Wrong password";

			}
		}
		catch (const char* e)
		{
			cout << e << endl;
		}
	}
	void Users::All()
	{
		string i;
		cout << "Type here: ";
		cin >> i;
		cout << endl;
		cout << "[All]" << _name << ": " << i << endl;
	}
	bool Users::GetName()
	{
		if (_name != "")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

