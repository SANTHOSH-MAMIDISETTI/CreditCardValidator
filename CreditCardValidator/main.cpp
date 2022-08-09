#include <iostream>
#include <algorithm>
using namespace std;

int Validator(const string& CardNumber)
{   string reversed; int sum = 0, sum2 = 0;
    reversed = CardNumber;
    reverse(reversed.begin(),reversed.end());

//    FOR ODD
    for (int i = 0 ;i < reversed.length(); i= i+2)
    {
        int tmp = ((reversed[i] - 48));
        sum = sum + tmp;
    }

// FOR EVEN
    for ( int j = CardNumber.length()-2; j>=0; j=j-2)
    {
        int tmp2 = ((CardNumber[j] - 48) * 2);
        if (tmp2 > 9)
        {
            tmp2 = (tmp2 / 10) + (tmp2 % 10);
        }
        sum2 += tmp2;
    }
    int grand_sum = sum + sum2;
    if(grand_sum%10 == 0)
    {
        cout<<"VALID CREDIT CARD NUMBER :) "<<endl;
    }
    else
    {
        cout<<"INVALID CREDIT CARD NUMBER :( "<<endl;
    }
    return 0;
}

bool checkType (const string& CardNumber)
{
    if (CardNumber.length() != 16 )
    {
        cout << "PLEASE ENTER THE 16 DIGITS ";
    }
    else
    {
        for (char i: CardNumber)
        {
            if (isdigit(i) == true)
                continue;
            else
            {
                cout << "CHARACTERS NOT SUPPORTED ";
                break;
            }
        }
        Validator(CardNumber);
    }
    return false;
}


int main()
{
    string CardNumber;
    cout << "Enter the number to validate  " << endl;
    cin>>CardNumber;
    try
    {
        checkType(CardNumber);
    }
    catch (exception& e)
    {
        cout<<e.what()<<endl;
    }
}