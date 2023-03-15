#include "Trivia.cpp"
#include <ctime>
main(){
    srand(time(NULL));
    Trivia trivia;
    Trivia questions[10] = {
        Trivia("What is the capital of France?", "Paris", "Berlin", "Madrid", "London", 1),
        Trivia("What is the largest planet in our solar system?", "Jupiter", "Mars", "Saturn", "Venus", 1),
        Trivia("Who wrote the book 'To Kill a Mockingbird'?", "Harper Lee", "John Steinbeck", "Mark Twain", "Ernest Hemingway", 1),
        Trivia("What is the smallest country in the world?", "Vatican City", "Monaco", "San Marino", "Liechtenstein", 1),
        Trivia("What is the name of the world's largest ocean?", "Pacific Ocean", "Atlantic Ocean", "Indian Ocean", "Arctic Ocean", 1),
        Trivia("Which is the most spoken language in the world?", "Mandarin", "English", "Spanish", "Arabic", 1),
        Trivia("What is the name of the highest mountain in the world?", "Mount Everest", "Mount Kilimanjaro", "Mount McKinley", "Mount Elbrus", 1),
        Trivia("What is the currency of Japan?", "Yen", "Euro", "Dollar", "Pound", 1),
        Trivia("What is the chemical symbol for gold?", "Au", "Ag", "Cu", "Pb", 1),
        Trivia("What is the capital of Canada?", "Ottawa", "Toronto", "Montreal", "Vancouver", 1)
    };
    int player1Score = 0;
    int player2Score = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Player 1's turn:" << endl;
        int questionIndex = rand() % 10;
        cout << questions[questionIndex].getQuestion() << endl;
        cout << "1. " << questions[questionIndex].getAnswer1() << endl;
        cout << "2. " << questions[questionIndex].getAnswer2() << endl;
        cout << "3. " << questions[questionIndex].getAnswer3() << endl;
        cout << "4. " << questions[questionIndex].getAnswer4() << endl;
        int player1Answer;
        cin >> player1Answer;
        if (player1Answer == questions[questionIndex].getCorrectAnswer()) {
            player1Score++;
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << "Player 2's turn:" << endl;
        int questionIndex = rand() % 10;
        cout << questions[questionIndex].getQuestion() << endl;
        cout << "1. " << questions[questionIndex].getAnswer1() << endl;
        cout << "2. " << questions[questionIndex].getAnswer2() << endl;
        cout << "3. " << questions[questionIndex].getAnswer3() << endl;
        cout << "4. " << questions[questionIndex].getAnswer4() << endl;
        int player2Answer;
        cin >> player2Answer;
        if (player2Answer == questions[questionIndex].getCorrectAnswer()) {
            player2Score++;
        }
    }
    
    cout << "Player 1's score : "<< player1Score << endl;
    cout << "Player 2's score : "<< player2Score << endl;

    if (player1Score > player2Score)
    {
        cout << "Player 1 WIN";
    }else if (player1Score < player2Score)
    {
        cout << "Player 2 WIN";
    }else
    {
        cout << "Player 1 and Player 2 DRAW";
    }
    
    return 0;
}