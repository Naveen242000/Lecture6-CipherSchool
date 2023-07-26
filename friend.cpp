#include<bits/stdc++.h>
using namespace std;
class student{
string passcode;
friend class bestfriend;
protected;
int age;
public:
string name;
int id;
student(){
}
student(int id,string name, string passcode,int age)
{
this->name=name;
this->id=id;
this->passcode=passcode;
this->age=age;
}
void into(){
  cout<<"My name is"<<name<<" ,my id is"<<id<<"passcode is"<<passcode<<endl;
}
friend void hacker(student s);
};
void hacker(student s){
  cout<<s.passcode<<" "<<s.age<<endl;
}
class bestfriend{
public:
void sharingSecret(student s){
  cout<<s.passcode<<" "<<s.age<<endl;
}
};
