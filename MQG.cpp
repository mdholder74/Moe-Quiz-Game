#include <iostream>

using namespace std;

int main()
{
    
    string questions[] = {"1. What is Moe's favorite Color?: ",
                            "2. What is Moe's favorite Professional Athlete?: ",
                            "3. Who is Moe's favorite Artist?: ",
                            "4. How many siblings does Moe have?: "};
                            
    string choices[][4] = {{"A. Purple", "B. Black", "C. White", "D. Gray"},
                            {"A. Lebron James", "B. Jalen Hurts", "C. Devin Haney", "D. Anthony Davis"},
                            {"A. Kevin Gate", "B. Beyonce", "C. J Cole", "D. DMX"},
                            {"A. 1", "B. 2","C. 3","D. 4"}};
                            
    char answersKey[] = {'B', 'A', 'A', 'D'};
    
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;
    
    for(int i = 0; i < size; i++){
        cout << "******************************************************** << \n";
        cout << questions[i] << '\n';
        cout << "******************************************************** << \n";
        
        for(int j = 0; j < sizeof(choices[i])/sizeof(choices[i][0]); j++){
            cout << choices[i][j] << '\n';
        }
        
        cin >> guess;
        guess = toupper(guess);
        
        if(guess == answersKey[i]){
            cout << "CORRECT MY FRIEND\n";
            score++;
        }
        else{
            cout << "WRONG SUCKA!!!\n";
            cout << "Answer: " << answersKey[i] << '\n';
        }
        
        
    }
        cout << "********************************************************\n";
        cout << "                      RESULTS                          * \n";
        cout << "******************************************************** \n";
        cout << " CORRECT GUESSES: " << score << '\n';
        cout << "# of QUESTIONS: " << size << '\n';
        cout << "SCORE: " << (score/(double)size)*100 << "%" ;
    
    return 0;
}

