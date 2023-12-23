#include <iostream>

using namespace std;


int main(){


 string questions[] = {"1. Which cocktail traditionally contains vodka, ginger beer, and lime juice?: ", 
                       "2. What is the primary spirit used in a classic Negroni cocktail?: ",
                       "3. Which ingredient is NOT typically found in a Bloody Mary?: ",
                       "4. A classic Martini is made primarily with which spirit?: ",
                       "5. What gives the distinctive red color to a Tequila Sunrise cocktail?: ",
                       "6. Which of these cocktails is made with whiskey, sugar, and bitters?: ",
                       "7. Which cocktail typically includes mint leaves, sugar, lime juice, and white rum?: ",
                       "8. What is the main ingredient in a traditional Margarita?: ",
                       "9. What fruit is used to make a classic Bellini cocktail?: ",
                       "10. In a classic Long Island Iced Tea, which alcoholic beverage is NOT typically included?: "};   
    
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