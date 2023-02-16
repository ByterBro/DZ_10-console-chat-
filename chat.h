#pragma once
#include<string>

using namespace std;
class Users
{
private:
	string _name;
	string _login;
	string _password;
public:
	Users(string name, string log, string pass);
	Users();
	~Users();
	void Reg();
	int Sign_in();
	void ChangePass();
	void All();
	bool GetName();
};