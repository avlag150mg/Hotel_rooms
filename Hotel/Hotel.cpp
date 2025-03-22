#include "Hotel.h"

Hotel::Hotel(int totalRooms) {
    for (int i = 1; i <= totalRooms; i++) {
        rooms.emplace_back(i);
    }
}

void Hotel::bookRoom(int roomNumber, const string& guestName) {
    if (roomNumber > 0 && roomNumber <= rooms.size()) {
        if (!rooms[roomNumber - 1].getBookingStatus()) {
            rooms[roomNumber - 1].bookRoom(guestName);
            guestList.push_back(guestName); 
        } else {
            cout << "Room " << roomNumber << " is already booked.\n";
        }
    } else {
        cout << "Invalid room number!\n";
    }
}

void Hotel::cancelBooking(int roomNumber) {
    if (roomNumber > 0 && roomNumber <= rooms.size()) {
        if (rooms[roomNumber - 1].getBookingStatus()) {
            string guestName = rooms[roomNumber - 1].getGuestName();
            rooms[roomNumber - 1].cancelBooking();

            // видаляє гостя зі списку
            guestList.erase(remove(guestList.begin(), guestList.end(), guestName), guestList.end());
        } else {
            cout << "Room " << roomNumber << " is not booked.\n";
        }
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

void Hotel::showGuestList() const {
    cout << "Guest List:\n";
    if (guestList.empty()) {
        cout << "Жоден гість не забронював номер.\n";
    } else {
        for (const auto& guest : guestList) {
            cout << "- " << guest << "\n";
        }
    }
}
