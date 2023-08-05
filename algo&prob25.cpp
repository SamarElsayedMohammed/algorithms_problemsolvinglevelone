#include <iostream>
using namespace std;

void ReadAge(short int &Age){
    cout <<"Enter your Age : ";
    cin>>Age;
}
bool ValidateAge(short int Age){

    return (Age >= 18 && Age <= 45);
}
void PrintResult(bool Result){

    if(Result)
        {cout<< "Valid Age\n";}
    else
        {cout<< "inValid Age\n";}
}
bool ReadUntileAgeBetween(short int Age){
//     do
//     {
//          ReadAge(Age);
//     } while (!ValidateAge(Age));
//     return Age;

     while(!ValidateAge(Age)){
        PrintResult(ValidateAge(Age));
        ReadAge(Age);
     }
     return true;
}

int main(){
   
    short int Age;
    ReadAge(Age);
    PrintResult(ReadUntileAgeBetween(Age));
    return 0;
}