#include<iostream>
using namespace std;

class Date{
public:
    Date(int xY=0,int xM=0,int xD=0){
        year=xY;
        month=xM;
        day=xD;
    }
    void getDate(){
        cin>>year>>month>>day;
    }

    Date(Date &d);
    void showDate(){
        cout<<year<<" / "<<month<<" / "<<day;
    }
private:
    int year,month,day;
};

Date::Date(Date &d){
    year=d.year;
    month=d.month;
    day=d.day;
}

class People{
public:
    People();
    void showPeople();
private:
    int number;
    string name;
    string sex;
    Date birthday;
    long id;
};

People::People():birthday(0,0,0){
    cout<<"Please enter the following information:"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"number:"; cin>>number;
    cout<<"name:"; cin>>name;
    cout<<"sex:"; cin>>sex;
    Date xbirthday;
    cout<<"birthday:"; xbirthday.getDate();
    cout<<"id:"; cin>>id;
    cout<<endl<<endl;
    birthday=xbirthday;
}

void People::showPeople(){
    int i;
    cout<<"Now output the information"<<endl;
    cout<<"--------------------------"<<endl;
    for(i=0;i<300000000;i++){;}
    cout<<"\a";
    cout<<"number:"<<number<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"birthday:";
    birthday.showDate();
    cout<<endl;
    cout<<"sex:"<<sex<<endl;
    cout<<"id:"<<id<<endl<<endl;
}

int main(){
    People people1;
    people1.showPeople();
    return 0;
}
