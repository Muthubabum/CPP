#include <iostream>
using namespace std;
class Buses{
    public:
        string busno;
        void printbusno(){
            cout << "\nyour busno is " + busno;
        }
        void checkbusno(){
            if(busno == "51A"){
                cout <<  "\nTnager to Tambaram";
            }
            else if(busno == "M51"){
                cout << "\nMylapoor to Tambaram";
            }
            else if(busno == "5A"){
                cout << "\nTnager to Tambaram";
            }
            
            else{
                cout << "\ncheck your busno";
            }
        }
};
int main(){
     Buses tina, sona, yuna;
     tina.busno = "51A";
     sona.busno = "5A";
     yuna.busno = "M15";
     tina.printbusno();
     tina.checkbusno();
     sona.printbusno();
     sona.checkbusno();
     yuna.printbusno();
     yuna.checkbusno();
     
     cout << "\nExecuted";
     cout << "\nbuseswithroutename.cpp"
}

