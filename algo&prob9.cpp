#include <iostream>
using namespace std;
struct strNumbers{
    float number1,number2,number3;
};
strNumbers ReadNumbers(){
    strNumbers numbers;
    cout<<"enter number one:";
    cin>>numbers.number1;
    cout<<"enter number two:";
    cin>>numbers.number2;
    cout<<"enter number three:";
    cin>>numbers.number3;
    return numbers;
}
float SumThreeNumbers(strNumbers numbers){
    return numbers.number1 + numbers.number2 + numbers.number3;
}
void PrintResult(strNumbers numbers){

    cout<<"the sum of three numbers "<< numbers.number1<<" ,"<< numbers.number2<<" ,"<< numbers.number3<<" is : "<<SumThreeNumbers(numbers)<<endl;
}
int main(){
    
    PrintResult(ReadNumbers());
    return 0;
}