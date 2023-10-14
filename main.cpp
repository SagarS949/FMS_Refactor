#include <iostream>
#include <string.h>
#include <iomanip>
#include <windows.h>
#include <unistd.h>
#include <cctype>
#include <algorithm>
#include <regex>
#include<bits/stdc++.h>
#include <string>

using namespace std;

class Flight_Details;
class Passenger_Details;
class Ticket_Booking;
class Ticket_Cancellation;
class Routes;
class date;

class date
{
public:
    int day;
    int month;
    int year;
};
class Flight_Details
{
public:
    string Flight_Number;
    string Flight_Company;
    string Source;
    string Destination;
    string Flight_Type;

    date Date_Of_Journey;

    string Departure_Time;
    string Arrival_Time;
    string Duration;
    int Economy_Seats_Available;
    int Business_Seats_Available;
    int Economy_Cost;
    int Business_Cost;
};

void Database(vector<Flight_Details> &F1)
{
    Flight_Details F;
    
    F.Flight_Number="6E0234";
    F.Flight_Company="Indigo";
    F.Source="MUMBAI";
    F.Destination="DELHI";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 20;
    F.Date_Of_Journey.month = 11;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="08:35";
    F.Arrival_Time="10:55";
    F.Duration="2:20";
    F.Economy_Seats_Available = 23;
    F.Business_Seats_Available = 4;
    F.Economy_Cost = 24999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="AI1256";
    F.Flight_Company="Air India";
    F.Source="CHENNAI";
    F.Destination="BANGALORE";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 23;
    F.Date_Of_Journey.month = 3;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time,"13:35";
    F.Arrival_Time="15:00";
    F.Duration="1:25";
    F.Economy_Seats_Available = 36;
    F.Business_Seats_Available = 2;
    F.Economy_Cost = 21999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="G80993";
    F.Flight_Company="Go Air";
    F.Source="BANGALORE";
    F.Destination="DELHI";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 13;
    F.Date_Of_Journey.month = 6;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="23:35";
    F.Arrival_Time="02:15";
    F.Duration="2:40";
    F.Economy_Seats_Available = 56;
    F.Business_Seats_Available = 7;
    F.Economy_Cost = 26999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="AI9317";
    F.Flight_Company="Air India";
    F.Source="MUMBAI";
    F.Destination="CHENNAI";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 17;
    F.Date_Of_Journey.month = 12;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="12:00";
    F.Arrival_Time="13:25";
    F.Duration="1:25";
    F.Economy_Seats_Available = 12;
    F.Business_Seats_Available = 0;
    F.Economy_Cost = 22999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="AX0966";
    F.Flight_Company="Air India Express";
    F.Source="MUMBAI";
    F.Destination="BANGALORE";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 30;
    F.Date_Of_Journey.month = 9;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="16:45";
    F.Arrival_Time="18:05";
    F.Duration="1:20";
    F.Economy_Seats_Available = 39;
    F.Business_Seats_Available = 4;
    F.Economy_Cost = 27999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="SQ0598";
    F.Flight_Company="Singapore Airlines";
    F.Source="BANGALORE";
    F.Destination="SINGAPORE";
    F.Flight_Type="International";
    F.Date_Of_Journey.day = 23;
    F.Date_Of_Journey.month = 1;
    F.Date_Of_Journey.year = 2024;
    F.Departure_Time="12:45";
    F.Arrival_Time="18:55";
    F.Duration="6:10";
    F.Economy_Seats_Available = 72;
    F.Business_Seats_Available = 8;
    F.Economy_Cost = 54999;
    F.Business_Cost = F.Economy_Cost + 14000;

    F1.push_back(F);

    F.Flight_Number="QF4398";
    F.Flight_Company="Qantas";
    F.Source="DELHI";
    F.Destination="LONDON";
    F.Flight_Type="International";
    F.Date_Of_Journey.day = 5;
    F.Date_Of_Journey.month = 10;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="05:30";
    F.Arrival_Time="13:25";
    F.Duration="7:55";
    F.Economy_Seats_Available = 9;
    F.Business_Seats_Available = 2;
    F.Economy_Cost = 68999;
    F.Business_Cost = F.Economy_Cost + 14000;

    F1.push_back(F);

    F.Flight_Number="BA0919";
    F.Flight_Company="British Airways";
    F.Source="DELHI";
    F.Destination="LONDON";
    F.Flight_Type="International";
    F.Date_Of_Journey.day = 1;
    F.Date_Of_Journey.month = 11;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="06:55";
    F.Arrival_Time="14:30";
    F.Duration="7:35";
    F.Economy_Seats_Available = 32;
    F.Business_Seats_Available = 5;
    F.Economy_Cost = 46999;
    F.Business_Cost = F.Economy_Cost + 14000;

    F1.push_back(F);

    F.Flight_Number="BA0232";
    F.Flight_Company="British Airways";
    F.Source="MUMBAI";
    F.Destination="LONDON";
    F.Flight_Type="International";
    F.Date_Of_Journey.day = 23;
    F.Date_Of_Journey.month = 6;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="17:35";
    F.Arrival_Time="00:25";
    F.Duration="6:50";
    F.Economy_Seats_Available = 29;
    F.Business_Seats_Available = 3;
    F.Economy_Cost = 54999;
    F.Business_Cost = F.Economy_Cost + 14000;

    F1.push_back(F);

    // Reverse routes of existing flights

    F.Flight_Number="6E0432";
    F.Flight_Company="Indigo";
    F.Source="DELHI";
    F.Destination="MUMBAI";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 25;
    F.Date_Of_Journey.month = 11;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="11:45";
    F.Arrival_Time="14:05";
    F.Duration="2:20";
    F.Economy_Seats_Available = 20;
    F.Business_Seats_Available = 3;
    F.Economy_Cost = 25999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="AI6521";
    F.Flight_Company="Air India";
    F.Source="BANGALORE";
    F.Destination="CHENNAI";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 26;
    F.Date_Of_Journey.month = 3;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="09:15";
    F.Arrival_Time="10:40";
    F.Duration="1:25";
    F.Economy_Seats_Available = 35;
    F.Business_Seats_Available = 2;
    F.Economy_Cost = 22999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="G80934";
    F.Flight_Company="Go Air";
    F.Source="DELHI";
    F.Destination="BANGALORE";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 15;
    F.Date_Of_Journey.month = 6;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="18:20";
    F.Arrival_Time="21:00";
    F.Duration="2:40";
    F.Economy_Seats_Available = 55;
    F.Business_Seats_Available = 6;
    F.Economy_Cost = 27999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="AI7139";
    F.Flight_Company="Air India";
    F.Source="CHENNAI";
    F.Destination="MUMBAI";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 20;
    F.Date_Of_Journey.month = 12;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="16:00";
    F.Arrival_Time="17:25";
    F.Duration="1:25";
    F.Economy_Seats_Available = 11;
    F.Business_Seats_Available = 0;
    F.Economy_Cost = 22999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="AX6609";
    F.Flight_Company="Air India Express";
    F.Source="BANGALORE";
    F.Destination="MUMBAI";
    F.Flight_Type="Domestic";
    F.Date_Of_Journey.day = 9;
    F.Date_Of_Journey.month = 10;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="12:35";
    F.Arrival_Time="14:00";
    F.Duration="1:25";
    F.Economy_Seats_Available = 38;
    F.Business_Seats_Available = 4;
    F.Economy_Cost = 27999;
    F.Business_Cost = F.Economy_Cost + 7000;

    F1.push_back(F);

    F.Flight_Number="SQ8559";
    F.Flight_Company="Singapore Airlines";
    F.Source="SINGAPORE";
    F.Destination="BANGALORE";
    F.Flight_Type="International";
    F.Date_Of_Journey.day = 26;
    F.Date_Of_Journey.month = 1;
    F.Date_Of_Journey.year = 2024;
    F.Departure_Time="20:15";
    F.Arrival_Time="02:25";
    F.Duration="6:10";
    F.Economy_Seats_Available = 71;
    F.Business_Seats_Available = 8;
    F.Economy_Cost = 54999;
    F.Business_Cost = F.Economy_Cost + 14000;

    F1.push_back(F);

    F.Flight_Number="QF9834";
    F.Flight_Company="Qantas";
    F.Source="LONDON";
    F.Destination="DELHI";
    F.Flight_Type="International";
    F.Date_Of_Journey.day = 10;
    F.Date_Of_Journey.month = 10;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="14:45";
    F.Arrival_Time="22:40";
    F.Duration="7:55";
    F.Economy_Seats_Available = 10;
    F.Business_Seats_Available = 2;
    F.Economy_Cost = 68999;
    F.Business_Cost = F.Economy_Cost + 14000;

    F1.push_back(F);

    F.Flight_Number="BA9190";
    F.Flight_Company="British Airways";
    F.Source="LONDON";
    F.Destination="DELHI";
    F.Flight_Type="International";
    F.Date_Of_Journey.day = 7;
    F.Date_Of_Journey.month = 11;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="15:45";
    F.Arrival_Time="23:20";
    F.Duration="7:35";
    F.Economy_Seats_Available = 22;
    F.Business_Seats_Available = 3;
    F.Economy_Cost = 64999;
    F.Business_Cost = F.Economy_Cost + 14000;

    F1.push_back(F);

    F.Flight_Number="LH7994";
    F.Flight_Company="Lufthansa";
    F.Source="BERLIN";
    F.Destination="DELHI";
    F.Flight_Type="International";
    F.Date_Of_Journey.day = 15;
    F.Date_Of_Journey.month = 11;
    F.Date_Of_Journey.year = 2023;
    F.Departure_Time="18:20";
    F.Arrival_Time="04:45";
    F.Duration="10:25";
    F.Economy_Seats_Available = 15;
    F.Business_Seats_Available = 1;
    F.Economy_Cost = 70999;
    F.Business_Cost = F.Economy_Cost + 14000;

    F1.push_back(F);


}

class Passenger_Details
{
    string First_Name;
    string Last_Name;
    char Gender;
    int Age;
    string Passport_Number;
    int Seats;
public:
    int Get_Seats();
    void Set_Seats(int);
    void Get_Passenger_Details();
    int Check_Passport_Validity();
    virtual void Get_Journey_Details(vector<Flight_Details> &F) = 0;
};

bool ppnValidity(string &ppn)
{
    const regex pattern("^[A-PR-WY][1-9]" "\\d\\s?\\d{4}[1-9]$");//A1 3 1234 1 
    if(regex_match(ppn, pattern))
        return true;
    else    {
        return false;
    }
}

int Passenger_Details::Get_Seats()
{
    return Seats;
}

void Passenger_Details::Set_Seats(int seats)
{
    Seats=seats;
}
void Passenger_Details::Get_Passenger_Details()
{
    bool ppnv;
    std::cout << "Enter Passenger's First Name: ";
    cin >> First_Name;
    std::cout << "Enter Passenger's Last Name: ";
    cin >> Last_Name;

    std::cout << "Enter Passenger's Gender (M = Male, F = Female, R = Rather not say): ";
    cin >> Gender;
    Gender = toupper(Gender);
    if(Gender != 'M' && Gender != 'F' && Gender != 'R') {
        std::cout << "Invalid Input\n";
        Sleep(500);
        std::cout << "Enter Passenger's Gender (M = Male, F = Female, R = Rather not say): ";
        cin >> Gender;
        Gender = toupper(Gender);
    }
    std::cout << "Enter Passenger's Age: ";
    cin >> Age;
    std::cout << "Enter Passenger's Passport Number: ";
    cin >> Passport_Number;
    ppnv = ppnValidity(Passport_Number);
    if(!ppnv){
        do{
            std::cout << "Enter valid passport number\t " << endl;
            cin >> Passport_Number;
            ppnv = ppnValidity(Passport_Number);
        }while(!ppnv);
    }
    std::cout<<endl;
}

class Ticket_Booking:public Passenger_Details
{
public:
    string User_Source;
    string User_Destination;
    void Get_Journey_Details(vector<Flight_Details> &F) override;
    void Checking_Database_And_Final_Booking(vector<Flight_Details> F);
    void flight_choice_y(vector<Flight_Details> F,int,int&);
};

void Ticket_Booking::Get_Journey_Details(vector<Flight_Details> &F)
{
    Get_Passenger_Details();
    std::cout << "Enter your Source: ";
    cin >> User_Source;
    transform(User_Source.begin(), User_Source.end(), User_Source.begin(), ::toupper);
    std::cout << "Enter your Destination: ";
    cin >> User_Destination;
    transform(User_Destination.begin(), User_Destination.end(), User_Destination.begin(), ::toupper);
    std::cout << "Enter the number of Passengers: ";
    int seats;
    cin >> seats;
    Set_Seats(seats);
}
void Ticket_Booking::flight_choice_y(vector<Flight_Details> F,int i,int &flag)
{
    int seat_choice;
    while (true) {
        std::cout << "Would you like to book:\n1. Economy Class\n2. Business Class" << std::endl;
        cin >> seat_choice;

        if (seat_choice == 1) {
            if (F[i].Economy_Seats_Available < Get_Seats()) {
                char class_shifting;
                std::cout << "Sorry, seats not available." << std::endl;
                std::cout << "Would you like to go for Business Class? (press y for yes, and n for no)" << std::endl;
                cin >> class_shifting;

                if (class_shifting == 'y') {
                    // Go back to seat choice
                    continue;
                } else {
                    // Go back to flight choice
                    break;
                }
            }

            F[i].Economy_Seats_Available -= Get_Seats();
            std::cout << "Economy Class Seat booked in: " << F[i].Flight_Number << std::endl;
            std::cout << "Price: " << F[i].Economy_Cost * Get_Seats() << std::endl;
            flag=1;
            break; // Exit the loop after booking
        } else if (seat_choice == 2) {
            if (F[i].Business_Seats_Available < Get_Seats()) {
                char class_shifting;
                std::cout << "Sorry, seats not available." << std::endl;
                std::cout << "Would you like to go for Economy Class? (press y for yes, and n for no)" << std::endl;
                cin >> class_shifting;

                if (class_shifting == 'y') {
                    // Go back to seat choice
                    continue;
                } else {
                    // Go back to flight choice
                    break;
                }
            }

            F[i].Business_Seats_Available -= Get_Seats();
            std::cout << "Business Class Seat booked in: " << F[i].Flight_Number << std::endl;
            std::cout << "Price: " << F[i].Business_Cost * Get_Seats() << std::endl;
            flag=1;
            break; // Exit the loop after booking
        } else {
            std::cout << "Please input a valid choice" << std::endl;
        }
    }
}
void Ticket_Booking::Checking_Database_And_Final_Booking(vector<Flight_Details> F)
{
    int counter1=0;
    char flight_choice;
    for(int i=0;i<18;i++)
    {
        if((F[i].Source==User_Source)&&(F[i].Destination==User_Destination))
        {
            std::cout<<"The flight "<<F[i].Flight_Number<<" of the company "<<F[i].Flight_Company<<" exists between the locations "<<F[i].Source <<" and "<<F[i].Destination<<endl;
            std::cout<<"\n\n";
            Sleep(1500);
            std::cout<<"Details of the Flight: "<<F[i].Flight_Number<<endl;
            std::cout<<"Type of Flight: "<<F[i].Flight_Type<<endl;
            std::cout<<"Source: "<<F[i].Source<<endl;
            std::cout<<"Destination: "<<F[i].Destination<<endl;
            std::cout<<"Date: "<<F[i].Date_Of_Journey.day<<"/"<<F[i].Date_Of_Journey.month<<"/"<<F[i].Date_Of_Journey.year<<endl;
            std::cout<<"Departure Time: "<<F[i].Departure_Time<<endl;
            std::cout<<"Arrival at Destination: "<<F[i].Arrival_Time<<endl;
            std::cout<<"Duration of Flight: "<<F[i].Duration<<endl;
            std::cout<<"Economy Class Seats Currently Available: "<<F[i].Economy_Seats_Available<<endl;
            std::cout<<"Business Class Seats Currently Available: "<<F[i].Business_Seats_Available<<endl;
            std::cout<<"\n\n";
            int flag=0;
            while (flag!=1) {
                std::cout << "Would you like to book this flight? (press y/n for yes or no respectively)" << std::endl;
                cin >> flight_choice;
                flight_choice = tolower(flight_choice);

                if (flight_choice == 'y') {
                    flight_choice_y(F,i,flag);
                } else if (flight_choice == 'n') {
                    // User chose not to book this flight
                    continue;
                } else {
                    std::cout << "Please input a valid choice (y/n)" << std::endl;
                }
                if(flag==1){
                    break;
                }
            }
        }
        else
        {
            counter1++;
        }
    }
    if(counter1==18)
    {
        std::cout<<"\n\nSorry no flights available.\n\n"<<endl;
    }
}

class Routes:public Flight_Details
{
public:
    void Table_Printing(vector<Flight_Details> F);
    void Print_Database(Flight_Details &F);
};

void Routes::Print_Database(Flight_Details &F)
{
    std::cout<<setw(6)<<F.Flight_Number;
    std::cout<<setw(20)<<F.Flight_Company;
    std::cout<<setw(15)<<F.Flight_Type;
    std::cout<<setw(15)<<F.Source;
    std::cout<<setw(15)<<F.Destination;
    std::cout<<setw(15)<<F.Departure_Time;
    std::cout<<setw(15)<<F.Arrival_Time;
    std::cout<<setw(15)<<F.Duration;
}

void Routes::Table_Printing(vector<Flight_Details> F)
{
    std::cout<<setw(6)<<"Flight";
    std::cout<<setw(20)<<"Company";
    std::cout<<setw(15)<<"Type";
    std::cout<<setw(15)<<"Source";
    std::cout<<setw(15)<<"Destination";
    std::cout<<setw(15)<<"Departure";
    std::cout<<setw(15)<<"Arrival";
    std::cout<<setw(15)<<"Duration";
    std::cout<<endl;

    for(int i=0;i<18;i++)
    {
        Print_Database(F[i]);
        std::cout<<endl;
    }
}

class Ticket_Cancellation:public Passenger_Details
{
public:
    string Cancelled_Flight_Number;
    int Seat_Type;
    void Get_Journey_Details(vector<Flight_Details> &F) override;
    void Checking_Database_And_Cancelling_Ticket(vector<Flight_Details> F);
};

void Ticket_Cancellation::Get_Journey_Details(vector<Flight_Details> &F)
{
    Get_Passenger_Details();
    std::cout<<"Enter the Flight Number: ";
    cin>>Cancelled_Flight_Number;
    std::cout<<"Enter seat type (1 for 'Economy', 2 for 'Business'): ";
    cin>>Seat_Type;
    std::cout << "Enter the number of tickets to be cancelled: ";
    int seats;
    cin >> seats;
    Set_Seats(seats);
}

void Ticket_Cancellation::Checking_Database_And_Cancelling_Ticket(vector<Flight_Details> F)
{
    int counter2=0;
    for(int i=0;i<18;i++)
    {
        if(F[i].Flight_Number==Cancelled_Flight_Number)
        {
            switch(Seat_Type)
            {
            case 1:
                std::cout << "\n\n";
                Sleep(1500);
                std::cout<<"The Booking for Flight Number: "<<F[i].Flight_Number<<" has been cancelled"<<endl;
                F[i].Economy_Seats_Available+=Get_Seats();
                std::cout<<"Amount: "<<F[i].Economy_Cost*Get_Seats()-1000<<" has been refunded."<<endl;
                std::cout<<"A cancellation fee of 1000Rs has been applied."<<endl;
                break;
            case 2:
                std::cout<<"The Booking for Flight Number: "<<F[i].Flight_Number<<" has been cancelled"<<endl;
                F[i].Business_Seats_Available+=Get_Seats();
                std::cout<<"Amount: "<<F[i].Business_Cost*Get_Seats()-1000<<" has been refunded."<<endl;
                std::cout<<"A cancellation fee of 1000Rs has been applied."<<endl;
                break;
            default:
                std::cout<<"Please choose a valid option."<<endl;
            }
        }
        else
        {
            counter2++;
        }
    }
    if(counter2==18)
    {
        std::cout<<"The Flight Number entered is invalid"<<endl;
    }
}

int main()
{
    Passenger_Details *ptr;
    vector<Flight_Details> F;
    Routes R;
    Ticket_Booking TB;
    Ticket_Cancellation TC;

    Database(F);
    
    int Menu_Choice;
    while(true) {
        std::cout<<"--------------------------------------------MENU-----------------------------------------------------"<<endl;
        std::cout<<"What action would you like to take? \n1. Booking. \n2. Routes. \n3. Cancellation. \n4. Exit"<<endl;
        std::cout << "Enter choice: ";
        cin>>Menu_Choice;
        std::cout <<"\n\n" <<endl;
        switch(Menu_Choice)
        {
        case 1:
        std::cout << "--------------------------------------------BOOKING-----------------------------------------------------" << endl;
            ptr = &TB;
            ptr->Get_Journey_Details(F);
            std::cout << "\n";
            for(int i=0;i<(TB.Get_Seats()-1);i++)
            {
                Sleep(500);
                std::cout << "Enter new passenger's details\n";
                TB.Get_Passenger_Details();
                std::cout << "\n";
            }
            Sleep(2000);
            TB.Checking_Database_And_Final_Booking(F);
            break;
        case 2:
            std::cout << "--------------------------------------------------ROUTES-----------------------------------------------------------" << endl;
            R.Table_Printing(F);
            std::cout << "\n\nNow ";
            break;
        case 3:
            std::cout << "-----------------CANCELLATION-----------------" << endl;
            ptr = &TC;
            ptr->Get_Journey_Details(F);
            TC.Checking_Database_And_Cancelling_Ticket(F);
            break;
        case 4:
            std::cout << "Thank you for using our platform!!!";
            Sleep(2000);
            exit(0);
            break;
        default:
            std::cout<<"Invalid Input, please input a valid menu choice"<<endl;
        }
    std::cout << "\n\n";
    Sleep(5000);
    std::cout << "--------------------------------------------------NEW USER-----------------------------------------------------------" ;
    std::cout << "\n\n\n";
    }
    return 0;
}
