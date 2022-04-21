//
// Created by Zach Dupureur on 4/19/22.
//

#include "header.h"


// Class Definitions
void graph::addEdge(std::vector<int> myVec[], int i, int j) {
    myVec[i].push_back(j);
    myVec[j].push_back(i);
}

void graph::makeGraph() {
    bool filefound = false;
    std::fstream openFile;
    while (!filefound) {
        std::cout << "Please enter the file path to your Network File Adjacency List.\n";
        getline(std::cin, *inputFile);
        try {
            openFile.open(*inputFile);
            if (!openFile.is_open()) {
                std::cout << "Could not open file or file not found. Please try again.\n";
            }
            else {
                std::cout << "File opened. Making graph...\n";
                filefound = true;
            }
        }
        catch (std::exception &e) {
            std::cerr << "Caught exception..." << e.what() << std::endl;
        }
    }


}; // TODO

void graph::clearGraph() {}; // TODO


void cinClear() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


