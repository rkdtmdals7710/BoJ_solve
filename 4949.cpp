#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin, s);  

    istringstream iss(s);
    string token;

    while (getline(iss, token, '.')) {  

        int l_round = 0, r_round = 0, l_square = 0, r_square = 0;

        for (int i = 0; i < token.size(); i++) {
            if (token[i] == '(')
                l_round++;
            else if (token[i] == ')')
                r_round++;
            else if (token[i] == '[')
                l_square++;
            else if (token[i] == ']')
                r_square++;
        }

        if (l_round == r_round && l_square == r_square)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
