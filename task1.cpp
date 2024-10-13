#include<iostream>
#include<string>
using namespace std;
string decideActivity( string temp,string humi);
int main()
{ string temp;
  string humi;
cout<<"Enter temperature(warm or cold):";
cin>>temp;
cout<<"Enter humidity (dry and humid):";
cin>>humi;
string a= string(decideActivity( temp,humi));
cout<<"Recommended activity: "<<a;
}
string decideActivity(string temp,string humi)
{ 
    string activity;
    if(temp=="warm" && humi=="dry" )
    activity="play tennis";
 if(temp=="warm" && humi=="humid" )
    activity="swim";
 if(temp=="cold" && humi=="dry" )
    activity="play basketball";
 if(temp=="cold" && humi=="humid" )
    activity="watch tv";
   return activity;
}