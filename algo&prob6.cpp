#include <iostream>
using namespace std;
enum OrdaringFullname {FirstLastName =0,LastFirstName=1};
struct strPersonName{
    string firstName
          ,lastName;
};
strPersonName ReadPersonName(){
    strPersonName person;
    cout <<"enter your first name : ";
    cin>>person.firstName;
    cout<<"enter your last name : ";
    cin>>person.lastName;
    return person;
}
string GetFullName(strPersonName person,bool reversed){
    string Fullname;
    if(reversed)
    Fullname = person.lastName +" "+ person.firstName ;
    else
    Fullname = person.firstName +" "+ person.lastName ;
    return Fullname;
//    return person.firstName +" "+ person.lastName ;
}
void PrintPersonName(string Fullname){
    cout <<"your full name : "<< Fullname <<endl;
}
int main(){
    PrintPersonName(GetFullName(ReadPersonName(),OrdaringFullname::LastFirstName));
    return 0;
}