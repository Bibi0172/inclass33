#include <stdio.h>


// Define constants 

#define RADIUS 20
#define PI 3.14159265358979323846

// Function declarations
void greet(void);                    // Student 1
int add(int a, int b);               // Student 2
int subtract(int a, int b);          // Student 3
double calculateArea(double radius); // Student 4
unsigned long long factorial(int n); // Student 5
void displayMenu(void);             // Student 6

int main(void) {
    // Variable declarations
    int choice = 10;
    char input[100]; // For safer input handling
    int (*funcPointer)(int, int);

    // Display a welcome message
    printf("Welcome to the Collaborative Code Management Program!\n");

    // Call the display_menu() function
    displayMenu();


    // Accept user input for menu selection
    printf("\nEnter your choice: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Parse the input (placeholder)
       sscanf_s(input, "%d", &choice);
    }

    // Use a switch-case to handle menu options
    switch (choice) {
    case 1:
        greet(); // Call greet function
        break;
    case 2:
        // Call add function (placeholder)
        break;
    case 3:
        // Call subtract function (placeholder)
        break;
    case 4:

        // assign the address to the function pointer 
        funcPointer = calculateArea;

        //use the function pointer to call the function
        int result = funcPointer(PI, RADIUS);

        printf("the area is %d\n", result);
        break;
    case 5:
        // Call factorial function (placeholder)
        break;
    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }

    return 0;
}

// Function definitions (placeholders)

// Student 1: Implement greet() function
void greet(void) {
    printf("helloooo");
}

// Student 2: Modify add() function to take user input
int add(int a, int b) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 3: Complete subtract() function
int subtract(int a, int b) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 4: Implement calculate_area() function
double calculateArea(double radius) // Student 4
{
  
    return RADIUS*RADIUS*PI; // Replace with actual logic
}

// Student 5: Develop factorial() function
unsigned long long factorial(int n) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 6: Implement display_menu() function
void displayMenu(void) {
    // Placeholder
    printf("Menu:\n");
    printf("1. Greet\n");
    printf("2. Add two numbers\n");
    printf("3. Subtract two numbers\n");
    printf("4. Calculate the area of a circle\n");
    printf("5. Calculate the factorial of a number\n");
}