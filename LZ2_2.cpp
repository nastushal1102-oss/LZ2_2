#include <iostream>
#include <windows.h> // Для коректного відображення кирилиці

using namespace std;

int main() {
    // Налаштування української мови в консолі
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int trainNumber;

    cout << "--- Довідкова служба вокзалу ---" << endl;
    cout << "Введіть номер поїзда: ";
    cin >> trainNumber;

    cout << "Пункт відправлення: ";

    // Перевірка номера поїзда
    switch (trainNumber) {
    case 63:
    case 64:
        cout << "Харків" << endl;
        break;
    case 91:
    case 92:
        cout << "Львів" << endl;
        break;
    case 105:
    case 106:
        cout << "Одеса" << endl;
        break;
    case 743:
        cout << "Дарниця (Київ)" << endl;
        break;
    case 8:
        cout << "Чернівці" << endl;
        break;
    default:
        cout << "Інформація про цей поїзд відсутня в базі." << endl;
        break;
    }

    return 0;
}