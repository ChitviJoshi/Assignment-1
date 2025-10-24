#include <iostream>
using namespace std;

const int MAX = 100;
int A[MAX]; 

void create(int A[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> A[i];
    }
    cout << "Array created\n";
}



void display(int A[], int n) {
    cout << "The created array: ";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";
}



void insert(int A[], int &n) {
    int pos, ele;
    cout << "Enter element to insert: ";
    cin >> ele;
    cout << "Enter position to insert (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos > n || n >= MAX) {
        cout << "Invalid position or array is full.\n";
        return;
    }

    for (int i = n; i > pos; i--) {
        A[i] = A[i - 1];
    }
    A[pos] = ele;
    n++;
    cout << "Element inserted.\n";
}

void deleteElement(int A[], int &n) {
    int ele, pos = -1;
    cout << "Enter element to delete: ";
    cin >> ele;

    for (int i = 0; i < n; i++) {
        if (A[i] == ele) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Element not found.\n";
        return;
    }

    for (int i = pos; i < n - 1; i++) {
        A[i] = A[i + 1];
    }
    n--;
    cout << "Element deleted.\n";
}

void linearSearch(int A[], int n) {
    int ele;
    cout << "Enter element to search: ";
    cin >> ele;

    for (int i = 0; i < n; i++) {
        if (A[i] == ele) {
            cout << ele << " found at index " << i << "\n";
            return;
        }
    }
    cout << "Element not found.\n";
}

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    if (n > MAX) {
        cout << "Too many elements (max allowed: " << MAX << "). Exiting.\n";
        return 1;
    }

    int choice;
    bool running = true;

    while (running) {
        cout << "\n--- MENU ---\n"
             << "1. CREATE\n"
             << "2. DISPLAY\n"
             << "3. INSERT\n"
             << "4. DELETE\n"
             << "5. LINEAR SEARCH\n"
             << "6. EXIT\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                create(A, n);
                break;
            case 2:
                display(A, n);
                break;
            case 3:
                insert(A, n);
                break;
            case 4:
                deleteElement(A, n);
                break;
            case 5:
                linearSearch(A, n);
                break;
            case 6:
                running = false;
                cout << "Have a good day!\n";
                break;}
    }
return 0;
}

