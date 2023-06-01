#include <iostream>
#include <string>

using namespace std;

// funkcja do zamieniania wartosci
void swap_all(string & name, string & curr_name,unsigned int & abilities, unsigned int & curr_abilities, float & height, float & curr_height, int & task_speed, int & curr_task_speed) {
    swap(name, curr_name);
    swap(abilities, curr_abilities);
    swap(height, curr_height);
    swap(task_speed, curr_task_speed);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int n; // n - liczba wiosek / liczba zestawow danych
    int m; // m - liczba mieszkancow wioski
    unsigned int first_criteria, second_criteria, third_criteria; // kryteria
    string name, curr_name; // imiona
    unsigned int abilities, curr_abilities = 0; // umiejetnosci - kryterium 1
    float height, curr_height = 0; // wzrost - kryterium 2
    int task_speed, curr_task_speed = 0; // czynnosci na godzine - kryterium 3

    // pobieranie liczby wiosek / zestawow danych
    cin >> n;

    // warunek n
    if((n >= 1) && (n <= 10)) {
        for(int i = 0; i < n; i++) {
            // pobieranie ilosci osob w wiosce
            cin >> m;
            // pobieranie kryteriow
            cin >> first_criteria >> second_criteria >> third_criteria;

            // warunek m
            if((m >= 1) && (m <= 2000000)) {
                for(int j = 0; j < m; j++) {
                    // pobieranie wartosci kryteriow dla danej osoby
                    cin >> name >> abilities >> height >> task_speed;

                    // jesli warunek sie zgadza zamien obecne wartosci zmiennych ze znalezionymi
                    if(first_criteria == 1) {
                        if(abilities > curr_abilities) {
                            swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                        } else if(abilities == curr_abilities) {
                            if(second_criteria == 2) {
                                if(height > curr_height) {
                                    swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                } else if(height == curr_height) {
                                    if(task_speed > curr_task_speed) {
                                        swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                    }
                                }
                            } else if(second_criteria == 3) {
                                if(task_speed > curr_task_speed) {
                                    swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                } else if(task_speed == curr_task_speed) {
                                    if(height > curr_height) {
                                        swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                    }
                                }
                            }
                        }
                    } else if(first_criteria == 2) {
                        if(height > curr_height) {
                            swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                        } else if(height == curr_height) {
                            if(second_criteria == 1) {
                                if(abilities > curr_abilities) {
                                    swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                } else if(abilities == curr_abilities) {
                                    if(task_speed > curr_task_speed) {
                                        swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                    }
                                }
                            } else if(second_criteria == 3) {
                                if(task_speed > curr_task_speed) {
                                    swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                } else if(task_speed == curr_task_speed) {
                                    if(abilities > curr_abilities) {
                                        swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                    }
                                }
                            }
                        }
                    } else if(first_criteria == 3) {
                        if(task_speed > curr_task_speed) {
                            swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                        } else if(task_speed == curr_task_speed) {
                            if(second_criteria == 1) {
                                if(abilities > curr_abilities) {
                                    swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                } else if(abilities == curr_abilities) {
                                    if(height > curr_height) {
                                        swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                    }
                                }
                            } else if(second_criteria == 2) {
                                if(height > curr_height) {
                                    swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                } else if(height == curr_height) {
                                    if(abilities > curr_abilities) {
                                        swap_all(name, curr_name, abilities, curr_abilities, height, curr_height, task_speed, curr_task_speed);
                                    }
                                }
                            }
                        }
                    }
                }
                // zerowanie wartosci zmiennych po przejsciu calego zestawu
                cout << curr_name << '\n';
                curr_name = "";
                curr_abilities = 0;
                curr_height = 0;
                curr_task_speed = 0;
            }
        }
    }

    return 0;
}
