//
//  seats.hpp
//  TheaterProject
//
//  Created by Peter on 10/23/17.
//  Copyright © 2017 Peter. All rights reserved.
//

#ifndef seats_hpp
#define seats_hpp
class Seat
{
public:
    Seat();
    Seat(float, int, int, int);
    float price;
    int row;
    int column;
    int occupied;
};

#endif /* seats_hpp */
