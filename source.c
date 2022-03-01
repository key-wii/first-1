/*
main() {
    while() {
        input 1, 2, or 3 from user
        if input == 1
            restaurant()
        else if input == 2
            game()
        else if input == 3
            exit
    }
}

restaurant() {
    double taxPercent = validateMoney();
    double tipPercent = validateMoney();
    getBill(taxPercent, tipPercent);
}

validateMoney() {
    while() {
        if (input from user must be a double w/ 2 decimal places or less)
            exit
    }
}

getBill(double taxPercent, double tipPercent) {
    pick random meal cost from array of 4 doubles
    display meal cost

    calculate tax
    display tax cost
    
    calculate tip
    display tip amount

    calculate total
    display total
}

game() {
    maxNum = 10
    while() {
        input 1, 2, or 3 from user
        if input == 1
            playGame(maxNum);
        else if input == 2
            maxNum = validateInt();
        else if input == 3
            exit
    }
}

validateInt() {
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
}

playGame() {
    correctNum = random number between 1 and maxNum

    while () {
        display "Guess number between 1 and maxNum:"
        string input = validateGuess();
        if (input == "q")
            exit
        int guess = toInteger(input);

        if (guess == correctNum) {
            display "You win!"
            exit
        }
        else
            if (guess > correctNum)
                display "Too high"
            else if (guess < correctNum)
                display "Too low"
    }
}
*/