#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, pos, value, i;
    char cont;

    cout << "Enter initial number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n=== ARRAY MENU ===\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Search Element\n";
        cout << "4. Display Elements\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter position to insert (1 to " << n + 1 << "): ";
                cin >> pos;
                cout << "Enter value to insert: ";
                cin >> value;

                if (pos < 1 || pos > n + 1)
                    cout << "Invalid position!\n";
                else {
                    for (i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];
                    arr[pos - 1] = value;
                    n++;
                    cout << "Element inserted successfully.\n";
                }
                break;

            case 2:
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;
                if (pos < 1 || pos > n)
                    cout << "Invalid position!\n";
                else {
                    for (i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];
                    n--;
                    cout << "Element deleted successfully.\n";
                }
                break;

            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                {
                    bool found = false;
                    for (i = 0; i < n; i++) {
                        if (arr[i] == value) {
                            cout << "Element found at position " << i + 1 << ".\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Element not found.\n";
                }
                break;

            case 4:
                cout << "Current array elements: ";
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

        if (choice != 5) {
            cout << "\nDo you want to continue? (y/n): ";
            cin >> cont;
        } else {
            cont = 'n';
        }

    } while (cont == 'y' || cont == 'Y');

    return 0;
}