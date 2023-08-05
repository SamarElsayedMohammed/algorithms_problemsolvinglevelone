#include <iostream>
using namespace std;

string ReadName(){
    string name;
    cout <<"Enter your name plase;"<<endl;
    getline(cin,name);
    return name;
}

void PrintName(string name){
    cout<<"your name is : "<<name<<endl;
}

int main(){
    PrintName(ReadName());  
    return 0;
}