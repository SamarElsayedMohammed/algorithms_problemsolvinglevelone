#include <iostream>
using namespace std;

struct strDriverData
{
    short int age;
    bool Driverlicense;
    bool HasRecommendation;
};

void  DriverlicenseMenu(){
    cout<<"are you have Driver license\n";
    cout<<" 1 : yes"<<endl;
    cout<<" 0 : no"<<endl;
}
void  DriverRecommendationMenu(){
    cout<<"are you have Recommendation\n";
    cout<<" 1 : yes"<<endl;
    cout<<" 0 : no"<<endl;
}

strDriverData ReadDriverData(){

    strDriverData driver;

    cout<<"Enter Driver Age : ";
    cin>>driver.age;
    DriverlicenseMenu();
    cin>>driver.Driverlicense;
    DriverRecommendationMenu();
    cin>>driver.HasRecommendation;
    return driver;   
}
bool IsAccepted(strDriverData driver){
    if(driver.HasRecommendation){
        return true;
    }else{
        return  (driver.age > 21 && driver.Driverlicense);
    }
   
}
void printResult(strDriverData driver){
    if (IsAccepted(driver)){
        cout<< "Hired \n";
    }else{
        cout<<  "Rejected \n";
    }
}

int main(){
printResult(ReadDriverData());
    return 0;
}