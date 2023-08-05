#include <iostream>
using namespace std;

void ReadAge(short int &Age){
    cout <<"Enter your Age : ";
    cin>>Age;
}
bool ValidateAge(short int Age){

    return (Age >= 18 && Age <= 45);
}
bool ValidateNumberInRange( int Age,int From ,int To ){
    return (Age >= From && Age <= To);
}
void PrintResult(bool Result){

    if(Result)
        {cout<< "Valid Age\n";}
    else
        {cout<< "inValid Age\n";}
}
int main(){
   
    short int Age;
     ReadAge(Age);
    PrintResult(ValidateAge(Age));
    return 0;
}