#include <iostream>
using namespace std;

class Stats {

public:

    static int sum(int a[], int n){
        int total = 0;

        for(int i=0;i<n;i++){
            total += a[i];
        }

        return total;
    }

    static double average(int a[], int n){
        int total = sum(a,n);
        return (double) total / n;
    }
};

int main(){

    int grades[10] = {80,75,90,60,95,70,85,88,92,77};

    int total = Stats::sum(grades,10);
    double avg = Stats::average(grades,10);

    cout << "Sum: " << total << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
