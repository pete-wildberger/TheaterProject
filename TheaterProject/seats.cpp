//
//  seats.cpp
//  TheaterProject
//
//  Created by Peter on 10/23/17.
//  Copyright © 2017 Peter. All rights reserved.
//

#include "seats.hpp"

Seat::Seat(float a, int b, int c, int d)
{
    price = a;
    row = b;
    column = c;
    occupied = d;
}
