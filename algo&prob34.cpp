#include<iostream>
using namespace std;
float ReadCommissionValue(){
    float commission;
    cout<<"Enter commission value : ";
    cin>>commission;
    return commission;
}
float CommissionResult(int commission){
    if(commission ==1000000 ){
        return 0.01 ;
    }else if(commission < 1000000 && commission >= 500000 ){
        return 0.02;
    }else if(commission <500000 && commission >=100000){
        return 0.03;
    }else if(commission < 100000 && commission >= 50000){
        return 0.05;
    }else {
        return 0;
    }
}
float CalculateCommission(int commission ){
    float totalCommission = commission * CommissionResult(commission);
    return totalCommission;
}
int main(){ 
    float commission =ReadCommissionValue();
    cout<< "your commission persentage is : "<<CommissionResult(commission)<<endl;
    cout<< "your commission is : "<<CalculateCommission(commission)<<endl;
    return 0;
}