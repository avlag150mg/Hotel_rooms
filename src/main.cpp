#include "../hotel//Hotel.h"
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Hotel hotel(10);  //готель із 10 кімнатами
    int choice;

    do {
        cout << "\n=== Система бронювання готелю ===\n";
        cout << "1. Показати доступні кімнати\n";
        cout << "2. Забронювати кімнату\n";
        cout << "3. Скасувати бронювання\n";
        cout << "4. Вийти\n";
        cout << "Виберіть опцію: ";
        cin >> choice;

        switch (choice) {
        case 1: {  //показати доступні кімнати
                hotel.showAvailableRooms();
                break;
        }
        case 2: {
                int roomNumber;
                string guestName;
                cout << "Введіть номер кімнати для бронювання: ";
                cin >> roomNumber;
                cin.ignore();
                cout << "Введіть ім'я гостя: ";
                getline(cin, guestName);
                hotel.bookRoom(roomNumber, guestName);
                break;
        }
        case 3: {
                int roomNumber;
                cout << "Введіть номер кімнати для скасування бронювання: ";
                cin >> roomNumber;
                hotel.cancelBooking(roomNumber);
                break;
        }
        case 4:
            cout << "Вихід із програми...\n";
            break;
        default:
            cout << "Невірний вибір! Спробуйте ще раз.\n";
        }
    } while (choice != 4);

    return 0;
}
