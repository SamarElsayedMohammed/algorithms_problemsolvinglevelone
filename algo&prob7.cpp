#include <iostream>
using namespace std;
    int ReadNumber(){

    int number=0;

    cout <<"enter number please: ";
    cin>>number;
    return number;
    }
    float CalculateHalfNumber(float number){
        return number/2;
    }
    void PrintResult(float number){
        string result = "half of number " + to_string(number) +" is " + to_string(CalculateHalfNumber(number));
        cout<<result<<endl;
        // cout <<"half of number "<<number <<" is : "<<CalculateHalfNumber(number)<<endl;
    }

int main(){
    
    PrintResult(ReadNumber());
    return 0;
}