#include <stdio.h>
#include <string.h>

// Define a structure to store user information
struct User 
{
    char name[50];
    int age;
};

// Function prototypes
int playquiz();
void registerUser(struct User*);

int main() 
{
    int finalResult = 0;  // Variable to store the quiz score
    struct User user;  // Declare a variable of type User
    registerUser(&user);  // Register the user
    char playAgain = 'y';  // Initialize playAgain to 'y' for initial entry into loop

    // Loop to allow the user to play the quiz multiple times
    while (playAgain == 'y' || playAgain == 'Y') 
    {
        finalResult = playquiz();  // Call the playquiz function and store the result

        // Print the user's score
        printf("Your score is %d\n", finalResult);

        // Check if the user passed or failed the quiz
        if (finalResult >= 6) 
        {
            printf("You passed the quiz\n");
        } 
        else 
        {
            printf("You failed the quiz\n");
        }

        // Ask the user if they want to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);  // Note the space before %c to consume the newline character
    }

    // Thank the user for playing
    printf("Thank you for playing the quiz!!!\n");
    return 0;
}

// Function to register a user
void registerUser(struct User* user) 
{
    printf("Welcome! Please enter your name: ");
    scanf("%s", user->name);  // Read the user's name
    printf("Enter your age: ");
    scanf("%d", &(user->age));  // Read the user's age
    printf("Registration successful. Hello, %s!\n", user->name);  // Confirm registration
}

// Function to play the quiz
int playquiz() 
{
    int score = 0;  // Initialize the score to 0
    char c;  // Variable to store user input for starting the quiz
    char option;  // Variable to store user input for quiz options

playInsidefunction:
    // Print quiz instructions
    printf("\n\n-----Welcome to QUIZ application-----\n\n");
    printf("\n\n----Please follow the instructions----\n\n");
    printf("[1].Quiz contains a total of 10 questions.\n");
    printf("[2].Each question will give you 1 score.\n");
    printf("[3].There will be no negative score.\n");
    printf("[4].Please press 's' to start the quiz.\n");
    printf("[5].Please select an option from 'a', 'b', 'c' and 'd'.\n");
    scanf(" %c", &c);  // Note the space before %c to consume the newline character

    // Check if the user input is 's' or 'S' to start the quiz
    if (c == 's' || c == 'S') 
    {
        // Start asking quiz questions
        printf("Q1. What is the capital of India?\n");
        printf("(a) Delhi (b) Mumbai (c) Kolkata (d) Bihar\n");
        scanf(" %c", &option);
        if (option == 'a' || option == 'A') 
        {
            score++;
        }

        printf("Q2. Who is the current prime minister of India?\n");
        printf("(a) Abdul Kalam (b) Narendra Modi (c) Indira Gandhi (d) Manmohan Singh\n");
        scanf(" %c", &option);
        if (option == 'b' || option == 'B') 
        {
            score++;
        }

        printf("Q3. What is the national bird of India?\n");
        printf("(a) Sparrow (b) Pigeon (c) Peacock (d) Eagle\n");
        scanf(" %c", &option);
        if (option == 'c' || option == 'C') 
        {
            score++;
        }

        printf("Q4. What is the national animal of India?\n");
        printf("(a) Lion (b) Tiger (c) Bear (d) Zebra\n");
        scanf(" %c", &option);
        if (option == 'b' || option == 'B') 
        {
            score++;
        }

        printf("Q5. What is the national flower of India?\n");
        printf("(a) Rose (b) Lily (c) Sunflower (d) Lotus\n");
        scanf(" %c", &option);
        if (option == 'd' || option == 'D') 
        {
            score++;
        }

        printf("Q6. Who is the chief minister of UP?\n");
        printf("(a) Arvind Kejriwal (b) Nitish Kumar (c) Yogi Adityanath (d) Mamata Banerjee\n");
        scanf(" %c", &option);
        if (option == 'c' || option == 'C') 
        {
            score++;
        }

        printf("Q7. What is the capital of Jharkhand?\n");
        printf("(a) Patna (b) Gandhinagar (c) Shimla (d) Ranchi\n");
        scanf(" %c", &option);
        if (option == 'd' || option == 'D') 
        {
            score++;
        }

        printf("Q8. What is the national anthem of India?\n");
        printf("(a) Jana Gana Mana (b) Vande Mataram (c) Dandiya Raas (d) Bhagawati\n");
        scanf(" %c", &option);
        if (option == 'a' || option == 'A') 
        {
            score++;
        }

        printf("Q9. Who is the leader of Congress party?\n");
        printf("(a) Rahul Gandhi (b) Arvind Kejriwal (c) Narendra Modi (d) Ramji Gautam\n");
        scanf(" %c", &option);
        if (option == 'a' || option == 'A') 
        {
            score++;
        }

        printf("Q10. What is the currency of India?\n");
        printf("(a) ₹ (b) ¥ (c) € (d) $\n");
        scanf(" %c", &option);
        if (option == 'a' || option == 'A') 
        {
            score++;
        }

        // Additional questions
        printf("Q11. The national river of India is the ________.\n");
        printf("(a) Ganges (b) Yamuna (c) Godavari (d) Narmada\n");
        scanf(" %c", &option);
        if (option == 'a' || option == 'A') 
        {
            score++;
        }

        printf("Q12. Dr. A.P.J. Abdul Kalam served as the ________ of India.\n");
        printf("(a) Prime Minister (b) President (c) Chief Minister (d) Governor\n");
        scanf(" %c", &option);
        if (option == 'b' || option == 'B') 
        {
            score++;
        }

        printf("Q13. The national currency of India is the ________.\n");
        printf("(a) Dollar (b) Euro (c) Rupee (d) Yen\n");
        scanf(" %c", &option);
        if (option == 'c' || option == 'C') 
        {
            score++;
        }

        printf("Q14. The national motto of India is ________.\n");
        printf("(a) Unity in Diversity (b) Satyameva Jayate (c) In God We Trust (d) Liberty, Equality, Fraternity\n");
        scanf(" %c", &option);
        if (option == 'b' || option == 'B') 
        {
            score++;
        }

        printf("Q15. Rabindranath Tagore wrote the national anthem of India. (True/False)\n");
        scanf(" %c", &option);
        if (option == 't' || option == 'T') 
        {
            score++;
        }

        printf("Q16. The national aquatic animal of India is the ________.\n");
        printf("(a) Dolphin (b) Crocodile (c) Shark (d) Whale\n");
        scanf(" %c", &option);
        if (option == 'a' || option == 'A') 
        {
            score++;
        }

        printf("Q17. Lal Bahadur Shastri gave the slogan ________.\n");
        printf("(a) Jai Jawan Jai Kisan (b) Inquilab Zindabad (c) Vande Mataram (d) Bharat Mata Ki Jai\n");
        scanf(" %c", &option);
        if (option == 'a' || option == 'A') 
        {
            score++;
        }

        printf("Q18. The national vegetable of India is the ________.\n");
        printf("(a) Potato (b) Tomato (c) Carrot (d) Brinjal\n");
        scanf(" %c", &option);
        if (option == 'a' || option == 'A') 
        {
            score++;
        }

        printf("Q19. The Red Fort in Delhi was built by ________.\n");
        printf("(a) Akbar (b) Shah Jahan (c) Humayun (d) Aurangzeb\n");
        scanf(" %c", &option);
        if (option == 'b' || option == 'B') 
        {
            score++;
        }

        printf("Q20. The national calendar of India is based on the ________ Era.\n");
        printf("(a) Vikram Samvat (b) Saka (c) Gregorian (d) Hijri\n");
        scanf(" %c", &option);
        if (option == 'b' || option == 'B') 
        {
            score++;
        }
    } 
    else 
    {
        // If the user input is not 's' or 'S', prompt them again
        printf("Invalid input. Please enter 's' to start the quiz.\n");
        goto playInsidefunction;
    }

    // Return the final score
    return score;
}
