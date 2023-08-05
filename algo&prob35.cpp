#include <iostream>
using namespace std;
struct stPiggyBankContent{
    int Pennies,Nickels,Dimes,Quarters,Dollars;
};
stPiggyBankContent ReadPiggyBankContent(){

    stPiggyBankContent PiggyBankContent;
    cout<<"Enter a totla Pennies : ";
    cin>>PiggyBankContent.Pennies;
    cout<<"Enter a totla Nickels : ";
    cin>>PiggyBankContent.Nickels;
    cout<<"Enter a totla Dimes : ";
    cin>>PiggyBankContent.Dimes;
    cout<<"Enter a totla Quarters : ";
    cin>>PiggyBankContent.Quarters;
    cout<<"Enter a totla Dollars : ";
    cin>>PiggyBankContent.Dollars;
    return PiggyBankContent;

}

int calculateTotalPennies(stPiggyBankContent PiggyBankContent){
  int   TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;
  return TotalPennies;

}
int main(){
    int TotalPennies =calculateTotalPennies(ReadPiggyBankContent());
    cout<<"total pennies : "<<TotalPennies<<endl;
    cout<<"total Dolars : "<<(float)TotalPennies/100<<endl;

    return 0;
}