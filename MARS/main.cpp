#include <bits/stdc++.h>
using namespace std;
struct student
{
    string student_name;
    int mark1;
    int mark2;
};
int main()
{
    int p=50;
    vector<struct student> s={{"ARUN",98,99},{"ATHARVA",46,69},{"DEV",89,39}};//vector with custom datatype array
    for_each(s.begin(),s.end(),[p](struct student x){  //lambda function
        cout <<"STUDENT NAME " << x.student_name <<"\n";
        cout <<"COMPUTER SCIENCE MARK " << x.mark1 ;
        if(x.mark1>p)
        {
            cout <<" GOOD\n";
        }
        else
        {
            cout <<" POOR\n";
        }
        cout <<"DISCRETE STRUCTURES MARK " << x.mark2 ;
        if(x.mark2>p)
        {
            cout <<" GOOD\n";
        }
        else
        {
            cout <<" POOR\n";
        }
        cout <<"\n";
    });
    return 0;
}

