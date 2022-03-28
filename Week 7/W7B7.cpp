#include<iostream>
#include<string>
using namespace std;
class NV{
    public :
     string name;
     int yearOfJoining;
     string address;
     NV (string _name, int _yearOfJoining, string _address){
         name = _name;
         yearOfJoining = _yearOfJoining;
         address = _address;
     }
     void xuat(){
         cout << name << "        " << yearOfJoining << "        " << address << endl;
     }
};

int main(){
    cout << "Name        Year of joining        Address" << endl;
    NV NV1("Robert",1994, "64C- WallsStreat");
    NV NV2("Sam", 2000,"68D-WallsStreat");
    NV NV3("John",1999, "26B-WallsStreat");
    NV1.xuat();
    NV2.xuat();
    NV3.xuat();
     
    return 0;
}