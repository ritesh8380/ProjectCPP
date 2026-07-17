#include <iostream>
void Ritesh(){
    std::cout<<"Ritesh is elder brother";
}
void Pritesh(){
    std::cout<<"Pritesh is younger brother\n";
}
void Brothers(){
   Ritesh();
   std::cout<<" and ";
   Pritesh();
}
int main(){
    Ritesh();
    std::cout<<"\n";
    Pritesh();
    std::cout<<"----------------------------------------------\n";
    Brothers();
    std::cout<<"----------------------------------------------\n";
    return 0;
}