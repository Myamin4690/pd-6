#include<iostream>
#include<string>
using namespace std;
float company(char code ,char time,int numbers);
int main()
{  char code,time;
   int numbers;
    cout<<"Enter the service code(R/r for regular,P/p for premium):";
    cin>>code;
    cout<<"Eneter the numbers of minutes used:";
    cin>>numbers;
     cout<<"Enter time of the call(D/d for day,N/n for night): ";
     cin>>time;
     cout<<"Service type:"<<code<<endl;
     cout<<"minutes:"<<numbers<<endl;
    float amount=company(code,time,numbers);
     cout<<"Amount is :$"<<amount<<endl;
}
    float company(char code ,char time,int numbers)
{
      float amount;
  if((code=='r' || code=='R') &&(numbers<=50))
  {amount=10.0;}
  else if((code=='r' || code=='R') &&(numbers>50))
  {amount=10.0+((numbers-50)*0.20);}
  else if((code=='p' || code=='P') &&(time=='D' || time=='d')&&(numbers<=75))
  {amount=25.00;}
  else if((code=='p'|| code=='P') &&(time=='D' || time=='d')&&(numbers<75))
  {amount=25.00+((numbers-75)*0.10);}
  else if((code=='p' || code=='P') &&(time=='N' || time=='n')&&(numbers<=100))
  {amount=25.00;}
  else((code=='p' || code=='P') &&(time=='N' || time=='n') && (numbers>100));
  {amount=25.00+((numbers-100)*0.05);}
  return amount;
}
