#include <iostream>
#include "User.h"
using namespace std;

User::User()
{
	name = "NoName";
	mail = "NoName";
	pass = "NoSymbols";
	number = 0;
	balance = 0;
}

User::User(string name, string mail, string pass, int number, int balance)
{
    SetName(name);
    SetMail(mail);
    SetPassword(pass);
    SetPhone(number);
    SetBalance(balance);
}

void User::SetName(string& name) 
{
    if (!name.empty())
    {
        this->name = name;
    }
}
void User::SetMail(string& mail) 
{
    if (!mail.empty())
    {
        this->mail = mail;
    }
}
void User::SetPassword(string pass)
{
    this->pass = pass;
}
void User::SetPhone(int phone) 
{
    this->number = number;
}
void User::SetBalance(int balance) 
{
    this->balance = balance;
}

string User::GetName() const
{
    return name;
}
string User::GetMail() const
{
    return mail;
}
string User::GetPassword() const
{
    return pass;
}
int User::GetPhone() const
{
    return number;
}
int User::GetBalance() const
{
    return balance;
}
void User::Registration()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your mail: ";
    cin >> mail;
    cout << "Enter your password: ";
    cin >> pass;
    if (pass =! 0)
    {
        cout << "Ñonfirm password: ";
        cin >> pass;
    }
    cout << "Enter number your phone: ";
    cin >> number;
    cout << "Enter your balance: ";
    cin >> balance;
}

void Login(string mail, string password)
{
    string userMail;
    string userPass;

    cout << "Enter mail: ";
    cin >> userMail;

    if (mail == userMail)
        cout << "Welcome!\n";
    else
        cout << "Incorrect mail.\n";

    cout << "Enter password: ";
    cin >> userPass;

    if (password == userPass)
        cout << "Welcome!\n";
    else
        cout << "Incorrect password.\n";
}



Product::Product()
{
    name = "NoName";
    price = 0;
    description = "Nothing";
    numberOfProduct = 0;
}

Product::Product(string name, float price, string description, int numberOfProduct)
{
    setName(name);
    setPrice(price);
    setDescription(description);
    setNumberOfProduct(numberOfProduct);
}

void Product::setName(string name)
{
    if (!name.empty())
    {
        this->name = name;
    }
}

void Product::setPrice(float price)
{
    if (price > 0)
    {
        this->price = price;
    }
}

void Product::setDescription(string description)
{
    if (!description.empty())
    {
        this->description = description;
    }
}

void Product::setNumberOfProduct(int numberOfProduct)
{
    if (numberOfProduct > 0)
    {
        this->numberOfProduct = numberOfProduct;
    }
}

string Product::getName() const
{
    return this->name;
}

float Product::getPrice() const
{
    return this->price;
}

string Product::getDescription() const
{
    return this->description;
}

int Product::getNumberOfProduct() const
{
    return this->numberOfProduct;
}