#include <iostream>
int main(){
     int a;  //standard initialization of variable a of int data type (No value)//        
     
     int b = 5;   //initialization of variable b of int data type with value 5 (literal is 5)//  
     
     int c (6);  
     //initialization of varriable c in parenthesis which means tuple initialization of variable c of int data type with value 6 (literal is 6) This is called direct initialization//
     
     int d {5};
     //initialization of variable d in curly braces which means set initialization of variable d of int data type with value 5 (literal is 5)//
     
     int e {};
        //initialization of variable e in curly braces which means set initialization of variable e of int data type with no value assigned to it (literal is empty) This has the value 0//
      
     int f ={};
     //initialization of variable f in curly braces which means set initialization of variable f of int data type with assigned value 0 (literal is empty) compiler reads it value as 0 not directly initialized to 0//   
     
     std::cout<< "value of a is :"<< a <<"\n";
     std::cout<< "value of b is :"<< b <<"\n";
     std::cout<< "value of c is :"<< c <<"\n";
     std::cout<< "value of d is :"<< d <<"\n";
     std::cout<< "value of e is :"<< e <<"\n";
     std::cout<< "value of f is :"<< f <<"\n";
     return 0;

     //if we try add multiple values in tuple() or set{} initialization then it will give error as it is not allowed to add multiple values in tuple() or set{} initialization//
}