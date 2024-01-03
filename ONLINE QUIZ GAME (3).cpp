#include <stdio.h>

int main() {
    char playerName[50];
    char answer;
    int i=0;
    int score = 0;

    printf("Enter your name: ");
    scanf("%s", playerName);

    printf("\n** Welcome, %s! Let's start the Quiz Game. **\n", playerName);

    // Warm-up Round
    int correctAnswers = 0;
    
    printf("\nQ1. What is the capital of France? \n(A) Paris (B) Berlin (C) Madrid (D) Rome \n");
    printf("My answer is:");
    scanf(" %c", &answer);
    if (answer=='a'||answer=='A')
    {
    printf("Correct answer!\n");
    correctAnswers+=1;
    }
    
    printf("\nQ2. Which planet is known as the Red Planet? \n(A) Earth (B) Mars (C) Venus (D) Jupiter\n");
    printf("My answer is:");
    scanf(" %c", &answer);
    if (answer=='b'||answer=='B') 
    {
    printf("Correct answer!\n");
    correctAnswers+=1;
    }
    
    printf("\nQ3. What is the capital of Japan? \n(A) Seoul (B) Beijing (C) Tokyo (D) Bangkok \n");
    printf("My answer is:");
    scanf(" %c", &answer);
    if (answer=='C'||answer=='c') 
    {
    printf("Correct answer!\n");
    correctAnswers+=1;
    }
    
    if (correctAnswers >= 2) {
        // Challenge Round
        printf("\nCongratulations, %s! You are qualified for the Challenge Round.\n", playerName);
        printf("\n** Welcome to the Challenge Round! Answer questions and win cash. **\n");
        while (score < 1000000) 
        {
    printf("Question 1: What is the largest mammal in the world?\n");
    printf("a) Elephant b) Blue Whale c) Giraffe d) Polar Bear\n");
    printf("My answer is:");
    scanf(" %c", &answer);
    if (answer == 'b' || answer == 'B') {
        printf("Correct! You've earned $100,000.\n");
        score += 100000;
    } else {
        printf("Wrong answer.\n");
    }

    printf("\nQuestion 2: Who developed the theory of relativity?\n");
    printf("a) Isaac Newton b) Albert Einstein c) Galileo Galilei d) Stephen Hawking\n");
    scanf(" %c", &answer);
    if (answer == 'b' || answer == 'B') {
       printf("Correct! You've earned $100,000.\n");
                score += 100000;
    } else {
        printf("Wrong answer.\n");
    }


    printf("\nQuestion 3: What is the largest ocean on Earth?\n");
    printf("a) Atlantic Ocean\nb) Indian Ocean\nc) Southern Ocean\nd) Pacific Ocean\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'd' || answer == 'D') {
        printf("Correct! You've earned $100,000.\n");
                score += 100000;
    } else {
        printf("Wrong answer.\n");
    }
    
    printf("\nQuestion 4: Who is known as the 'Father of Computers'?\n");
    printf("a) Bill Gates\nb) Steve Jobs\nc) Alan Turing\nd) Charles Babbage\nYour answer: ");
    scanf(" %c", &answer);
    if (answer == 'd' || answer == 'D') {
       printf("Correct! You've earned $100,000.\n");
                score += 100000;
    }
    else 
    {
        printf("Wrong answer.\n");
    }

    }
    printf("\nCongratulations, %s! You've won $1 million!\n", playerName);
    } 
    else 
    {
        printf("\nSorry, %s. Better luck next time!\n", playerName);
    }

    return 0;
    
}
