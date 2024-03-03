A year is a leap year only if it satisfies the following condition.
The year is divisible by 400
The year is divisible by 4 but not by 100

#include<bits/stdc++.h>
using namespace std;
bool yyear(int year)
{
    if(year % 400 == 0)
    return true;
    if(year % 100 == 0)
    return false;
    if(year % 4 == 0)
    return true;
    return false;
}
int main()
{
    int year=1996;
    if(yyear(year))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}