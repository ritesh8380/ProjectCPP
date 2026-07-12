#include <iostream>
int main(){
    int x;
    int y{};
    int z={};
    std::cout<<"--------------------------------------------------------------------\n";
    std::cout<<"Enter the values of x y and z with spaces please ! :";
    std::cin>>x>>y>>z;
    std::cout<<"--------------------------------------------------------------------\n";

    std::cout<<"This is value of x ["<<x<<"] This is value of y ["<<y<<"] and This is value of z ["<<z<<"]\n";
    std::cout<<"--------------------------------------------------------------------\n";

    return 0;
}

//input Buffer: if entered 4 then 4\n will be stored in the input buffer and 4 will be extracted and \n will be left as input buffer for another input operation

/*input types and there outputs :
1.input as 123abc -> x=123, y=0, z=0 this will exclude the invalid input of abc 
2.input as abc123 -> x=0, y=0, z=0 this will exclude the invalid input of abc123
3.input as 4.2 -> x=4, y=0, z=0 this will exclude the invalid input of .2 which is invalid
4.input as 4 (double space) 5 (double space) 6 -> x=4, y=5, z=6 this will exclude the whitespaces and extract the valid inputs.
5.input as -4 (double space) -5 (double space) -6 -> x=-4, y=-5, z=-6 this will exclude the whitespaces and extract the valid inputs.
6.input as 4.2 (double space) 5.3 (double space) 6.4 -> x=4, y=5, z=6 this will exclude the extract the valid inputs and exclude the invalid inputs of .2, .3, .4 also the whitespaces.
7.if input is 5b6(space)7c8(space)9d10 -> x=5, y=7, z=9 this will exclude the invalid inputs of b6, c8, d10 and extract the valid inputs of 5, 7, 9 and also exclude the whitespaces.
*/