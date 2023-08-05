#include <iostream>
#include<string>
using namespace std;

float ReadNumber(string Message){
    float Number = 0;
    cout<<Message<<endl;
    cin >>Number;
    return Number;

}
float SummUntill99(){

    // int Num=0,sum=0;
    // while (Num != -99)
    // {
    //     sum+=Num;
    //     Num = ReadNumber();       
    // }
    // return sum;
      int Num=0,sum=0,Counter = 1;
    do
    {
        Num = ReadNumber("Please enter Number "+ to_string(Counter)); 

        if (Num == -99)
        {
           break;
        }
        sum+=Num;
        Counter ++;
        
    } while (Num != -99);
    
    return sum;
    
}
int main(){

    cout <<SummUntill99()<<endl;
    return 0;
}