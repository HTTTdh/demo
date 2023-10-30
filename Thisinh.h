#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include"person.h"
using namespace std;
class ThiSinh : public Person
{
private:
    string sbd;
    float to, li, ho;
    float sum;
    int so_nv;
    //string *nguyenvong = new string[so_nv];
public:
    string *nguyenvong = new string[10];
    ThiSinh();
    ThiSinh(string cccd, string name, Date date, string address, string gt, string sbd, float to, float li, float ho);
    void setsbd(string sbd);
    string getsbd();
    void setto(float to);
    float getto();
    void setli(float li);
    float getli();
    void sethoa(float hoa);
    float gethoa();
    void setso_nv(int so_nv);
    int getso_nv();
    //friend ostream& operator<<( ostream& out, vector<string> nguyenvong);
    float getsum();
    void input();
    void display();
    ~ThiSinh(){
        
    }
};

ThiSinh::ThiSinh() : Person()
{
    to = 0;
    sbd = "";
    li = 0;
    ho = 0;
}
ThiSinh::ThiSinh(string cccd, string name, Date date, string address, string gt, string sbd, float to, float li, float ho) : Person(cccd, name, date, address, gt), sbd(sbd), to(to), li(li), ho(ho){};
void ThiSinh::setsbd(string sbd)
{
    this->sbd = sbd;
}
string ThiSinh::getsbd()
{
    return sbd;
}
void ThiSinh::setto(float to)
{
    this->to = to;
}
float ThiSinh::getto()
{
    return to;
}
void ThiSinh::setli(float li)
{
    this->li = li;
}
float ThiSinh::getli()
{
    return li;
}
void ThiSinh::sethoa(float hoa)
{
    this->ho = hoa;
}
float ThiSinh::gethoa()
{
    return ho;
}
void ThiSinh::setso_nv(int so_nv){
    this->so_nv = so_nv;
}
int ThiSinh::getso_nv(){
    return so_nv;
}

//ostream& operator<<( ostream& out, vector<string> nguyenvong){
//    for (int i = 1; i <= nguyenvong.size(); i++)
//        out << nguyenvong[i] << ",";
//    return out;
//}
float ThiSinh::getsum(){
    return to+li+ho;
}
void ThiSinh::input()
{
    string ten_nguyenvong;
    for (int i = 0; i < 50; i++)
        cout << "-";
    cout << endl;
    nhapthongtin();
    fflush(stdin);
    cout << "Nhập số báo danh: ";
    getline(cin, sbd);
    cout << "Nhập điểm toán: ";
    cin >> to;
    cout << "Nhập điểm lý: ";
    cin >> li;
    cout << "Nhập điểm hóa: ";
    cin >> ho;
    cout << "Nhập số nguyện vọng : ";
    cin >> so_nv;
    for(int i = 1 ; i <= so_nv ; i++){
        cout << "Nhập nguyên vọng " << i << ": ";
        cin >> ten_nguyenvong;
        nguyenvong[i] = ten_nguyenvong;
        getline(cin,nguyenvong[i]);
    }
    for (int i = 0; i < 50; i++)
        cout << "-";
    cout << endl;
}
void ThiSinh::display()
{
    cout << "|";
    for (int i = 0; i < 153; i++)
        cout << "-";
    cout << "|" << endl;
    cout << "|" << getname() << setw(34 - getname().length()) << "|";
    cout << getcccd() << setw(20 - getcccd().length()) << "|";
    cout << setw(4) << getgt() << setw(4) << "|";
    cout << getdate().day << "/" << getdate().month << "/" << getdate().year << setw(19 - getdate().sizedate()) << "|";
    cout << getaddress() << setw(20 - getaddress().length()) << "|";
    cout << getsbd() << setw(16 - getsbd().length()) << "|";
    cout << setw(7) << getto() << setw(3) << "|";
    cout << setw(5) << getli() << setw(3) << "|";
    cout << setw(6) << gethoa() << setw(3) << "|";
    cout << setw(5) << to + li + ho << setw(5) << "|" << endl;
}

