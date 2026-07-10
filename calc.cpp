#include <iostream>
using namespace std;

int main(){
    int Numof,i,input;
    int total = 0;
    //Here total = 0 is literal (literal is a fixed value that is assigned to a variable) in sourcecode//
    char choice;
    //Here choice is a object(memory space allocated to store the value of the variable) of char data type which is used to store the choice of the user//
    //IMP : Every variable in c++ is an object but not every object is a variable
    //Few objects are declared with name but few autodeclares example : int input = 5 and int input2 = 10; but if input+input2 is used then it will autodeclare the object input3 and store the value of input+input2 in it//



    cout<<"Lets add the numbers and play it well!" ; 
    //This "Lets add the numbers and play it well!" is a string literal which is a fixed value that assigned into the source code//
    //each and every entity in cpp is an object as they occupy memory space and have a name and a data type and can be used to store the value of the variable (object can be named as well as unnamed)//
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
/*Done : 1.objects 2.literals 3.operators(+,-,*,/) 4.Data types(int,float,double,char),5.Varriables(memory containers or space for storing the data), 6.identifiers(name of any class function or variable).*/