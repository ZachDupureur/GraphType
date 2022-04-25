//
// Created by Zach Dupureur on 4/19/22.
//

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include <string>
#include <fstream>

class graph {
public:
    std::vector<std::vector<int>> vertices;
    std::vector<std::string> names;
    std::vector<bool> visited;
    std::vector<int> queue;

    void makeGraph(); // Ask for path and then make a graph from adjacency list
    void clearGraph(); // Clear the graph
    void printGraph(); // Print the graph
    void bfTraversal(int root); // Breadth first traversal of graph
};

void cinClear();

#endif //HEADER_H
