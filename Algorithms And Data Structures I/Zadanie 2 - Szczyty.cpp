#include <iostream>
#include <string>

using namespace std;

// wyswietlanie wynikow
void print_results(int n, string names[], unsigned int heights[]) {
    for(int i = 0; i < n; i++) {
        cout << names[i] << "-" << heights[i] << " ";
    }
}

// sortowanie
void sort(int n, string names[], unsigned int heights[]) {
    unsigned int buff;
    string buff_string;
    int count = 0;
    int j;

    // znalezienie ilosci poteg dwojki
    for(int i = 0; i < n; i++) {
        if(((heights[i] & (heights[i] - 1)) == 0) || (heights[i] == 1)) {
            count++;
        }
    }

    // zrobienie dwoch tablic z wynikami
    unsigned int* power_of_2_heights = new unsigned int[count];
    string* power_of_2_names = new string[count];

    unsigned int* heights_result = new unsigned int[n-count];
    string* names_result = new string[n-count];

    // podzielenie danych na dwie tablice - z potegami dwojki oraz bez
    int power_of_2_count = 0;
    int result_counter = 0;
    for(int i = 0; i < n; i++) {
        if(((heights[i] & (heights[i] - 1)) == 0) || (heights[i] == 1)) {
            power_of_2_heights[power_of_2_count] = heights[i];
            power_of_2_names[power_of_2_count] = names[i];
            power_of_2_count++;
        } else {
            heights_result[result_counter] = heights[i];
            names_result[result_counter] = names[i];
            result_counter++;
        }
    }

    // posortowanie tablicy bez poteg dwojki
    for(int i = 1; i < result_counter; i++) {
        buff = heights_result[i];
        buff_string = names_result[i];
        j = i - 1;

        while((j >= 0) && (heights_result[j] > buff)) {
            heights_result[j+1] = heights_result[j];
            names_result[j+1] = names_result[j];
            j--;
        }
        heights_result[j+1] = buff;
        names_result[j+1] = buff_string;
    }

    // posortowanie tablicy z potegami dwojki
    for(int i = 1; i < power_of_2_count; i++) {
        buff = power_of_2_heights[i];
        buff_string = power_of_2_names[i];
        j = i - 1;

        while((j >= 0) && (power_of_2_heights[j] > buff)) {
            power_of_2_heights[j+1] = power_of_2_heights[j];
            power_of_2_names[j+1] = power_of_2_names[j];
            j--;
        }
        power_of_2_heights[j+1] = buff;
        power_of_2_names[j+1] = buff_string;
    }

    // wyswietlenie wynikow
    print_results(power_of_2_count, power_of_2_names, power_of_2_heights);
    print_results(result_counter, names_result, heights_result);
    cout << '\n';

    // usuniecie dynamicznie zaalokowanych tablic
    delete[] heights_result;
    delete[] names_result;
    delete[] power_of_2_heights;
    delete[] power_of_2_names;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int t; // liczba testow - zestawow danych
    int n; // liczba szczytow

    // pobranie liczby zestawow
    cin >> t;

    for(int i = 0; i < t; i++) {
        // pobranie liczby szczytow w zestawie
        cin >> n;

        string *names = new string[n]; // nazwy szczytu
        unsigned int *heights = new unsigned int[n]; // wysokosci szczytow

        // pobranie danych
        for(int j = 0; j < n; j++) {
            cin >> names[j] >> heights[j];
        }

        // sortowanie pod wzgledem wysokosci
        sort(n, names, heights);

        // usuniecie dynamicznie zaalokowanych tablic
        delete[] names;
        delete[] heights;
    }

    return 0;
}