#include <iostream>
using namespace std;

struct strDriverData
{
    short int age;
    bool Driverlicense;
};

void  DriverlicenseMenu(){
    cout<<"are you have Driver license\n";
    cout<<" 1 : yes"<<endl;
    cout<<" 0 : no"<<endl;
}

strDriverData ReadDriverData(){

    strDriverData driver;

    cout<<"Enter Driver Age : ";
    cin>>driver.age;
    DriverlicenseMenu();
    cin>>driver.Driverlicense;
    return driver;   
}
bool IsAccepted(strDriverData driver){
   return  (driver.age > 21 && driver.Driverlicense);
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