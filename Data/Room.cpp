#include "Room.h"

Room::Room(int number) : roomNumber(number), isBooked(false), guestName("") {}

int Room::getRoomNumber() const { return roomNumber; }
bool Room::getBookingStatus() const { return isBooked; }
string Room::getGuestName() const { return guestName; }

void Room::bookRoom(const string& name) {
    if (!isBooked) {
        isBooked = true;
        guestName = name;
        cout << "Room " << roomNumber << " booked by " << guestName << "\n";
    } else {
        cout << "Room " << roomNumber << " is already booked.\n";
    }
}

void Room::cancelBooking() {
    if (isBooked) {
        cout << "Booking for room " << roomNumber << " canceled.\n";
        isBooked = false;
        guestName = "";
    } else {
        cout << "Room " << roomNumber << " is not booked.\n";
    }
}
