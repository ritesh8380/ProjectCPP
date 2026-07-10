#include <iostream>
using namespace std;

int main(){
    int Numof,i,input;
    int total = 0;
    char choice;

    cout<<"Lets add the numbers and play it well!" ;
    choice='+';
    cout<<"\n";

    if (choice == '+'){
            cout<<"How many inputs you have to enter : ";
    cin >> Numof;

    for(i=1;i<=Numof;i++){
        cout << (i) <<" Enter your input "<<":"<<"\t";
        cin >> input;
        total+=input;
    };

    cout <<"-------------------------------------------"<<"\n";
    cout <<"The Total is : ";
    cout << total <<"\n";
    cout <<"-------------------------------------------"<<"\n";
    };

    return 0;
}
