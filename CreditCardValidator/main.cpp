using namespace std;
#include <iostream>
#include<bits/stdc++.h>
#include <cstring>
#include <algorithm>

bool checkType (string CardNumber)
{
    if (CardNumber.length() != 16 )
    {
        cout << " wrong digits\n";
    }
    else
    {
        for (char i: CardNumber)
        {
            if (isdigit(i) == true)
                continue;
            else
            {
                cout << "enter proper number\n";
                break;
            }
        };
    }
};
int Validator(const string& CardNumber)
{   string reversed;
    reversed = CardNumber;
    reverse(reversed.begin(),reversed.end());
    cout<<reversed<<endl;
    cout<<CardNumber;
    return 0;
};
int main()
{
    string CardNumber;
    cout << "Enter the number " << endl;
    cin>>CardNumber;
    checkType(CardNumber);
    Validator(CardNumber);
}
