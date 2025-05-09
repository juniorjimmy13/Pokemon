#include <iostream>
using namespace std;

int main() {

    string playerName;
    string chosen_pokemon;
    int choice = 0;
    cout << "What is your name : ";
    cin >> playerName;
    cout << playerName << ", Welcome to the Pokemon Centre I'm Professor Oak\n";


    cout <<" Professor Oak: There are so many Pokemon to choose from Which would you like\n";
    cout << "Professor Oak: For now I have three starter types for a young trainer such as yourself\n";
    cout << "1. Bulbasaur\n2. Squirtle\n3. Charmander\n";
    cout << "Professor Oak: Which one would you like ? \n Choose a number : ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Professor Oak: Bulbasaur! Great choice a strong earth type be careful not to cause an earthquake";
        chosen_pokemon = "Bulbasaur";
        break;
    case 2:
        cout << "Professor Oak: Squirlte! What a perfect specimen , always handy when there's a fire around";
        chosen_pokemon = "Squirtle";
        break;

    case 3:
        cout << "Professor Oak: Charmander! The great fire breather, lets not burn down the centre just yet";
        chosen_pokemon = "Charmander";
        break;

    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        cout << "Professor Oak: Just kidding! Let's go with Pikachu Suprise!!!";
        chosen_pokemon = "Pikachu";
        break;
    }
    cout << " an excellent choice!\nBut beware, Trainer,\nthis is only the beginning.\nYour journey is about to unfold.\nNow let’s see if you’ve got what it takes to keep going!\nGood luck, and remember… Choose wisely!";


    return 0;
}
