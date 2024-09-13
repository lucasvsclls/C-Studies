#include <stdio.h>
#include <math.h>

int main(){

    printf("\nRight-Angled Triangle Program\n");

    float opposite_leg, adjacent_leg;
    float hypotenuse;

    // Prompt the user to input the value of the opposite leg
    printf("Enter the value of the opposite leg: ");
    scanf("%f", &opposite_leg);

    // Prompt the user to input the value of the adjacent leg
    printf("Enter the value of the adjacent leg: ");
    scanf("%f", &adjacent_leg);

    // Calculate the hypotenuse using the Pythagorean theorem
    hypotenuse = sqrt((opposite_leg * opposite_leg) + (adjacent_leg * adjacent_leg));

    printf("\n");

    // Check if the sum of the two legs is greater than the hypotenuse and if the triangle is valid
    if ((opposite_leg + adjacent_leg) > hypotenuse && (opposite_leg + adjacent_leg) > adjacent_leg && (adjacent_leg + hypotenuse) > opposite_leg) {
        // Loop to draw the triangle using asterisks based on the inputted legs
        for (int i = 0; i < opposite_leg; i++) {
            for (int j = 0; j < adjacent_leg; j++) {
                /*
                Uncommented code for future modification, which draws the first line with stars
                if (i == 0) {
                    printf("*  "); // first line
                    if (j == size-1)
                        printf("\n");
                }
                */
                
                // Draw the last line with stars
                if (i == opposite_leg - 1) {
                    printf("*  ");
                }
                else {
                    // Draw the first column of each line
                    if (j == 0) {
                        printf("*  ");
                    }
                    // Draw the last column of each line
                    else if (j == adjacent_leg - 1) {
                        printf("\n");
                    }
                    // Increase the number of stars as per the row
                    else if (j <= i) {
                        printf("*  ");
                    }
                    // Empty spaces where stars aren't drawn
                    else {
                        printf("   ");
                    }
                }
            }
        }
    
        // Display the calculated hypotenuse
        printf("\nhypotenuse = %.1f", hypotenuse);
    }
    else {
        // Print if the triangle is invalid
        printf("\nThis triangle does not exist");
    }

    printf("\n\n");

    return 0;
}