#ifndef HOTEL_H
#define HOTEL_H

#include <vector>
#include "../room/Room.h"

class Hotel {
private:
    vector<Room> rooms;
    vector<string> guestList;

public:
    Hotel(int totalRooms);
    void bookRoom(int roomNumber, const string& guestName);
    void cancelBooking(int roomNumber);
    void showAvailableRooms() const;
    void showGuestList() const;
};

#endif
