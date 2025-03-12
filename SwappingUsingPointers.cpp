// Implement two no using pointer to swap two no
#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapUsingPointers(int* x, int* y) {
    int temp = *x; // Use a temporary variable to hold the value of *x
    *x = *y;       // Assign the value of *y to *x
    *y = temp;     // Assign the temporary value to *y
}

int main() {
    int num1 = 10, num2 = 20;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call the swap function
    swapUsingPointers(&num1, &num2);

    cout << "After swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Display your details
    cout << "\nName: Ayush Shivam" << endl;
    cout << "Enrollment no: A45304823048" << endl;
    cout << "Class: BCA 3 A" << endl;

    return 0;
}
