// Number double and triple simple logic question
// (for memory efficinecy you can use only one varriable and cout them with input*2 and input*3)

#include <iostream>
int main(){
    int num2,num3,input;
    std::cout<<"Enter the input :";
    std::cin>>input;
    num2=input*2;
    num3=input*3;
    std::cout<<"The double of "<<input<<" is "<<num2<<" and triple is "<<num3<<"\n";
    return 0;
}

// Output: The double of 4 is 8 and triple is 12;(if input = 4)