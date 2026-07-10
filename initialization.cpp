#include <iostream>
int main(){
     int a;  //standard initialization of variable a of int data type//        
     
     int b = 5;   //initialization of variable b of int data type with value 5 (literal is 5)//  
     
     int c ( 6 );  
     //initialization of varriable c in parenthesis which means tuple initialization of variable c of int data type with value 6 (literal is 6)//
     
     int d {5};
     //initialization of variable d in curly braces which means set initialization of variable d of int data type with value 5 (literal is 5)//
     
     int e {};
        //initialization of variable e in curly braces which means set initialization of variable e of int data type with no value assigned to it (literal is empty)//
     
     std::cout<< "value of a is :"<< a <<"\n";
     std::cout<< "value of b is :"<< b <<"\n";
     std::cout<< "value of c is :"<< c <<"\n";
     std::cout<< "value of d is :"<< d <<"\n";
     std::cout<< "value of e is :"<< e <<"\n";
     return 0;

     //if we try add multiple values in tuple() or set{} initialization then it will give error as it is not allowed to add multiple values in tuple() or set{} initialization//
}