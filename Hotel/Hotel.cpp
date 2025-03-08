#include "Hotel.h"

Hotel::Hotel(int totalRooms) {
    for (int i = 1; i <= totalRooms; i++) {
        rooms.emplace_back(i);
    }
}

void Hotel::bookRoom(int roomNumber, const string& guestName) {
    if (roomNumber > 0 && roomNumber <= rooms.size()) {
        rooms[roomNumber - 1].bookRoom(guestName);
    } else {
        cout << "Invalid room number!\n";
    }
}

void Hotel::cancelBooking(int roomNumber) {
    if (roomNumber > 0 && roomNumber <= rooms.size()) {
        rooms[roomNumber - 1].cancelBooking();
    } else {
        cout << "Invalid room number!\n";
    }
}

void Hotel::showAvailableRooms() const {
    cout << "Available rooms: ";
    for (const auto& room : rooms) {
        if (!room.getBookingStatus()) {
            cout << room.getRoomNumber() << " ";
        }
    }
    cout << "\n";
}

