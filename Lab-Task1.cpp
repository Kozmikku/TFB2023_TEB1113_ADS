#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    string email;
};

int main() {
    Student student[5];  // Array of 5 students

    // Input details
    for (int i = 0; i < 5; i++) {
        cout << "Details of Student " << i + 1 << endl;
        cout << "ID: ";
        cin >> student[i].id;
        cout << "Name: ";
        cin >> student[i].name;
        cout << "Email: ";
        cin >> student[i].email;
    }

    // Output details
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "ID: " << student[i].id << endl;
        cout << "Name: " << student[i].name << endl;
        cout << "Email: " << student[i].email << endl;
        cout << "------------------\n";
    }

    return 0;
}
