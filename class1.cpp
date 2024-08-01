#include <iostream>
#include<string>
using namespace std;
class Teacher
{
    private:
    double salary;
    public:
    string name;
    string subject;
    string dept;
    void changeDept(string newDept)
    {
        dept=newDept;
    }
    void setdata(double s){
      salary=s;
    }
   void getdata()
   {
       cout<<salary;
   }
   Teacher(string Name,string Dept,string Subject,double Salary)
   {
       //cout<<"constructor is calling"<<endl;
    name=Name;
    dept=Dept;
    subject=Subject;
    salary=Salary;
   }
    void getinfo()
    {
        cout<<"Teacher name:"<<name<<endl;
        cout<<"Tecaher subject:"<<subject<<endl;  
        cout<<"Department:"<<dept<<endl;
        cout<<"Salary:"<<salary<<endl;
    }};
int main() {
    Teacher t1("sanjam","CSE","C++",150000);
    //Teacher t1;
    //t1.name="Sarang";
    //t1.subject="Math";
    //t1.changeDept("CSE");
    //t1.setdata(1500000);
    //t1.getdata();
    // t1.getinfo();
Teacher t2(t1);
t2.getinfo();
    return 0;
}
