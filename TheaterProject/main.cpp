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
    float price = askPrice();
    
//    initailize array of Seat objects
    class Seat chairArray[row_of_chairs][chairs_in_row];
    
    for(int row = 0; row < chairs_in_row; row++){
        for(int column = 0; column < row_of_chairs; column++){
            chairArray[row][column] = *new Seat;
            chairArray[row][column].occupied = 0;
            chairArray[row][column].row = row;
            chairArray[row][column].column = column;
            chairArray[row][column].price = price;
            
        }
    }
//    loop to display whether seats are available or not
    std::cout.setf(std::ios::fixed | std::ios::showpoint | std::ios::left);
    for(int row = 0; row < chairs_in_row; row++){
        std::cout << "row "<< (row + 1)<< " ";
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
// function to determin the Seat object's price property
float askPrice(){
    float price;
    std::cout << "How much is tonight's show? ";
    std::cin >> price;
    return price;
}
