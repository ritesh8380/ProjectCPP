#include <iostream> //This line is saying include the iostream library(standard library)//

int main(){ //this is the main function where the programme starts executing//
    
    std::cout<<"Hellow world!"<<"\n"; 
    
    //Here the cout is the standard output stream from the standared library iostream and the << is the insertion operator which is used to insert the data into the output stream//
    
    //(use namespace std; is used to avoid writing std:: before cout and cin as it already takes all the names from the std namespace)//
    
    //standard namespace becomes problem when we have multiple libraries with same function names and we use them in the same program for example  c++ libraries like <fstream> and <iomanip>//
    
    return 0;
    //This returns 0 to the operating system which indicates that the program has executed successfully//

    //we can still use return 0,1,2,3,4,5,6,7,8,9 but 0 is used to indicate that the program has executed successfully and any other number indicates that the program has failed to execute successfully even though it may have run without crashing but will give errors when run in a production environment (production environment means the environment where the program will be deployed for actual use example calculator if 0 means success but if any other then it means failure calculator stops)//
    
    //(This Returns not for IDE they are for operating system to know the status of the program execution)//
}