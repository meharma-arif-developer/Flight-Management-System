#include <iostream>
#include <string>
using namespace std;
string passenger[100],seatNumbers[100],passengerage[100],Cnic[100], flightnumber[100];
int passengerCount = 0;
// Function to take passenger data
void takePassengerData() 
{
	string name,cnic,flightNumber,seatNumber,age;
    cout<<"Enter Passenger Name: ";
    cin>>name;
    cout<<"Enter Passenger Age: ";
    cin>>age;
    cout<<"Enter Passenger CNIC: ";
    cin>>cnic;
    cout<<"Enter Flight Number: ";
    cin>>flightNumber;
    cout<<"Enter Seat Number: ";
    cin>>seatNumber;
    passenger[passengerCount] = name;
    seatNumbers[passengerCount]= seatNumber ;
    flightnumber[passengerCount] =flightNumber;
    Cnic[passengerCount] = cnic;
    passengerage[passengerCount] =age;
    passengerCount++;
    
}
// Function to display passenger data
void displayPassengerData() 
{
	for(int i=0;i<passengerCount;i++)
	{
	
    cout<<"\nPassenger Details:"<<endl;
    cout<<"Name: "<<passenger[i]<<endl;
    cout<<"Age: "<<passengerage[i]<<endl;
    cout<<"CNIC: "<<Cnic[i]<<endl;
    cout<<"Flight Number: "<<flightnumber[i]<<endl;
    cout<<"Seat Number: "<<seatNumbers[i]<<endl;
}
}

void reservedseat()
{
	string name, CNIC;
    int choice;

    cout << "Enter Passenger Name: ";
    cin >> name;
    cout << "Enter CNIC: ";
    cin >> CNIC;
    cout<<"\n\t\t\t**************************************\n";
    cout << "\t\t\t***       Seat Reservation Menu  ***\n";
    cout << "\t\t\t***        1. Reserve Seat       ***\n";
    cout << "\t\t\t***        2. Exit               ***\n";
    cout << "\t\t\t************************************\n";
    cout << "Enter choice: ";
    cin >> choice;
   switch (choice)
   {
   	case 1:
   	cout<<"your are succefully added!!";
   	break;
   	case 2:
   	cout<<"your are not added!!";
   	break;
   	default:
   		cout<<"invalid output!!";
	}
 }
// Function to display staff data
void cancleseat() 
{
	string Name,  position, employeeID;
	int choice;
    cout<<"Name: " ;
    cin>>Name;
    cout<<"Position: ";
    cin>>position;
    cout<<"Employee ID: ";
    cin>>employeeID;
    cout<<"\n\t\t\t**************************************\n";
    cout << "\t\t\t***       Seat Reservation Menu  ***\n";
    cout << "\t\t\t***        1. canncel Seat       ***\n";
    cout << "\t\t\t***        2. Exit               ***\n";
    cout << "\t\t\t************************************\n";
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    	case 1:
    	cout<<"your seat is cannel!!";
    	break;
    	case 2:
    		cout<<"your seat is not cannel!!";
    		break;
    	default:
    		cout<<"invalid output!!";
	 }
}
int main()
{
    string passengerName, passengerCNIC, flightNumber, seatNumber;
    string passengerAge;
    string staffName, staffPosition, staffEmployeeID;
    int choice;
    do
	{   
	    cout<<"\n*************************\n";
        cout<<"\nFlight Management System\n";
        cout<<"-------------------------\n";
        cout<<"1. Add Passenger Data\n";
        cout<<"2. Show Passenger Data\n";
        cout<<"3. reserved a seat\n";
        cout<<"4. cancle seat\n";
        cout<<"5. Exit\n";
        cout<<"\n*************************\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice) 
		{
            case 1:
                takePassengerData();
                break;
            case 2:
                displayPassengerData();
                break;
            case 3:
                reservedseat();
                break;
            case 4:
                cancleseat();
                break;
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
	 while (choice != 5);
    return 0;
}


