#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define structs/classes
struct Flight {
    int flightNumber;
    string destination;
    string departureTime;
    // Add more fields as needed
};

struct User {
    string username;
    string password;
    // Add more fields as needed
};

// Global variables
vector<Flight> flights;
vector<User> users;

// Function to display flight schedules
void displayFlights() {
    cout << "Flight Schedules:\n";
    for (const auto& flight : flights) {
        cout << "Flight Number: " << flight.flightNumber << ", Destination: " << flight.destination << ", Departure Time: " << flight.departureTime << endl;
    }
}

int main() {
    // Populate flights (you can do this dynamically or from a file/database)
    flights.push_back({1, "New York", "09:00"});
    flights.push_back({2, "Los Angeles", "10:00"});

    // Main loop
    int choice;
    do {
        cout << "1. Display Flight Schedules\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                displayFlights();
                break;
            case 2:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 2);

    return 0;
}
