#include<iostream>
#include<string>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays,int hometownWeekends);
int main()
{  string yearType;
   int holidays, hometownWeekends;
 cout<<"Enter year type:";
 cin>>yearType;
 cout<<"Enter the number of holidays:";
 cin>>holidays;
 cout<<"Enter the number of weekends:";
 cin>>hometownWeekends;
  int totalGames=calculateVolleyballGames( yearType,holidays,hometownWeekends);
  cout<<"Total Games are:"<<totalGames;
}
int calculateVolleyballGames(string yearType, int holidays,int hometownWeekends)
{
 int sofiaGames = (48 - hometownWeekends) * 3 / 4;
    sofiaGames += holidays * 2 / 3;
    int hometownGames = hometownWeekends;

    int totalGames = sofiaGames + hometownGames;
    if (yearType == "leap") {
        totalGames =(totalGames * 1.15);
    }

    return totalGames;
}