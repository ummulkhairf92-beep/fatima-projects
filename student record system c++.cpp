#include <iostream>
using namespace std;
//student record syatem
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[100];   // assuming max 100 students
    int count = 0;

    // Input Marks
    for(int i = 0; i < n; i++) {
        int m;
        cout << "Enter marks for student " << i+1 << ": ";
        cin >> m;

        if(m >= 0 && m <= 100) {
            marks[count] = m;
            count++;
        } else {
            cout << "Invalid marks! Ignored.\n";
        }
    }

    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Show All Marks\n";
        cout << "2. Calculate Average\n";
        cout << "3. Highest and Lowest Marks\n";
        cout << "4. Count Passed Students\n";
        cout << "5. Assign Grades\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {
                cout << "Marks:\n";
                for(int i = 0; i < count; i++)
                    cout << marks[i] << " ";
                cout << endl;
                break;
            }

            case 2: {
                if(count == 0) {
                    cout << "No valid marks entered.\n";
                    break;
                }
                int sum = 0;
                for(int i = 0; i < count; i++)
                    sum += marks[i];

                cout << "Average = " << (float)sum / count << endl;
                break;
            }

            case 3: {
                if(count == 0) {
                    cout << "No valid marks entered.\n";
                    break;
                }

                int highest = marks[0];
                int lowest = marks[0];

                for(int i = 1; i < count; i++) {
                    if(marks[i] > highest)
                        highest = marks[i];
                    if(marks[i] < lowest)
                        lowest = marks[i];
                }

                cout << "Highest = " << highest << endl;
                cout << "Lowest = " << lowest << endl;
                break;
            }

            case 4: {
                int passCount = 0;
                for(int i = 0; i < count; i++) {
                    if(marks[i] >= 50)
                        passCount++;
                }

                cout << "Passed Students = " << passCount << endl;
                break;
            }

            case 5: {
                cout << "Grades:\n";
                for(int i = 0; i < count; i++) {
                    cout << "Student " << i+1 << " (" << marks[i] << ") : ";

                    if(marks[i] >= 80)
                        cout << "A";
                    else if(marks[i] >= 70)
                        cout << "B";
                    else if(marks[i] >= 60)
                        cout << "C";
                    else if(marks[i] >= 50)
                        cout << "D";
                    else
                        cout << "F";

                    cout << endl;
                }
                break;
            }

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}

