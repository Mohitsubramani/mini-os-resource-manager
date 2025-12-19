#include <iostream>
using namespace std;

void memoryManagement() {
    int m, n;
    cout << "\nMemory Management - First Fit\n";

    cout << "Enter number of memory blocks: ";
    cin >> m;
    int blockSize[m];

    for (int i = 0; i < m; i++) {
        cout << "Block " << i + 1 << " size: ";
        cin >> blockSize[i];
    }

    cout << "Enter number of processes: ";
    cin >> n;
    int processSize[n];

    for (int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << " size: ";
        cin >> processSize[i];
    }

    for (int i = 0; i < n; i++) {
        bool allocated = false;
        for (int j = 0; j < m; j++) {
            if (blockSize[j] >= processSize[i]) {
                cout << "Process " << i + 1
                     << " allocated to Block " << j + 1 << endl;
                blockSize[j] -= processSize[i];
                allocated = true;
                break;
            }
        }
        if (!allocated) {
            cout << "Process " << i + 1 << " not allocated\n";
        }
    }
}
