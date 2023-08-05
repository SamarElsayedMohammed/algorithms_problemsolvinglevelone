#include <iostream>
using namespace std;
struct strPowerParms{
    int Num,
    Power;
};
strPowerParms ReadNumber(){
    strPowerParms params;
    cout<<"Enter Number : ";
    cin>>params.Num;
    cout<<"Enter Power : ";
    cin>>params.Power;
    return params;
}
int Power(strPowerParms params){
    if(params.Num == 0){
        return 1;
    }
    int result =1;
    for(int i =1;i<= params.Power;i++){
        result*=params.Num;
    }
    return result;
}
void PrintResult(int result){
    cout<<"result is : "<<result<<endl;
}
int main(){
    PrintResult(Power(ReadNumber()));
    return 0;
}