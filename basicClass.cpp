#include<iostream>
using namespace std;
class hotel{
    private:
    int Rno;
    string name;
    float tariff;
    int NOD;
    void CALC(){
        if(NOD*tariff>10000){
            cout<<"total Amount="<< 1.05*NOD*tariff;
        }
    }
    public:
    void checkin(){
        cout<<"Enter the room no.:";
        cin>>Rno;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the tariff:";
        cin>>tariff;
        cout<<"Enter the NOD:";
        cin>>NOD;
    }
    void checkout(){
        cout<<"Room no.:"<<Rno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Tariff:"<<tariff<<endl;
        cout<<"NOD:"<<NOD<<endl;
    }
    void display(){
        CALC();
    }
};
int main(){
    hotel h;
    h.checkin();
    h.checkout();
    h.display();
}