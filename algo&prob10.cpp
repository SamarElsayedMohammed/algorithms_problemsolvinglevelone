#include <iostream>
using namespace std;
struct strNumbers{
    float number1,number2,number3;
};
void ReadNumbers(strNumbers &numbers){
    cout<<"enter number one:";
    cin>>numbers.number1;
    cout<<"enter number two:";
    cin>>numbers.number2;
    cout<<"enter number three:";
    cin>>numbers.number3;
}
float SumThreeNumbers(strNumbers numbers){
    return numbers.number1 + numbers.number2 + numbers.number3;
}
float Average(strNumbers numbers){
    return SumThreeNumbers(numbers)/3;
}
void PrintResult(strNumbers numbers){

    cout<<"the average of three numbers "<< numbers.number1<<" ,"<< numbers.number2<<" ,"<< numbers.number3<<" is : "<<Average(numbers)<<endl;

}
int main(){
    strNumbers numbers;
    ReadNumbers(numbers);
    PrintResult(numbers);
    return 0;
}