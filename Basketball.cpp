#include <iostream>

using namespace std;


int main(){


 string questions[] = {"1. Who holds the record for the most points scored in a single NBA game?: ", 
                       "2. Which team won the first-ever NBA championship?: ",
                       "3. Who is known as The Greek Freak in the NBA?: ",
                       "4. What is the diameter of a standard NBA basketball hoop in inches?: ",
                       "5. Which player famously scored 100 points in a single NBA game?: ",
                       "6. Who is the NBA's all-time leading scorer?: ",
                       "7. Which country has won the most FIBA Basketball World Cup championships?: ",
                       "8. What year was the NBA founded?: ",
                       "9. Who won the NBA MVP award in the 2020-2021 season?: ",
                       "10. Which NBA team has won the most championships in history?: "};   
    
 string choices[][4] = {{"a) Mojito ", "b) Margarita ", "c) Moscow Mule ", "d) Cosmopolitan "},
                       {"a) Gin ", "b) Whiskey ", "c) Rum ", "d) Tequila "},    
                        {"a) Tomato juice ", "b) Vodka ", "c) Orange juice ", "d) Worcestershire sauce "},
                        {"a) Rum ", "b) Vodka ", "c) Gin ", "d) Tequila "},
                        {"a) Grenadine ", "b) Lime juice ", "c) Cranberry juice ", "d) Orange juice "},
                       {"a) Old Fashioned ", "b) Mai Tai ", "c) Long Island Iced Tea ", "d) Daiquiri "},    
                        {"a) Mojito ", "b) Mai Tai ", "c) Margarita ", "d) Daiquiri "},
                        {"a) Vodka ", "b) Rum ", "c) Tequila ", "d) Gin "},
                        {"a) Pineapple ", "b) Peach ", "c) Strawberry ", "d) Raspberry "},
                        {"a) Gin ", "b) Tequila ", "c) Rum ", "d) Whiskey "}};

 char answersKey[] = {'C','A','C','C','A','A','A','C','B','D'};

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
    cout << "CORRECT" << endl;
    cout << "Cheers!" << endl;
    score++;

}
else{
    cout << "INCORRECT" << endl;
    cout << "Success is not final, failure is not fatal!" << endl;
    cout << "Correct Answer: " << answersKey[i] << '\n';
    
}

 }

cout << "********************************************************\n";
cout << "      THANKS FOR PLAYING SATORIA'S BARTENDING GAME       \n";
cout << "                   HERE'S YOUR RESULTS!                  \n";
cout << "********************************************************\n";
cout << '\n';
cout << "CORRECT GUESSES: " << score << '\n';
cout << "NUMBER OF QUESTIONS: " << size << '\n';
cout << "SCORE: " << (score/(double)size)*100 << "%" << '\n';
cout << '\n';
cout << "********************************************************\n";
cout << "                    SEE YOU NEXT TIME!                  \n";
cout << "********************************************************\n";

  
    return 0;
}