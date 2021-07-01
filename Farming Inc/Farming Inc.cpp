#include <iostream>
using namespace std;
//Fredrik was here
//Creates the class Tractors and what it should contain 
class Tractors {
public:
    string Name;
    string Tyres;
    bool Front_weight;
    bool Availability;
    bool Gps_puck;
};


int Harva(Tractors temp) {
    int time_cost = 0;
    if (temp.Availability == true && temp.Gps_puck == true) {

        if (temp.Tyres == "small") {
            time_cost = time_cost + 10;
            temp.Tyres = "large";
        };
        if (temp.Front_weight == false) {
            time_cost = time_cost + 10;
            temp.Front_weight = true;
        };
        return time_cost;
    }
    else {
        return -1;
    };
}


Tractors Create_Tractor(string Name, string Tyres, bool Front_weight, bool Availability, bool Gps_puck) {
    Tractors temp;
    temp.Name = Name;
    temp.Tyres = Tyres;
    temp.Front_weight = Front_weight;
    temp.Availability = Availability;
    temp.Gps_puck = Gps_puck;
    return temp;
};

int main()
{
    // Create tractors and designate attributes
    Tractors John_Deere = Create_Tractor("John Deere", "large", false, true, true);
    Tractors Valtra = Create_Tractor("Valtra", "small", true, true, false);
    // Ask client to choose activity and decide which tractor is the best option
    int option;
    cout << "Options" << "\n" << "1. Harrow" << "\n" << "2. Plow" << "\n" << "3.Sow";
    cout << "\n" << "Please enter activity:";
    cin >> option;

    int Time_cost_JD;
    int Time_cost_Valtra;


    switch (option) {
    case 1:
         Time_cost_JD = Harva(John_Deere);
        if (Time_cost_JD == -1) {
            cout << "\n" << "John Deere unavailable";
        }
        else {
            cout << "\n" << "John Deere " << Time_cost_JD;
        };

        Time_cost_Valtra = Harva(Valtra);
        if (Time_cost_Valtra == -1) {
            cout << "\n" << "Valtra unavailable";
        }
        else {
            cout << "\n" << "Valtra" << Time_cost_Valtra;
        };
 
         break;

    case 2:


        break;

    case 3:

        break;

    }

    
   
}