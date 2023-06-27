#include <iostream>
#include <random>

using namespace std;

int main() {
    int nombredenombres;
    int moins;
    int plus;

    cout << "Quel est la quantite de nombres random que tu souhaites obtenir";
    cin >> nombredenombres;

    cout << "Entrez la valeur minimale : ";
    cin >> moins;

    cout << "Entrez la valeur maximale : ";
    cin >> plus;

    random_device rd; 
    mt19937 random(rd()); 

    uniform_int_distribution<int> repartition(moins, plus); 

    for (int i = 0; i < nombredenombres; ++i) {
        int nombrerandom = repartition(random);
        cout << "Nombre random #" << i + 1 << ": " << nombrerandom << endl;
    }

    return 0;
}