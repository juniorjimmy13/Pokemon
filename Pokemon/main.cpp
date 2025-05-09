#include <iostream>
using namespace std;

enum class pokemonChoice
{
    Squirtle,
    Bulbasaur,
    Charmander,
    invalidChoice
};
enum class pokemonType
{
    Fire,
    Water,
    Normal,
    Earth,
    Electric
};
int main() {

    string playerName;
    pokemonChoice chosen_pokemon = pokemonChoice::invalidChoice;
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
        chosen_pokemon = pokemonChoice::Bulbasaur;
        break;
    case 2:
        chosen_pokemon = pokemonChoice::Squirtle;
        break;

    case 3:
        
        chosen_pokemon = pokemonChoice::Charmander;
        break;

    default:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        cout << "Professor Oak: Just kidding! Let's go with Pikachu Suprise!!!";
        chosen_pokemon = pokemonChoice::invalidChoice;
        break;
    }

    switch (chosen_pokemon)
    {
    case pokemonChoice::Squirtle:
        cout << "Professor Oak: Squirlte! What a perfect specimen , always handy when there's a fire around";
        break;
    case pokemonChoice::Bulbasaur:
        cout << "Professor Oak: Bulbasaur! Great choice a strong earth type be careful not to cause an earthquake";
        break;
    case pokemonChoice::Charmander:
        cout << "Professor Oak: Charmander! The great fire breather, lets not burn down the centre just yet";
        break;
    case pokemonChoice::invalidChoice:
        cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
        cout << "Professor Oak: Just kidding! Let's go with Charmander";
        chosen_pokemon = pokemonChoice::Charmander;
        break;
    }
    cout << " an excellent choice!\nBut beware, Trainer,\nthis is only the beginning.\nYour journey is about to unfold.";

    cout << "You and " << (chosen_pokemon == pokemonChoice::Charmander ? "Charmander" : chosen_pokemon == pokemonChoice::Bulbasaur ? "Bulbasaur" : "Squirtle") << " Will make a great Team";
    return 0;
}
