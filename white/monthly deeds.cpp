#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
    vector<vector<string>>f(31);
    int Q, g = 1;
    cin >> Q;
    for (int j = 1; j <= Q; ++j) {
        string input;
        cin >> input;
        if (input == "ADD") {
            string s;
            int i;
            cin >> i >> s;
            f[i - 1].push_back(s);
        }
        else if (input == "DUMP") {
            int i;
            cin >> i;

            cout << f[i - 1].size() << " ";
            for (auto c : f[i - 1]) {
                cout << c << " ";
            }
            cout << endl;
        }
        else if (input == "NEXT") {
            g++;
            if (g == 13) g = 1;
            if ((g == 1) || (g == 3) || (g == 5) || (g == 7) || (g == 8) || (g == 10) || (g == 12)) f.resize(31);


            if ((g == 4) || (g == 6) || (g == 9) || (g == 11)) {
                if (f.size() <= 30) f.resize(30);
                else {
                    for (auto c : f[30]) {
                        f[29].push_back(c);
                    }
                    f.resize(30);
                }
            }
            if (g == 2) {
                for (int h = 27; h < f.size(); ++h) {
                    for (auto c : f[h]) {
                        f[27].push_back(c);
                    }
                }
                f.resize(28);
            }

        }

    }
    return 0;
}
