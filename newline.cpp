#include <iostream>
int main(){
    
    std::cout<<"--------------------------------\n";
    
    std::cout<<"And this is by endl method"<< std::endl;
    std::cout<<"And this is by endl method"<< std::endl;
    

    std::cout<<"--------------------------------\n";
    
    std::cout<<"Hi(this is new line using \\n)\n";
    std::cout<<"Hi(this is new line using \\n)\n";
    
    std::cout<<"--------------------------------\n";
    return 0;
}

/*newline : \n works as a newline character it puts the cursor to the next line in c++
and std::endl also does the same thing but it also flushes the output buffer(slow process of execution) as it creates the output buffer and flushes it whether newline just puts the cursor to the next line*/

/*here to \n is a newline character which does not flush the output buffer (so this is like a delivery boy waits for complete bag(memory space) full of orders then delivers it)*/

/*at the other hand, std::endl flushes the output buffer (so this is like a delivery boy delivers the order as soon as it is received) means delivers each orders as soon as it is received dont wait for the bag(memory space) to get full*/