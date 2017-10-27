//
//  main.cpp
//  TheaterProject
//
//  Created by Peter on 10/23/17.
//  Copyright © 2017 Peter. All rights reserved.
//

#include <iostream>
#include "headers.h"
#include "seats.cpp"





int main(int argc, const char * argv[]) {
//    define amount of rows and columns in the theater
    int chairs_in_row = 4;
    int row_of_chairs = 4;
    class Seat chairArray[row_of_chairs][chairs_in_row];
    
    for(int row = 0; row < chairs_in_row; row++){
        std::cout << "row "<< row << " ";
        for(int column = 0; column < row_of_chairs; column++){
            chairArray[row][column] = *new Seat;
            chairArray[row][column].occupied = 1;
        }
    }
//    loop to display whether seats are available or not
    std::cout.setf(std::ios::fixed | std::ios::showpoint | std::ios::left);
    for(int row = 0; row < chairs_in_row; row++){
        std::cout << "row "<< row << " ";
        for(int column = 0; column < row_of_chairs; column++){
            if(chairArray[row][column].occupied  == 0){
            std::cout << '#';
            } else {
            std::cout << '*';
            }
            }
         std::cout << std::endl;
        }
    return 0;
}
