#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int maxNum = 10;

double validateMoney() {
    double num; 
    scanf("%lf", &num);
    num = floorf(num * 100) / 100;
    return num;
    /*if ()
        exit();
    else
        printf("input invalid; try again\n");*/
}

void getBill(double taxPercent, double tipPercent) {
    char* mealsString[4] = {"Salad", "Soup", "Sandwich", "Pizza"};
    double meals[4] = {9.95, 4.55, 13.25, 22.35};
    int ran = rand() % 4;

    //display meal cost
    char costString[6];
    gcvt (meals[ran], 5, costString);
    printf("\nMeal cost: ");
    printf("%s", costString);

    double tax = meals[ran] * taxPercent;
    //display tax cost
    char taxString[6];
    gcvt (tax, 5, taxString);
    printf("\nTax cost: ");
    printf("%s", taxString);
    
    double tip = meals[ran] * tipPercent;
    //display tip amount
    char tipString[6];
    gcvt (tip, 5, tipString);
    printf("\nTip cost: ");
    printf("%s", tipString);

    double total = meals[ran] + tax + tip;
    //display total
    char totalString[6];
    gcvt (total, 5, totalString);
    printf("\nTotal cost: ");
    printf("%s", totalString);
    printf("\n");
}

void restaurant() {
    printf( "\nEnter tax percent: ");
    double taxPercent = validateMoney();
    printf( "\nEnter tip percent: ");
    double tipPercent = validateMoney();
    getBill(taxPercent, tipPercent);
}

/*validateInt() {
    while() {
        if (input from user must be an int)
            exit
    }
}

validateGuess() {
    while() {
        if (input from user must be q or an int)
            exit
    }
}*/

void playGame() {
    int correctNum = rand() % maxNum + 1;

    while (0 == 0) {
        //display "Guess number between 1 and maxNum:"
        //string input = validateGuess();
        char input = getchar();
        if (input == 'q')
            exit(0);
        //int guess = toInteger(input);

        /*if (guess == correctNum) {
            //display "You win!"
            exit(0);
        }*/
        /*else
            if (guess > correctNum)
                //display "Too high"
            else if (guess < correctNum)
                //display "Too low"
                */
    }
}

void game() {
    while (0 == 0) {
        printf( "Enter 1 2 or 3: ");
        char input = getchar();

        if (input == '1')
            playGame(maxNum);
        else if (input == '2')
            maxNum = validateInt();
        else if (input == '3')
            exit(0);
    }
}

void main() {
    time_t t;
    srand((unsigned) time(&t));
    
    while(0 == 0) {
        printf( "Enter 1 2 or 3: ");
        char input = getchar();

        if (input == '1') {
            restaurant();
        } else if (input == '2') {
            game();
        } else if (input == '3') {
            exit(0);
        } else {
            printf("INVALID INPUT\n\n");
        }
    }
}