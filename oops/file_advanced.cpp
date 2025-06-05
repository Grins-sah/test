#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    fstream file("employees.dat", ios::binary | ios::in | ios::out | ios::trunc);
    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Write records at specific positions
    Employee emp1 = {101, "Alice", 50000.0f};
    Employee emp2 = {102, "Bob", 55000.0f};
    Employee emp3 = {103, "Charlie", 60000.0f};

    // Write at position 0 (first record)
    file.seekp(0 * sizeof(Employee), ios::beg);
    file.write(reinterpret_cast<char*>(&emp1), sizeof(Employee));

    // Write at position 1 (second record)
    file.seekp(1 * sizeof(Employee), ios::beg);
    file.write(reinterpret_cast<char*>(&emp2), sizeof(Employee));

    // Write at position 2 (third record)
    file.seekp(2 * sizeof(Employee), ios::beg);
    file.write(reinterpret_cast<char*>(&emp3), sizeof(Employee));

    // Read back from position 1
    Employee temp;
    file.seekg(1 * sizeof(Employee), ios::beg);
    file.read(reinterpret_cast<char*>(&temp), sizeof(Employee));

    cout << "\nEmployee at position 1:\n";
    cout << "ID: " << temp.id << "\nName: " << temp.name << "\nSalary: " << temp.salary << endl;

    file.close();
    return 0;
}
