#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(0, "");
    int step;
    string chain = "0";
    cout << "Назначть колличество шагов:";
    cin >> step;
    for (int i = 0;i < step;i++) {
        string pluss = chain;
        for (int j = 0;j < chain.size();j++) {
            if (chain[j] == '0') {
                pluss[j] = '1';
            }
            if (chain[j] == '1') {
                pluss[j] = '0';
            }
        }
        chain.append(pluss);
        cout << chain << endl<<endl;
    }
    return 0;
}