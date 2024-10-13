#include<iostream>
#include<string>
using namespace std;
string findZodiacSign(int day,string month);
int main()
{
  int day;
  string month;
  cout<<"Enter the day of birth:";
  cin>>day;
  cout<<"Enter the month fo birth(e.g.,January,February):";
  cin>>month;
 string sign= findZodiacSign(day,month);
 cout<<"Zodiac Sign:"<<sign;
}
string findZodiacSign(int day,string month)
{ 
    string sign;
  if((month=="March") && ( day>=21 && day<=30) || (month=="April") && ( day>=1 && day<=19))
   sign="Aries";
  if((month=="April") && ( day>=20 && day<=30) || (month=="May") && ( day>=1 && day<=20))
   sign="Taurus";
  if((month=="May") && ( day>=21 && day<=30) || (month=="June") && ( day>=1 && day<=20))
   sign="Gemini";
  if((month=="June") && ( day>=21 && day<=30) || (month=="July") && ( day>=1 && day<=22))
   sign="Cancer";
  if((month=="July") && ( day>=23 && day<=30) || (month=="August") && ( day>=1 && day<=22))
   sign="Leo";
  if((month=="August") && ( day>=23 && day<=30) || (month=="September") && ( day>=1 && day<=22))
   sign="Virgo";
  if((month=="September") && ( day>=23 && day<=30) || (month=="October") && ( day>=1 && day<=22))
   sign="Libra";
  if((month=="October") && ( day>=23 && day<=30) || (month=="November") && ( day>=1 && day<=21))
   sign="Scorpio";
  if((month=="November") && ( day>=22 && day<=30) || (month=="December") && ( day>=1 && day<=21))
   sign="Sagittarius";
  if((month=="December") && ( day>=22 && day<=30) || (month=="January") && ( day>=1 && day<=19))
   sign="Capricorn";
  if((month=="January") && ( day>=20 && day<=30) || (month=="February") && ( day>=1 && day<=18))
   sign="Aquarius";
  return sign;
}











