#include <iostream>
#include <string>

using namespace std;

int main() {


    bool meme = true;
    bool göt = false;

    string answer;

    cout << "What's my choice?" << endl;
    cin >> answer;
    
    if (answer == "meme" && meme == true) {
        cout << "You chose meme!" << endl;
    } else if (answer == "göt" && göt == false) {
        cout << "False" << endl;
    }


    

    return 0;
}