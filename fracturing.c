//********************************************************
// fracturing.c
// Author: Collin West
// UCF ID: 5041579
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: To write a program that will house many internal
// functions instead of typing evrything in main(). This will
// teach me how to fracture my code.
// Input: x and y coordinates
//
// Output: Calculated distance, perimeter, area, width, and height
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

//********************************************************
// double calculateDistance()
//
// Purpose:             Calculates the distance between two points
// Input:           Two sets of x and y coordiantes
// Output:          Prints the x1, y1, x2, and y2 entered by the user and the distance between the two points.
// Precondition:        Assumes the points entered are numeric
// Postcondition:       The distance has been calculated and the return is a double representing the distance.
//********************************************************

double calculateDistance() {

    double x1, x2, y1, y2; 

    // Asks user to enter x coordinates of the points
    printf("Enter the x coordinates of the points (x1 x2): ");
    scanf("%lf %lf", &x1, &x2);

    // Asks user to enter y coordinates of the points
    printf("Enter the y coordinates of the points (y1 y2): ");
    scanf("%lf %lf", &y1, &y2);

    // Outputs the entered points
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    // Calculates the distance between the points
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Outputs the calculated distance
    printf("The distance between the two points is %.2lf\n", distance);

    // Returns the calculated distance
    return distance;
}   // calculateDistance

//********************************************************
// double calculatePerimeter()
//
// Purpose:             Calculates the perimeter of the city using the calculateDistance for the points
// Input:           Two sets of x and y coordiantes
// Output:          Prints the x1, y1, x2, and y2 entered by the user, the distance between the two points, and the calculated perimeter.
// Precondition:        Assumes the points entered are numeric and the CalculateDistance function works properly.
// Postcondition:       The perimeter has been calculated and the return is a double representing the difficulty.
//********************************************************

double calculatePerimeter() {

    double distance = calculateDistance();

    double perimeter = PI*distance;

    // Outputs the calculated perimeter
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Rating my percieved difficulty level of making this function on a scale of 1 to 5 with 1 being easy and 5 being hard. 
    double difficulty = 2.0;  

    // Returns the difficulty
    return difficulty;
}   // calculatePerimeter

//********************************************************
// double calculateArea()
//
// Purpose:             Calculates the Area of the city using the calculateDistance for the points
// Input:           Two sets of x and y coordiantes
// Output:          Prints the x1, y1, x2, and y2 entered by the user, the distance between the two points, and the calculated Area.
// Precondition:        Assumes the points entered are numeric and the CalculateDistance function works properly.
// Postcondition:       The area has been calculated and the return is a double representing the difficulty.
//********************************************************

double calculateArea() {

    double distance = calculateDistance();

    double area = PI*(pow((distance/2), 2));

    // Outputs the calculated area
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    // Rating my percieved difficulty level of making this function on a scale of 1 to 5 with 1 being easy and 5 being hard. 
    double difficulty = 3.0; 

    // Returns the difficulty
    return difficulty;
}   //calculateArea

//********************************************************
// double calculateWidth()
//
// Purpose:             Calculates the width of the city using the calculateDistance for the points
// Input:           Two sets of x and y coordiantes
// Output:          Prints the x1, y1, x2, and y2 entered by the user, the distance between the two points, and the calculated width.
// Precondition:        Assumes the points entered are numeric and the CalculateDistance function works properly.
// Postcondition:       The width has been calculated and the return is a double representing the difficulty.
//********************************************************

double calculateWidth() {

    double distance = calculateDistance();

    double width = distance;

    // Outputs the calculated width
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    // Rating my percieved difficulty level of making this function on a scale of 1 to 5 with 1 being easy and 5 being hard. 
    double difficulty = 1.0; 

    // Returns the difficulty
    return difficulty;
}   // calculateWidth

//********************************************************
// double calculateHeight()
//
// Purpose:             Calculates the height of the city using the calculateDistance for the points
// Input:           Two sets of x and y coordiantes
// Output:          Prints the x1, y1, x2, and y2 entered by the user, the distance between the two points, and the calculated height.
// Precondition:        Assumes the points entered are numeric and the CalculateDistance function works properly.
// Postcondition:       The height has been calculated and the return is a double representing the difficulty.
//********************************************************

double calculateHeight() {
    
    double distance = calculateDistance();

    // I'm assuming this is referring to the maximum height of the buildings in the city. 
    // Maybe the height is always supposed to just equal 0, but I'm
    // going with my gut here based on my interpretation of the instructions. 

    double height = distance;

    printf("The height of the city encompassed by your request is %.2lf\n", height);

    // Rating my percieved difficulty level of making this function on a scale of 1 to 5 with 1 being easy and 5 being hard. 
    double difficulty = 1.0; 

    // Returns the difficulty
    return difficulty;
}   // calculateHeight

//********************************************************
// int main(int argc, char **argv)
//
// Purpose:         Calls the other functions in the program
// Input:           None
// Output:          None
// Precondition:        None
// Postcondition:       None
//********************************************************

int main(int argc, char **argv) {
   
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} //main