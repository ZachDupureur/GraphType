//
// Created by Zach Dupureur on 4/19/22.
//

#include "header.h"


// Class Definitions
void graph::addEdge(std::vector<int> myVec[], int i, int j) {
    myVec[i].push_back(j);
    myVec[j].push_back(i);
}

void graph::makeGraph() {}; // TODO

void graph::clearGraph() {}; // TODO

