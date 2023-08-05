#include <iostream>
using namespace std;
float ReadNumber(string Message){

    float Number = 0;
    cout<<Message<<endl;
    cin >>Number;
    return Number;

}
void CheckPassword(){
    int password,
    counter=0;  
    do
    {
        if(counter == 3){
        cout <<"wrong pin"<<endl;
        break;
        }
         password = ReadNumber("enter password : ");
         counter++;
    } while (password != 1234);
    cout <<"your balance is 7500"<<endl;
    
}
int main(){
    CheckPassword();
    return 0;
}