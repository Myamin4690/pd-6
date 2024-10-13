#include<iostream>
#include<string>
using namespace std;
float calculateFruitPrice(string fruit,string day,double quantity);
int main()
{ string fruit,day;
double quantity;
cout<<"Enter the fruit name:";
cin>>fruit;
cout<<"Enter the day of week(e.g.,Monday,Sunday):";
cin>>day;
cout<<"Enter the quantity:";
cin>>quantity;
 float price=calculateFruitPrice(fruit,day,quantity);
 cout<<"price is:"<<price;
}
float calculateFruitPrice(string fruit,string day,double quantity)
{  float price;
  if(fruit=="banana" && day=="monday" || day=="tuseday" || day=="wednesday" || day=="thursday" || day=="friday")
  price=quantity*2.50;
  { else if(fruit=="banana" && day=="saturday" || day=="sunday")  
  price=quantity*2.70;
   }

 else if(fruit=="apple" && day=="monday" || day=="tuseday" || day=="wednesday" || day=="thursday" || day=="friday")
 price=quantity*1.20;
{ if(fruit=="banana" && day=="saturday" || day=="sunday")  
  price=quantity*1.25;
   }

else if(fruit=="orange" && day=="monday" || day=="tuseday" || day=="wednesday" || day=="thursday" || day=="friday")
 price=quantity*0.85;
{  if(fruit=="banana" && day=="saturday" || day=="sunday")  
  price=quantity*0.90;
   }

else if(fruit=="grapefruit" && day=="monday" || day=="tuseday" || day=="wednesday" || day=="thursday" || day=="friday")
 price=quantity*1.45;
{if(fruit=="banana" && day=="saturday" || day=="sunday")  
  price=quantity*1.60;
   }

else if(fruit=="Kiwi" && day=="monday" || day=="tuseday" || day=="wednesday" || day=="thursday" || day=="friday")
 price=quantity*2.70;
 { if(fruit=="banana" && day=="saturday" || day=="sunday")  
  price=quantity*3.00;
   }

else if(fruit=="pineapple" && day=="monday" || day=="tuseday" || day=="wednesday" || day=="thursday" || day=="friday")
 price=quantity*5.50; 
{  if(fruit=="banana" && day=="saturday" || day=="sunday")  
  price=quantity*5.60;
   }

else (fruit=="grapes" && day=="monday" || day=="tuseday" || day=="wednesday" || day=="thursday" || day=="friday")
 price=quantity*1.20;
{  if(fruit=="banana" && day=="saturday" || day=="sunday")  
  price=quantity*4.20;
   }  
   return price;
}
