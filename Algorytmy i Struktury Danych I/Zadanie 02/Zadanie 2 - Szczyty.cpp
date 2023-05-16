#include <iostream>
#include <string>

using namespace std;

// struktura szczytów
struct Peak {
    string name;
    unsigned int height;
};

// wyświetlenie szczytów
void print_peaks(int size, Peak * peaks) {
    for(int i = 0; i < size; i++) {
        cout << peaks[i].name << "-" << peaks[i].height << " ";
    }
}

// funkcja sortująca
void sort(int size, Peak * peaks) {
    // zaalokowanie zmiennych potrzebnych do sortowania
    unsigned int height_buff;
    string name_buff;
    int counter = 0;
    int j;

    // znalezienie ilości potęg dwójki
    for(int i = 0; i < size; i++) {
        if(((peaks[i].height & (peaks[i].height - 1)) == 0) || (peaks[i].height == 1)) {
            counter++;
        }
    }

    // utworzenie dwóch dynamicznie zaalokowanych tablic struktur szczytów
    Peak * power_of_2 = new Peak[counter];
    Peak * not_power_of_2 = new Peak[size - counter];

    // ustawianie wartości w tablicy z potęgami dwójki i bez potęg dwójki
    int power_of_2_counter = 0;
    int not_power_of_2_counter = 0;
    for(int i = 0; i < size; i++) {
        if(((peaks[i].height & (peaks[i].height - 1)) == 0) || (peaks[i].height == 1)) {
            power_of_2[power_of_2_counter].height = peaks[i].height;
            power_of_2[power_of_2_counter].name = peaks[i].name;
            power_of_2_counter++;
        } else {
            not_power_of_2[not_power_of_2_counter].height = peaks[i].height;
            not_power_of_2[not_power_of_2_counter].name = peaks[i].name;
            not_power_of_2_counter++;
        }
    }

    // posortowanie tablicy bez potęg dwójki
    for(int i = 1; i < not_power_of_2_counter; i++) {
        height_buff = not_power_of_2[i].height;
        name_buff = not_power_of_2[i].name;
        j = i - 1;
        while((j >= 0) && (not_power_of_2[j].height > height_buff)) {
            not_power_of_2[j + 1].height = not_power_of_2[j].height;
            not_power_of_2[j + 1].name = not_power_of_2[j].name;
            j--;
        }
        not_power_of_2[j + 1].height = height_buff;
        not_power_of_2[j + 1].name = name_buff;
    }

    // posortowanie tablicy z potęgami dwójki
    for(int i = 1; i < power_of_2_counter; i++) {
        height_buff = power_of_2[i].height;
        name_buff = power_of_2[i].name;
        j = i - 1;
        while((j >= 0) && (power_of_2[j].height > height_buff)) {
            power_of_2[j + 1].height = power_of_2[j].height;
            power_of_2[j + 1].name = power_of_2[j].name;
            j--;
        }
        power_of_2[j + 1].height = height_buff;
        power_of_2[j + 1].name = name_buff;
    }


    // wyświetlenie wyników
    print_peaks(power_of_2_counter, power_of_2);
    print_peaks(not_power_of_2_counter, not_power_of_2);
    cout << "\n";

    // zwolnienie pamięci
    delete[] not_power_of_2;
    delete[] power_of_2;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int t;              // liczba zestawów danych
    int n;              // liczba szczytów

    // wprowadzenie liczby zestawów danych
    cin >> t;

    // pętla programowa
    for(int i = 0; i < t; i++) {
        // wprowadzenie liczby szczytów
        cin >> n;

        // utworzenie dynamicznie zaalokowanej tablicy struktur szczytów
        Peak * peaks = new Peak[n];

        // wprowadzenie danych do tablicy struktur szczytów
        for(int j = 0; j < n; j++) {
            cin >> peaks[j].name >> peaks[j].height;
        }

        // sortowanie szczytów
        sort(n, peaks);

        // zwolnienie pamięci
        delete[] peaks;
    }

    return 0;
}
