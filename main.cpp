#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    unsigned an,zi,luna,y = 0,m = 0,c = 0,rezultat = 0;
    do{
    cout<<"Citirea datei dorite:\n";
    do{cout<<"                  Zi: ";cin>>zi;}while(zi < 1 || zi > 31);
    do{cout<<"                  Luna: ";cin>>luna;}while(luna < 1 || luna > 12);
    cout<<"                  An: ";cin>>an;

    if((an >= 1700 && an < 1800) || (an >= 2100 && an < 2200))
        c = 4;
    else if((an >= 1800 && an < 1900) || (an >= 2200 && an < 2300))
            c = 2;
        else if((an >= 1900 && an < 2000)||(an >= 2300))
                c = 0;
            else if(an >= 2000 || an < 2100)
                    c = 6;
    y = an % 100;
    y += y / 4;
    y = y % 7;
    if(luna == 1 || luna == 10)
        m = 0;
    else if(luna == 5)
            m = 1;
        else if(luna == 8)
                m = 2;
            else if(luna == 2 || luna == 3 || luna == 11)
                    m = 3;
                else if(luna == 6)
                        m = 4;
                    else if(luna == 12 || luna == 9)
                            m = 5;
                        else
                            m = 6;
    if(((an % 4 == 0 && an % 100) || an % 400 == 0) && (luna == 1 || luna == 2))
        rezultat =  (y + m + c + zi - 1) % 7;
    else
        rezultat =  (y + m + c + zi) % 7;
    switch(rezultat)
        {
        case 0:
            cout<<"Duminica";
            break;
        case 1:
            cout<<"Luni";
            break;
        case 2:
            cout<<"Marti";
            break;
        case 3:
            cout<<"Miercuri";
            break;
        case 4:
            cout<<"Joi";
            break;
        case 5:
            cout<<"Vineri";
            break;
        case 6:
            cout<<"Sambata";
            break;
        }
    cout<<endl;
    getch();
    system("cls");
    }while(an != 0);
}
