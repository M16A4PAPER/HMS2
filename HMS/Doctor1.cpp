#include <iostream>
#include "Specialization1.cpp"
using namespace std;

class Doctor1 {
public:
    int doctorId;
    string name;
    Specialization specialization; // Enum for specialization

    // Constructor to initialize the class
    Doctor1(int id, string n, Specialization spec)
        : doctorId(id), name(n), specialization(spec) {}

    // Method to display the details
    void displayDetails() const {
        cout << "Doctor ID: " << doctorId
            << "\nName: " << name
            << "\nSpecialization: " << specialization << endl;
    }
};
