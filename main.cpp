#include <iostream>
using namespace  std;
int MiejscowoscZamieszkania=1 , minut=0;

int main()
{
    while(MiejscowoscZamieszkania<=10)
    {
       minut +=5;
       MiejscowoscZamieszkania *=2;

       cout<<"minelo minut: "<<minut<<endl;
       cout<<"liczba zamieszkanych osob: "<<MiejscowoscZamieszkania<<endl;
    }
    return 0;
}