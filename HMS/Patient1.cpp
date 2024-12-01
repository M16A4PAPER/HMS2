#include <iostream>
#include "PatientType1.cpp"
using namespace std;

class Patient1 {
public:
    int patientId;
    string name;
    int age;
    string diagnosis;
    PatientType type; // Enum for patient type

    // Constructor to initialize the class
    Patient1(int id, string n, int a, string d, PatientType t)
        : patientId(id), name(n), age(a), diagnosis(d), type(t) {}

    // Method to display the details
    void displayDetails() {
        cout << "Patient ID: " << patientId
            << "\nName: " << name
            << "\nAge: " << age
            << "\nDiagnosis: " << diagnosis
            << "\nType: " << (type == PatientType::Admitted ? "Admitted" : "Outpatient") << endl;
    }
};

