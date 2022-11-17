#include <iostream>
using namespace std;
int main()
{
float a,b;
int opzione;
cin>> a >> b >> opzione ;
switch(opzione)
{
    case 0:
        opzione= ((a*b)/2);
        cout<< (a*b)/2<< endl;
        break;

    case 1:
        opzione= (a*a);
        cout<<(a*a)<<endl;
        break;

    case 2:
        opzione= (a*b);
        cout<<(a*b)<<endl;
        break;

    default:
        cout<< "opzione non valida" << endl;
}
    return 0;
}
