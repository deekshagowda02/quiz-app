#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("===== Welcome to the C Quiz =====\n\n");

    // Question 1
    printf("Q1. Who is the father of C language?\n");
    printf("a) James Gosling\n");
    printf("b) Dennis Ritchie\n");
    printf("c) Bjarne Stroustrup\n");
    printf("d) Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'b' || answer == 'B') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is b) Dennis Ritchie\n\n");
    }

    // Question 2
    printf("Q2. Which symbol is used to end a statement in C?\n");
    printf("a) .\n");
    printf("b) :\n");
    printf("c) ;\n");
    printf("d) ,\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is c) ;\n\n");
    }

    // Question 3
    printf("Q3. Which data type is used to store decimal numbers?\n");
    printf("a) int\n");
    printf("b) char\n");
    printf("c) float\n");
    printf("d) void\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'c' || answer == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is c) float\n\n");
    }

    // Final Score
    printf("===== Quiz Finished =====\n");
    printf("Your Score: %d / 3\n", score);

    if (score == 3) {
        printf("Excellent!\n");
    } else if (score == 2) {
        printf("Good job!\n");
    } else {
        printf("Keep practicing!\n");
    }

    return 0;
}