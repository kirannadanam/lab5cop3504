//
// Created by kiran on 10/3/2024.
//
#include <iostream>
#include "StringData.h"
#include <string>
#include <chrono>
#include <vector>

long linear_search(std::vector<std::string>& container, std::string element)
{
    /*This method does a linear search to find the index of an element in a container.*/
    for (int i = 0; i < container.size(); i++)
    {
        if (container[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(std::vector<std::string>& container, std::string element)
{
    /*This method does a binary search to find the index of an element in a container.*/
    int lower = 0;
    int upper = container.size() - 1;
    // Binary search splits the list into halves each time it iterates in the loop.
    while (lower <= upper)
    {
        int middle = (lower + upper) / 2;
        // if the search finds the element, then it will return the index.
        if (container[middle] == element)
        {
            return middle;
        }
        // if the middle index is less than the element, then the first half of the list is ignored.
        else if (container[middle] < element)
        {
            lower = middle + 1;
        }
        // if the middle index is greater than the element, then the second half of the list is ignored.
        else
        {
            upper = middle - 1;
        }
    }
    return -1;
}


int main() {
    std::vector<std::string> string_data = getStringData();

    auto time_one = std::chrono::system_clock::now();
    long linear_not_here = linear_search(string_data, "not_here");
    auto time_two = std::chrono::system_clock::now();
    std::cout << "Linear Search for 'not_here': " << linear_not_here << std::endl;
    std::cout << "Time: " << (time_two - time_one) << std::endl << std::endl;

    time_one = std::chrono::system_clock::now();
    long linear_mzzzz = linear_search(string_data, "mzzzz");
    time_two = std::chrono::system_clock::now();
    std::cout << "Linear Search for 'mzzzz': " << linear_mzzzz << std::endl;
    std::cout << "Time: " << (time_two - time_one) << std::endl << std::endl;

    time_one = std::chrono::system_clock::now();
    long linear_aaaaa = linear_search(string_data, "aaaaa");
    time_two = std::chrono::system_clock::now();
    std::cout << "Linear Search for 'aaaaa': " << linear_aaaaa << std::endl;
    std::cout << "Time: " << (time_two - time_one) << std::endl << std::endl;

    time_one = std::chrono::system_clock::now();
    long binary_not_here = binary_search(string_data, "not_here");
    time_two = std::chrono::system_clock::now();
    std::cout << "Binary Search for 'not_here': " << binary_not_here << std::endl;
    std::cout << "Time: " << (time_two - time_one) << std::endl << std::endl;

    time_one = std::chrono::system_clock::now();
    long binary_mzzzz = binary_search(string_data, "mzzzz");
    time_two = std::chrono::system_clock::now();
    std::cout << "Binary Search for 'mzzzz': " << binary_mzzzz << std::endl;
    std::cout << "Time: " << (time_two - time_one) << std::endl << std::endl;

    time_one = std::chrono::system_clock::now();
    long binary_aaaaa = binary_search(string_data, "aaaaa");
    time_two = std::chrono::system_clock::now();
    std::cout << "Binary Search for 'aaaaa': " << binary_aaaaa << std::endl;
    std::cout << "Time: " << (time_two - time_one) << std::endl << std::endl;

    return 0;
}
