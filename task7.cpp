#include<iostream>
#include<string>
using namespace std;
string checkStudentStatus(int exam_hour, int exam_minutes,int student_hour, int student_minutes);
int main()
{ int exam_hour, exam_minutes,student_hour, student_minutes;
cout<<"Enter Exam starting time(hours):";
cin>>exam_hour;
cout<<"Enter Exam starting time(minutes):";
cin>>exam_minutes;
cout<<"Enter student hour of arrival:";
cin>>student_hour;
cout<<"Enter student minutes of arrival:";
cin>>student_minutes;
 string status=checkStudentStatus(exam_hour,exam_minutes,student_hour,student_minutes);
 cout<<"status:"<<status<<endl;
}
  string checkStudentStatus(int exam_hour, int exam_minutes,int student_hour, int student_minutes)
{ 
    string status;
    int diff1,diff2;
if(exam_hour==student_hour && exam_minutes==student_minutes )
{status=" On the time";
}
else if (exam_hour>student_hour && exam_minutes>=student_minutes)
{status=" Early";
diff1=(exam_hour)-(student_hour);
diff2=exam_minutes-student_minutes;
}
else if (exam_hour<student_hour && exam_minutes<=student_minutes)
{status="Late";
diff1=student_hour-exam_hour;
diff2=student_minutes-exam_minutes;}
cout<<diff1<<":"<<diff2<<" hours "<<status<<" the test"<<endl;
 return status;
}