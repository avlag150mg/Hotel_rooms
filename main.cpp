#include "Hotel.h"

int main() {
    Hotel hotel(10);

    hotel.showAvailableRooms();
    hotel.bookRoom(3, "Maxim");
    hotel.bookRoom(5, "Nazar");
    hotel.showAvailableRooms();
    hotel.cancelBooking(3);
    hotel.showAvailableRooms();

    return 0;
}