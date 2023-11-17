#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 1;
    bool flagaBlad = false;
    
    do
    {
        system("cls");
        if(!flagaBlad)    flagaBlad = true;
        else    cout << "Blad! Obie liczby musza byc ujemne!\n";
        
        cout << "Podaj dwie liczby ujemne: ";
        cin >> a >> b;
         
    }while(a>0 || b>0);
    
    cout << "\nWynik mnozenia: " << a * b;
    
    return 0;
}
