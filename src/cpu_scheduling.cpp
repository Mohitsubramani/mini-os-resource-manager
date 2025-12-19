#include <iostream>
using namespace std;

void cpuScheduling() {
    int n;
    cout << "\nFCFS CPU Scheduling\n";
    cout << "Enter number of processes: ";
    cin >> n;

    int bt[n], wt[n], tat[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter burst time for P" << i + 1 << ": ";
        cin >> bt[i];
    }

    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
        cout << "P" << i + 1
             << " WT=" << wt[i]
             << " TAT=" << tat[i] << endl;
    }
}
