#include <iostream>
using namespace std;

void cpuScheduling();
void memoryManagement();
void deadlockDetection();

int main() {
    int choice;

    cout << "MINI OS RESOURCE MANAGER\n";
    cout << "1. CPU Scheduling\n";
    cout << "2. Memory Management\n";
    cout << "3. Deadlock Detection\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cpuScheduling();
            break;
        case 2:
            memoryManagement();
            break;
        case 3:
            deadlockDetection();
            break;
        default:
            cout << "Invalid choice\n";
    }
    return 0;
}
