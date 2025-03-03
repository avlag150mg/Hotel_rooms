#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>
using namespace std;

class Room {
private:
    int roomNumber;
    bool isBooked;
    string guestName;

public:
    Room(int number);
    int getRoomNumber() const;
    bool getBookingStatus() const;
    string getGuestName() const;
    void bookRoom(const string& name);
    void cancelBooking();
};

#endif // ROOM_H