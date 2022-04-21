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
    std::vector<int> edges;
    std::vector<int> vertices;

    void makeGraph(); // Ask for path and then make a graph from adjacency list
    void clearGraph(); // Clear the graph
    void printGraph(); // Print the graph
    void addEdge(std::vector<int> myVec[], int i, int j);
    void dfTraversal(); // Depth first traversal of graph
    void bfTraversal(); // Breadth first traversal of graph
};

void cinClear();


#endif //HEADER_H
