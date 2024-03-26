#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_SIZE = 5;

//-----------------------------------------------------------------------------------------------------------------------

// Add
void addMatx(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

//-----------------------------------------------------------------------------------------------------------------------

// Subtract 
void subMatx(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

//-----------------------------------------------------------------------------------------------------------------------

// Multiply 
void mulMatx(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            c[i][j] = 0;
            for (int k = 0; k < size; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

//-----------------------------------------------------------------------------------------------------------------------

// Display
void dispMatx(int a[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
			cout << setw(22) << a[i][j];
        }
        cout << endl;
    }
}

//-----------------------------------------------------------------------------------------------------------------------

// Loop/Exit
void prmpt() {
  cout << "\n\nPress any key to go back to MAIN MENU or X/x to exit." << endl;
}

//-----------------------------------------------------------------------------------------------------------------------


int main() {
    int ans, size;
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], c[MAX_SIZE][MAX_SIZE];

	system("cls");
	
	cout << "\t\t\t\t +--------------------------------------+\n";
	cout << "\t\t\t\t |                                      |\n";
	cout << "\t\t\t\t |     MENU FOR MATRIX OPERATIONS!      |\n";
	cout << "\t\t\t\t |                                      |\n";
	cout << "\t\t\t\t +--------------------------------------+\n";
    cout << "\t\t\t\t | [1] Addition of a 3 X 3 Matrix	|" << endl;
    cout << "\t\t\t\t | [2] Addition of a 4 X 4 Matrix	|" << endl;
    cout << "\t\t\t\t | [3] Addition of a 5 X 5 Matrix	|" << endl;
    cout << "\t\t\t\t | [4] Subtraction of a 3 X 3 Matrix	|" << endl;
    cout << "\t\t\t\t | [5] Subtraction of a 4 X 4 Matrix	|" << endl;
    cout << "\t\t\t\t | [6] Subtraction of a 5 X 5 Matrix	|" << endl;
    cout << "\t\t\t\t | [7] Multiplication of a 3 X 3 Matrix	|" << endl;
    cout << "\t\t\t\t | [8] Multiplication of a 4 X 4 Matrix	|" << endl;
    cout << "\t\t\t\t | [9] Multiplication of a 5 X 5 Matrix	|" << endl;
    cout << "\t\t\t\t | [10] Exit				|" << endl;
    cout << "\t\t\t\t +--------------------------------------+\n";
    cout << "\t\t\t\t  Enter your choice: ";
    cin >> ans;
    

    switch (ans) {
        case 1:
            size = 3;
            break;
        case 2:
            size = 4;
            break;
        case 3:
            size = 5;
            break;
        case 4:
            size = 3;
            break;
        case 5:
            size = 4;
            break;
        case 6:
            size = 5;
            break;
        case 7:
            size = 3;
            break;
        case 8:
            size = 4;
            break;
        case 9:
            size = 5;
            break;
        case 10:
            return 0;
        default:
            cout << "Invalid choice" << endl;
            return 0;
    }

	system("cls");
	
	cout << "\t\t\t\t +--------------------------------------+\n";
    cout << "\t\t\t\t | Enter value for the First Matrix:" << "	|" << endl;
    cout << "\t\t\t\t +--------------------------------------+\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "\t\t\t\t  [" << i << ", " << j << "] = ";
            cin >> a[i][j];
        }
    }

	system("cls");

	cout << "\t\t\t\t +--------------------------------------+\n";
    cout << "\t\t\t\t | Enter value for the Second Matrix:" << "	|" << endl;
    cout << "\t\t\t\t +--------------------------------------+\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "\t\t\t\t  [" << i << ", " << j << "] = ";
            cin >> b[i][j];
        }
    }

	system("cls");

	cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
    cout << "\t\t | 					First Matrix:" << " 				    		|" << endl;
    cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
    dispMatx(a, size);
    cout << endl;
    cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
    cout << "\t\t | 					Second Matrix:" << " 				    		|" << endl;
    cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
    dispMatx(b, size);
    cout << endl;
	
    switch (ans) {
        case 1:
        case 2:
        case 3:
            addMatx(a, b, c, size);
            cout << "\n\t\t +----------------------------------------------------------------------------------------------+\n";
            cout << "\t\t | 			Result of ADDING the First and the Second Matrix:" << "	    		|" << endl;
            cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
            dispMatx(c, size);
            break;
        case 4:
        case 5:
        case 6:
            subMatx(a, b, c, size);
            cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
            cout << "\t\t | 			Result of SUBTRACTING the First and the Second Matrix:" << " 			|" << endl;
            cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
            dispMatx(c, size);
            break;
        case 7:
        case 8:
        case 9:
            mulMatx(a, b, c, size);
            cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
            cout << "\t\t | 			Result of MULTIPLYING the First and the Second Matrix:" << " 			|" << endl;
            cout << "\t\t +----------------------------------------------------------------------------------------------+\n";
            dispMatx(c, size);
			break;
    }
    
    // Print the message to press any key to go back to the main menu or X/x to exit.
	prmpt();
	
	// Get the user's input
	char ch;
	cin >> ch;
	
	// If the user presses any key, go back to the main menu.
	if (ch != 'X' && ch != 'x') {
	  main();
	}

    return 0;
}


