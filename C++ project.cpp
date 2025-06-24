#include <iostream>
     

using namespace std;

int main() {
    string studentname;
    string destination;
    int fare;
    string busNumber;
   
    int choice;

    // Get student name
    cout << "Enter your name: ";
    cin>>studentname;
    

   

    // Show routes
    cout << "\n\n\t\t\tWelcome to the Transport Office\n\n\n";
    cout << "1. Rout -> Hameedan Banda\n";
    cout << "2. Rout -> Amberi Kala\n";
    cout << "3. Rout -> Patasheri Kala\n";
    cout << "4. Rout -> Dera Ismail Khan (DI-Khan)\n";

    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    // Destination selection
    switch (choice) {
        case 1:
            destination = "Hameedan Banda";
            fare = 10000;
            busNumber = "Bus-HB01";
            break;
        case 2:
            destination = "Amberi Kala";
            fare = 8000;
            busNumber = "Bus-AK02";
            break;
        case 3:
            destination = "Patasheri Kala";
            fare = 6000;
            busNumber = "Bus-PK03";
            break;
        case 4:
            destination = "DI-Khan";
            fare = 12000;
            busNumber = "Bus-DK04";
            break;
        default:
            cout << "Invalid choice. Defaulting to Hameedan Banda.\n";
            destination = "Hameedan Banda";
            fare = 10000;
            busNumber = "Bus-HB01";
    }

   

    // Output ticket
    cout << "\n\n========== TICKET DETAILS ==========\n";
    cout << "Student Name: " << studentname << endl;
    cout << "Destination: " << destination << endl;
    cout << "Bus Number: " << busNumber << endl;
    cout << "Fare: Rs. " << fare << endl;
    cout << "====================================\n";

    return 0;
}

