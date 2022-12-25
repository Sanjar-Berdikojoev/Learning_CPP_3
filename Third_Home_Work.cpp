#include <iostream>
using namespace std;

string go_out;

class BankAccount
{
public:
    string account_number;
    string account_currency;
    double money_on_account;
};

class BankAccountCard : public BankAccount
{
public:
    string card_number;
    string name;
    string last_name;
    int overdraft_limit;
};

int main()
{
    BankAccount first_account;
    first_account.account_number = "4933-2421-4323-8879";
    first_account.account_currency = "KGS (som)";
    first_account.money_on_account = 100000;

    cout << "First basic object:" << endl;
    cout << "Account number: " << first_account.account_number << endl;
    cout << "Currency: " << first_account.account_currency << endl;
    cout << "Money on account: " << first_account.money_on_account << " som" << endl;
    cout << "-----------------------------------------------------" << endl;

    BankAccount second_account;
    second_account.account_number = "9452-6423-3712-7214";
    second_account.account_currency = "EU (euro)";
    second_account.money_on_account = 200.55;

    cout << "Second basic object:" << endl;
    cout << "Account number: " << second_account.account_number << endl;
    cout << "Currency: " << second_account.account_currency << endl;
    cout << "Money on account: " << second_account.money_on_account << " euro" << endl;
    cout << "-----------------------------------------------------" << endl;

    BankAccountCard third_account;
    third_account.name = "Sanzhar";
    third_account.last_name = "Berdikozhoev";
    third_account.card_number = "2134-4362-9676-8718";
    third_account.account_number = "9452-6423-3712-7214";
    third_account.account_currency = "USD (dollar)";
    third_account.money_on_account = 55000;
    third_account.overdraft_limit = -1000;

    cout << "First card object:" << endl;
    cout << "Name: " << third_account.name << endl;
    cout << "Last name: " << third_account.last_name << endl;
    cout << "Card number: " << third_account.card_number << endl;
    cout << "Account number: " << third_account.account_number << endl;
    cout << "Currency: " << third_account.account_currency << endl;
    cout << "Money on account: " << third_account.money_on_account << " dollar" << endl;
    cout << "Overdraft limit : " << third_account.overdraft_limit << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "If you want to exit, please write something and press Enter" << endl;
    cin >> go_out;
}



