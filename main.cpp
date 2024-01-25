//Ava Wiggins Project 6
#include <iostream>
using namespace std;

void coins(int amount, int& quarters, int& dimes, int& pennies)
{
    quarters = amount / 25;
    amount %= 25;
    dimes = amount / 10;
    amount %= 10;
    pennies = amount;
}

int main()
{
    int amount, quarters = 0, dimes = 0, pennies = 0;

    cout << "Enter the amount of change (1-99 cents): ";
    cin >> amount;

    coins(amount, quarters, dimes, pennies);

    cout << "Coins to give out: " << endl;
    cout << quarters << " quarter(s), ";
    cout << dimes << " dime(s), and ";
    cout << pennies << " penny/pennies." << endl;

    return 0;
}



