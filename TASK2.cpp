#include <bits/stdc++.h>
using namespace std;

int generateRandomNumber(){
    srand(time(nullptr));
    return rand()%1000 + 1;
}

void game(int ans){
    int x= -1;
    cout << "Enter your first guess between 1 and 1000 (inclusive)" << endl;
    cin >> x;
    int turn = 1;
    while(x != ans){
        if(x > ans){
            cout << "Guess a lower number" << endl;
        }
        else{
            cout << "Guess a higher number" << endl;
        }
        turn++;
        cin >> x;
    }
    cout << "Congratulations!! You guessed it in " << turn << " turns" << endl;
    return;
}


int main(){
    int randomNumber = generateRandomNumber();
    game(randomNumber);
    return 0;
}
