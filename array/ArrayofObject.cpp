#include <bits/stdc++.h>
using namespace std;

class students {
    public:
    string name;
    int roll;
    int marks;
};

int main() {
    int n;
    cin >> n; 

    students a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    int MaxValue = INT_MIN;
    int MinValue = INT_MAX;
    students maxStudent, minStudent;

    for (int i = 0; i < n; i++) {
        if (a[i].marks > MaxValue) { 
            MaxValue = a[i].marks;
            maxStudent = a[i];
        }
        if (a[i].marks < MinValue) { 
            MinValue = a[i].marks;
            minStudent = a[i];
        }
    }

    cout << "Maximum Marks Student: " << endl;
    cout << "Name: " << maxStudent.name << ", Roll: " << maxStudent.roll << ", Marks: " << maxStudent.marks << endl;

    cout << "Minimum Marks Student: " << endl;
    cout << "Name: " << minStudent.name << ", Roll: " << minStudent.roll << ", Marks: " << minStudent.marks << endl;

    return 0; 
}
