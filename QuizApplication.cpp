#include<iostream>
using namespace std;
//This project based in QUIZ APPLICATION//
struct User
{
    string name;
    int age;
};

int playquiz();
void registerUser(User&);

int main()
{
    int finalResult = 0;
    User user;
    registerUser(user);
    char playAgain = 'y'; // Initialize playAgain to 'y' for initial entry into loop

    while (playAgain == 'y' || playAgain == 'Y') {
        finalResult = playquiz();

        cout << "Your score is " << finalResult << endl;

        if (finalResult >= 6) 
        {
            cout << "You passed the quiz" << endl;
        } else
        {
            cout << "You failed the quiz" << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thank you for playing the quiz!!!" << endl;
    return 0;
}

void registerUser(User& user)
{
    cout << "Welcome! Please enter your name: ";
    cin >> user.name;
    cout << "Enter your age: ";
    cin >> user.age;
    cout << "Registration successful. Hello, " << user.name << "!" << endl;
}

int playquiz()
{
    int score=0;
    char c;
    char option;
    playInsidefunction:
    cout<<"\n\n-----Welcome to QUIZ applicaion-----\n\n";
    cout<<"\n\n----Please follow the instructions----\n\n";
    cout<<"[1].Quiz contain total 10 questions."<<endl;
    cout<<"[2].Each question will give you 1 score."<<endl;
    cout<<"[3].There will be no negetive score."<<endl;
    cout<<"[4].Please press 's' to start the quiz."<<endl;
    cout<<"[5].Please select option from 'a' 'b' 'c' and 'd'.";
    cin>>c;
    if(c=='s'||c=='S')
    {
        cout<<"Q1.What is capital of the india?"<<endl;
        cout<<"(a) Delhi (b) Mumbai (c) Kolkata (d) Bihar"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q2.Who is current prime minister of india?"<<endl;
        cout<<"(a) Abdul kalam (b) Narendra modi (c) Indira Gandhi (d) Manmohan Singh"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }  
        cout<<"Q3.What is the national bird of india?"<<endl;
        cout<<"(a) Sparrow (b) Pigeon (c) Peacock (d) Eagle"<<endl;
        cin>>option;
        if(option=='c'||option=='C')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q4.What is national animal of india?"<<endl;
        cout<<"(a) Lion (b) Tiger (c) Bear (d) Zebra"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
        {
           score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q5.What is the national flower of india?"<<endl;
        cout<<"(a) Rose (b) Lilly (c) Sunflower (d) Lotus"<<endl;
        cin>>option;
        if(option=='d'||option=='D')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q6.Who is the chief minister of UP?"<<endl;
        cout<<"(a) Arvind kejriwal (b) Nitish Kumar (c) Yogi Adityanath (d) Mamata Banerjee "<<endl;
        cin>>option;
        if(option=='c'||option=='C')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q7.What is the capital of jharkhand?"<<endl;
        cout<<"(a) Patna (b) Gandhinagar (c) Shimla (d) Ranchi "<<endl;
        cin>>option;
        if(option=='d'||option=='D')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q8.What is the national anthem of india?"<<endl;
        cout<<"(a) Jana Gana Mana (b) Vande Mataram (c) Dandiya Raas (d) Bhagawati "<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
         cout<<"Q9.Who is the leader of congress party?"<<endl;
        cout<<"(a) Rahul gandhi (b) Arvind Kejriwal (c) Narendra modi (d) Ramji Gautam "<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q10.What is the currency of india?"<<endl;
        cout<<"(a) ₹ (b) ¥ (c) € (d) $ "<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {     
            score=score+0;
        }
        cout << "Q11. The national river of India is the ________." << endl;
        cout << "(a) Ganges (b) Yamuna (c) Godavari (d) Narmada" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q12. Dr. A.P.J. Abdul Kalam served as the ________ of India." << endl;
        cout << "(a) Prime Minister (b) President (c) Chief Minister (d) Governor" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q13. The national currency of India is the ________." << endl;
        cout << "(a) Dollar (b) Euro (c) Rupee (d) Yen" << endl;
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q14. The national motto of India is ________." << endl;
        cout << "(a) Unity in Diversity (b) Satyameva Jayate (c) In God We Trust (d) Liberty, Equality, Fraternity" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q15. Rabindranath Tagore wrote the national anthem of India. (True/False)" << endl;
        cin >> option;
        if (option == 't' || option == 'T')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q16. The national aquatic animal of India is the ________." << endl;
        cout << "(a) Dolphin (b) Crocodile (c) Shark (d) Whale" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q17. Lal Bahadur Shastri gave the slogan ________." << endl;
        cout << "(a) Jai Jawan Jai Kisan (b) Inquilab Zindabad (c) Vande Mataram (d) Bharat Mata Ki Jai" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q18. The national vegetable of India is the ________." << endl;
        cout << "(a) Potato (b) Tomato (c) Carrot (d) Brinjal" << endl;
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q19. The Red Fort in Delhi was built by ________." << endl;
        cout << "(a) Akbar (b) Shah Jahan (c) Humayun (d) Aurangzeb" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
        cout << "Q20. The national calendar of India is based on the ________ Era." << endl;
        cout << "(a) Vikram Samvat (b) Saka (c) Gregorian (d) Hijri" << endl;
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }
    }
    else
    {
        cout<<"Invalid input. Please enter 's' to start the quiz."<<endl;
        goto playInsidefunction;
    }
    return score;
}