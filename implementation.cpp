//
// Created by Zach Dupureur on 4/19/22.
//

#include "header.h"


// Class Definitions

void graph::makeGraph() {
    std::string inputFile = "NULL";
    bool fileFound = false;
    std::ifstream openFile;
    while (!fileFound) {
        std::cout << "Please enter the file path to your Network File Adjacency List.\n";
        getline(std::cin, inputFile);
        try {
            openFile.open(inputFile);
            if (!openFile.is_open()) {
                std::cout << "Could not open file or file not found. Please try again.\n";
            }
            else {
                std::cout << "File opened. Making graph...\n";
                fileFound = true;
            }

            while(!openFile.eof()) {
                std::string input;
                int numVerts = 0;
                getline(openFile, input, '\n');
                if (isalpha(input.front())) {
                    names.push_back(input);
                    std::vector<int> edges;
                    getline(openFile, input, ' ');
                    numVerts = stoi(input);
                    getline(openFile,input, '\n');
                    for (auto i : input) {
                        if (isdigit((i))) {
                            edges.push_back(i-48);
                        }
                    }
                    vertices.push_back(edges);
                }
            }
            for (int i = 0; i < vertices.size(); i++){
                visited.push_back(false);
            }
            std::cout << "Done!" << std::endl;
        }
        catch (std::exception &e) {
            std::cerr << "Caught exception..." << e.what() << std::endl;
        }
    }
};

void graph::clearGraph() {
    names.clear();
    vertices.clear();
    queue.clear();
    visited.clear();
}


void graph::printGraph() {
    int counter = 0;
    for (auto i: names) {
        std::cout << "City Name: " << i << std::endl;
        std::cout << "Adjacent Cities: ";
        for (auto j: vertices[counter]) {
            std::cout << names.at(j-1) << " ";
        }
        std::cout << std::endl;
        counter++;
    }
}

void graph::bfTraversal(int root) {
    std::cout << "Breadth First Traversal.....\n";
    int counter = root-1;
    visited[counter] = true;
    queue.push_back(counter);

    while(!queue.empty()) {
        std::cout << "Visiting: " << names[queue.front()] << std::endl;
        for (auto i : vertices[queue.front()]) {
            if (!visited[i-1]) {
                visited[i-1] = true;
                queue.push_back(i-1);
            }
        }
        queue.erase(queue.begin());
    }

    for (auto i:visited) {
        i = false;
    }
};

void cinClear() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


