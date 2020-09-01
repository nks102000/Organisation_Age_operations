/*WAP using appropriate constructors and destructors to represent the faculties working in an organization with the
following specification:
->Private members:
Name 
Salary
Date of Birth
Employee ID
Designation
Address
Public members function:
ToAssign initial values
Withdraw an amount after checking balance
Deposit salary 
Display Name, Designation and Age*/
#include<iostream>
#include<string.h>
using namespace std;


class organization{
    char *name;
    int salary;
    char *dob;
    int id;
    char *designation;
    char *address;
    public:
        organization(char *n,char *d,char * des,char *a,int s,int i){
            name=new char[strlen(n)];
            name=n;
            dob=new char[strlen(d)];
            dob=d;
            designation=new char[strlen(des)];
            designation=des;
            address=new char[strlen(a)];
            address=a;
            salary=s;
            id=i;
        }
        void withdraw(int amt){
            if(amt>salary){
                cout<<"Amount greater than salary"<<endl;
            }
            else{
                cout<<amt<<" is Withdrawn."<<endl;
                salary=salary - amt;
            }
        }
        void deposit(int amt){
            salary=salary+amt;
            cout<<amt<<" is Deposited to salary"<<endl;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Designation: "<<designation<<endl;
            int size;
            size=strlen(dob);
            char *yr= new char[4];
            int j=0;
            for(int i=size-4;i<size;i++){
                yr[j]=dob[i];
                j++;
            }
            int myint1 = stoi(yr);
            cout<<"Age: "<<2020-myint1<<endl;

        }
};

int main(){
    organization o("XYZ","11-10-2000","BOSS","GORAKHPUR",100000,1);
    o.deposit(20000);
    o.withdraw(10000);
    o.display();
    return 0;
}