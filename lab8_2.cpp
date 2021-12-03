#include<iostream>
#include<string>
#include<sstream>
using namespace std;
   int ID(string id){
       string n3,n2,n1;
       n1 = id[0];
       n2 = id[1];
       n3 = n1+n2;
       stringstream  ID(n3);
       int IID;
       ID >> IID;
       IID = IID-12;
       return IID;
    }
int main(){
    string name,mov,day,last;
    string id;
    cout << "Fahsia: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    cout << "I think you may be GEAR " << ID(id) << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,mov);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << mov << " with you.\n";
    cout << name << ": ";
    getline(cin,last);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
    return 0;
}

