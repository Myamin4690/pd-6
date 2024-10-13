#include<iostream>
#include<string>
using namespace std;
float CalculateAverage(float marksEng,float marksMath,float marksChem,float marksSocial,float marksBio ,string name);
string CalculateGrade(float average);
int main()
{   float marksEng, marksMath, marksChem, marksSocial, marksBio;
string name;
cout<<"Enter sudent name:";
cin>>name;
cout<<"Enter marks for English:";
cin>>marksEng;
cout<<"Enter marks for Maths:";
cin>>marksMath;
cout<<"Enter marks for Chemistry:";
cin>>marksChem;
cout<<"Enter marks for Social sciences:";
cin>>marksSocial;
cout<<"Enter marks for Biology:";
cin>>marksBio;
cout<<"Student Name:"<<name;
 float average = CalculateAverage(marksEng,marksMath,marksChem,marksSocial, marksBio,name);
 string grade=CalculateGrade( average);
 cout<<"Percentage:"<<average<<"%"<<endl;
 cout<<"Grade:"<<grade;
}
float CalculateAverage(float marksEng,float marksMath,float marksChem,float marksSocial,float marksBio,string name)
{ 
    float t_marks= marksEng+ marksMath+ marksChem+ marksSocial+ marksBio;
    float average=t_marks/5.0;
    return average;
}
string CalculateGrade(float average)
{   string grade;
    if (average<= 100 && average>=90) {
        grade = "A+";
    } else if (average <= 90 && average>=80) {
        grade = "A";
    } else if (average <= 80 && average>=70) {
        grade = "B+";
    } else if (average <= 70 && average>=60) {
        grade = "B";
    } else if (average <= 50 && average>=50) {
        grade = "C";
    } else if (average <= 50 && average>=40) {
        grade = "D";
    } else {
        grade = "F";
    }

    return grade;
}