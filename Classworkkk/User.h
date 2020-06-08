#pragma once
#include <string>
using namespace std;

class User
{
private:
	string name;
	string mail;
	string pass;
	int number;
	int balance;

public:
	User();
	User(string name, string mail, string pass, int number, int balance);

	void SetName(string& name);
	void SetMail(string& mail);
	void SetPassword(string pass);
	void SetPhone(int phone);
	void SetBalance(int balance);

	string GetName() const;
	string GetMail() const;
	string GetPassword() const;
	int GetPhone() const;
	int GetBalance() const;

	void Registration();
	void Login(string mail, string password);
};



class Product
{
private:
	string name;
	float price;
	string description;
	int numberOfProduct;
public:
	Product();
	Product(string name, float price, string description, int numberOfProduct);

	void setName(string name);
	void setPrice(float price);
	void setDescription(string description);
	void setNumberOfProduct(int numberOfProduct);

	string getName()const;
	float getPrice()const;
	string getDescription()const;
	int getNumberOfProduct()const;
};