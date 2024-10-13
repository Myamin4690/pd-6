#include<iostream>
#include<string>
using namespace std;
float  calculateHotelPrices(string month,int days);
float  calculateapartment( string month, int days);
int main()
{ string month;
int days;
cout<<"Enter the month(May,June,August,September,October):";
cin>>month;
cout<<"Enter the number of days:";
cin>>days;
 float studio_p=calculateHotelPrices(month,days);
 float apartment_p=calculateapartment(month,days);
 cout<<"Apartment:$"<<apartment_p<<endl;
 cout<<"Studio:$"<<studio_p;
}
 float calculateHotelPrices(string month,int days)
 { 
        float studio_p,apartment_p; 
    if(month=="may" || month=="october")
    {studio_p=50*days;
    apartment_p=65*days;
    }
    else if(month=="may" || month=="october" && days>=7)
    {studio_p=50*days-(0.05*(50*days));
    apartment_p=65*days-(0.10*(65*days));
    }
    else if(month=="may" || month=="october" && days>=14)
    {studio_p=50*days-(0.30*50*days);
    apartment_p=65*days-(65*days*0.10);
    }
     else if(month=="june" || month=="september")
    {studio_p=75.20*days;
    apartment_p=68.70*days;
    }
    else if(month=="june" || month=="september" && days>=14)
    {studio_p=75.20*days-(0.20*(75.20*days));
    apartment_p=68.70*days-((68.70*days)*0.10);
    }
   else if(month=="july" || month=="august")
    {studio_p=76*days;
    apartment_p=77*days;}
    return studio_p;  
 }
    float calculateapartment(string month, int days)
    {
         float studio_p,apartment_p; 
    if(month=="may" || month=="october")
    {studio_p=50*days;
    apartment_p=65*days;
    }
    else if(month=="may" || month=="october" && days>=7)
    {studio_p=50*days-(0.05*(50*days));
    apartment_p=65*days-(0.10*(65*days));
    }
    else if(month=="may" || month=="october" && days>=14)
    {studio_p=50*days-(0.30*(50*days));
    apartment_p=65*days-((65*days)*0.10);
    }
     else if(month=="june" || month=="september")
    {studio_p=75.20*days;
    apartment_p=68.70*days;
    }
    else if(month=="june" || month=="september" && days>=14)
    {studio_p=75.20*days-(0.20*(75.20*days));
    apartment_p=68.70*days-((68.70*days)*0.10);
    }
   else if(month=="july" || month=="august")
    {studio_p=76*days;
    apartment_p=77*days;}
   return apartment_p;
 }