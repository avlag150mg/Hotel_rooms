#ifndef HOTEL_H
#define HOTEL_H

#include <vector>
#include "../room/Room.h"

class Hotel {
private:
    vector<Room> rooms;

public:
    Hotel(int totalRooms);
    void bookRoom(int roomNumber, const string& guestName);
    void cancelBooking(int roomNumber);
    void showAvailableRooms() const;
};

#endif
