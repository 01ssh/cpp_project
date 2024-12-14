#include <iostream>
#include <string>
using namespace std;

class Citizen {
public:
    string name, address, zipcode, work;
    int age;
    double weight;
    int id, num_children;
    bool RegisterComplete;
};

void RegisterCitizen(Citizen& citizen) {
    cout << "Enter citizen name: ";
    getline(cin >> ws, citizen.name);
    
    cout << "Enter citizen age: ";
    cin >> citizen.age;
    cin.ignore(); // Consume newline
    
    cout << "Enter citizen address: ";
    getline(cin, citizen.address);
    
    cout << "Enter citizen zipcode: ";
    getline(cin, citizen.zipcode);
    
    cout << "Enter citizen work: ";
    getline(cin, citizen.work);
    
    cout << "Enter citizen weight: ";
    cin >> citizen.weight;
    
    cout << "Enter citizen id: ";
    cin >> citizen.id;
    
    cout << "Enter citizen number of children: ";
    cin >> citizen.num_children;
    
    citizen.RegisterComplete = true;
}

int main() {
    Citizen citizen;
    RegisterCitizen(citizen);
    cout << "Register complete: " << citizen.RegisterComplete << endl;
    cout << "Name: " << citizen.name << endl;
    cout << "Age: " << citizen.age << endl;
    cout << "Address: " << citizen.address << endl;
    cout << "Zipcode: " << citizen.zipcode << endl;
    cout << "Work: " << citizen.work << endl;
    cout << "Weight: " << citizen.weight << endl;
    cout << "ID: " << citizen.id << endl;
    cout << "Number of children: " << citizen.num_children << endl;
    return 0;
}
