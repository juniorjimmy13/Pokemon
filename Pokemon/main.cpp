#include <iostream>
using namespace std;

int main() {

    string playerName;
    int choice = 0;
    cout << "What is your name : ";
    cin >> playerName;
    cout << playerName << ", Welcome to the Pokemon Centre I'm professor oak\n";


    cout <<" There are so many Pokemon to choose from Which would you like\n";
    cout << "For now I have three starter types for a young trainer such as yourself\n";
    cout << "1. Bulbasaur\n2. Squirtle\n3. Charmander\n";
    cout << "Which one would you like ? \n Choose a number : ";

    cin >> choice;

    if (choice == 1)
    {
        cout << "Bulbasaur! Great choice a strong earth type be careful not to cause an earthquake";
    }
    else if (choice == 2)
    {
        cout << "Squirlte! What a perfect specimen , always handy when there's a fire around";
    }
    else if (choice == 3)
    {
        cout << "Charmander! The great fire breather, lets not burn down the centre just yet";
    }
    else 
    { 
        cout << "Invalid choice, Restart game"; 
        return 0;
    }
    cout << " an excellent choice!\nBut beware, Trainer,\nthis is only the beginning.\nYour journey is about to unfold.\nNow let’s see if you’ve got what it takes to keep going!\nGood luck, and remember… Choose wisely!";


    return 0;
}
