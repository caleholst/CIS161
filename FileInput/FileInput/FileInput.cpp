#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    string filename;

    while (true) {
        cout << "Enter the filename: ";
        cin >> filename;

        ifstream file(filename);
        if (file) {
            file.close(); 
            break;
        }
        else {
            cerr << "Error opening file" << endl;
        }
    }

    ifstream file(filename);

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string name;
        vector<int> scores;
        int score;

        iss >> name;

        while (iss >> score) {
            scores.push_back(score);
        }

        double sum = 0;
        for (int s : scores) {
            sum += s;
        }
        double average = scores.empty() ? 0 : sum / scores.size();

        cout << name << ": " << fixed << setprecision(2) << average << endl;
    }

    file.close();
    return 0;
}