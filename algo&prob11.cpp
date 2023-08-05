#include <iostream>
using namespace std;
struct strNumbers{
    float number1,number2,number3;
};
enum enFailPass{Pass=0,Fail=1};
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
enFailPass CheckPassFail(float number){

    if(number >=50)
        return enFailPass::Pass;
    else
        return enFailPass::Fail;
}
void PrintResult(float  average){
cout <<"your average is : "<<average<<endl;
    if(CheckPassFail(average) == enFailPass::Pass)
        cout <<"your result is : passed "<<endl;
    else
        cout <<"your result is : failed "<<endl;

}
int main(){
    strNumbers numbers;
    ReadNumbers(numbers);
    PrintResult(Average(numbers));
    return 0;
}