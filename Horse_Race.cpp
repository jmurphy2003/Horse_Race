#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main() {
    srand(time(NULL));

    int horses[NUM_HORSES];

    for (int i = 0; i < NUM_HORSES; i++) {
        horses[i] = 0;
    }

    bool raceOver = false;
    string dummy;

    for (int i = 0; i < NUM_HORSES; i++) {
        printLane(i, horses);
    }

    while (!raceOver) {
        cout << "Press enter for another turn";
        getline(cin, dummy);

        for (int i = 0; i < NUM_HORSES; i++) {
            advance(i, horses);
        }

        for (int i = 0; i < NUM_HORSES; i++) {
            printLane(i, horses);
        }

        for (int i = 0; i < NUM_HORSES; i++) {
            if (isWinner(i, horses)) {
                cout << "..............." << endl;
                cout << "Horse " << i << " WINS!!!" << endl;
                raceOver = true;
            }
        }
    }

    return 0;
}

void advance(int horseNum, int* horses) {
    int coin = rand() % 2;

    if (coin == 1) {
        if (horses[horseNum] < TRACK_LENGTH - 1) {
            horses[horseNum]++;
        }
    }
}

void printLane(int horseNum, int* horses) {
    int position = horses[horseNum];

    for (int i = 0; i < TRACK_LENGTH; i++) {
        if (i == position) {
            cout << horseNum;
        } else {
            cout << ".";
        }
    }
    cout << endl;
}

bool isWinner(int horseNum, int* horses) {
    return horses[horseNum] == TRACK_LENGTH - 1;
}