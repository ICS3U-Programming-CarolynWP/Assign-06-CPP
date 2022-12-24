// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/12/23
// Gets the user input for 5 integers and a sum.
// Uses a function to determine the integer pairs.
// Displays it back to the user.

#include <array>
#include <iostream>
#include <list>

// Function to calculate the average
std::array<int, 2> Sum_Pairs(std::array<int, 5> list1, std::array<int, 5> 
list2, int sumUser) {
    // variables
    int sum;
    std::array<int, 2> pairsList;
    int sumAnswer = sumUser;
    int counter = 0;
    int counter2 = 1;

    // For loops which will go through every possible combination
    // To find pairs
    for (counter = 0; counter < 5; counter++) {
        // List 1 which will stay in place
        list1[counter];
        // List 2 which will go through the rest of the numbers
        // To compare
        list2[counter2];
        // Sum equals list1 plus list2
        sum = list1[counter] + list2[counter2];
        // If the sum is the sum answer
        if (sum == sumAnswer) {
            // Return the pairs list
            pairsList[0] = list1[counter];
            pairsList[1] = list2[counter2];
            return pairsList;
        }
        if (sum == sumAnswer) {
            // Increment the counter for list 1
            counter = counter + 1;
        // Else set pairs list at 0 to 0
        } else {
            pairsList[0] = 0;
        }
        // repeating the process
        if (counter2 == 4) {
            counter2 = 1;
            counter = counter + 1;
            // For loops which will go through every possible combination
            // To find pairs
            for (counter = 0; counter < 5; counter++) {
                // List 1 which will stay in place
                list1[counter];
                // List 2 which will go through the rest of the numbers
                // To compare
                list2[counter2];
                // Sum equals list1 plus list2
                sum = list1[counter] + list2[counter2];
                // If the sum is the sum answer
                if (sum == sumAnswer) {
                    // Return the pairs list
                    pairsList[0] = list1[counter];
                    pairsList[1] = list2[counter2];
                    return pairsList;
                }
                if (sum == sumAnswer) {
                    // Increment the counter for list 1
                    counter = counter + 1;
                    // Else set pairs list at 0 to 0
                } else {
                    pairsList[0] = 0;
                }
                // repeating the process
                if (counter2 == 4) {
                    counter2 = 1;
                    counter = counter + 1;
                    // For loops which will go through every possible combination
                    // To find pairs
                    for (counter = 0; counter < 3; counter++) {
                        // List 1 which will stay in place
                        list1[counter];
                        // List 2 which will go through the rest of the numbers
                        // To compare
                        list2[counter2];
                        // Sum equals list1 plus list2
                        sum = list1[counter] + list2[counter2];
                        // If the sum is the sum answer
                        if (sum == sumAnswer) {
                            // Return the pairs list
                            pairsList[0] = list1[counter];
                            pairsList[1] = list2[counter2];
                            return pairsList;
                        }
                        if (sum == sumAnswer) {
                            // Increment the counter for list 1
                            counter = counter + 1;
                            // Else set pairs list at 0 to 0
                        } else {
                            pairsList[0] = 0;
                        }
                        // repeating the process
                        if (counter2 == 4) {
                            counter2 = 1;
                            counter = counter + 1;
                            // For loops which will go through every possible combination
                            // To find pairs
                            for (counter = 0; counter < 2; counter++) {
                                // List 1 which will stay in place
                                list1[counter];
                                // List 2 which will go through the rest of the numbers
                                // To compare
                                list2[counter2];
                                // Sum equals list1 plus list2
                                sum = list1[counter] + list2[counter2];
                                // If the sum is the sum answer
                                if (sum == sumAnswer) {
                                    // Return the pairs list
                                    pairsList[0] = list1[counter];
                                    pairsList[1] = list2[counter2];
                                    return pairsList;
                                }
                                if (sum == sumAnswer) {
                                    // Increment the counter for list 1
                                    counter = counter + 1;
                                }
                                counter2 = counter2 + 1;
                            }
                    }
                }
            }
        }
        counter2 = counter2 + 1;
    }
}
    if (pairsList[0] == 0) {
        pairsList[0] = -1;
        return pairsList;
    }
}

// main()
int main() {
    // Variables
    std::array<int, 5> userList1, userList2;
    std::array<int, 2> pairs;
    int loopCounter, userNumber, userSum;
    std::string userNumberString, userSumString;

    // Title
    std::cout << "Sum Pairs\n";
    // For loop to ask the user for 5 numbers and add it to the list
    for (loopCounter = 0; loopCounter < 5; loopCounter++){
        std::cout << "Please enter a number: ";
        std::cin >> userNumberString;
        // Try Catch to make sure the number is an integer
        try {
            userNumber = stoi(userNumberString);
            float userNumberFloat = stof(userNumberString);
            // To make sure the user guess is not a decimal
            if (userNumberFloat != static_cast<int>(userNumberFloat) || userNumberFloat < 0) {
                std::cout << "Please enter a whole number!\n";
            } else {
                // Appending the number to the list
                userList1[loopCounter] = userNumber;
                std::cout << userList1[loopCounter] << " Added to the list\n";
                userList2[loopCounter] = userNumber;
            }

        } catch (std::invalid_argument) {
            std::cout << "Please enter an integer!\n";
        }
    }
    // Input for the sum
    std::cout << "Enter the number you would like as the sum: ";
    std::cin >> userSumString;

    // Try Catch for the user sum
    try {
        userSum = stoi(userSumString);
        float userSumFloat = stof(userSumString);

        // To make sure the user guess is not a decimal
        if (userSumFloat != static_cast<int>(userSumFloat) || userSumFloat < 0) {
                std::cout << "Please enter a whole number!\n";
        } else {
            // Calling the function
            pairs = Sum_Pairs(userList1, userList2, userSum);

            // IF ELSE to check if there are pairs or not and to display
            // Back to the user
            if (pairs[0] == -1) {
            std::cout << "None of your numbers equals " << userSum << "\n";
            } else {
            std::cout << "The pairs are: \n"
                        << pairs[0] << "," << pairs[1] << "\n";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter an integer!\n";
    }
}
