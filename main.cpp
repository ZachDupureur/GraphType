///
/// Created by Zach Dupureur on 04/19/2022
///
#include "header.h"
int main() {
    graph myGraph;
    myGraph.makeGraph();
    //myGraph.printGraph();
    myGraph.bfTraversal(4);
    myGraph.bfTraversal(1);
    myGraph.bfTraversal(2);
}


/******************************************TESTING BELOW****************************************
File opened. Making graph...
Done!
Breadth First Traversal.....
Visiting: Chicago
Visiting: Denver
Visiting: New_Orleans
Visiting: Los_Angeles
Visiting: San_Francisco
Visiting: Miami
Visiting: New_York
Visiting: Boston
Breadth First Traversal.....
Visiting: Los_Angeles
Visiting: Denver
Visiting: Chicago
Visiting: New_York
Visiting: San_Francisco
Visiting: Miami
Visiting: New_Orleans
Visiting: Boston
Breadth First Traversal.....
Visiting: San_Francisco
Visiting: Los_Angeles
Visiting: Denver
Visiting: Chicago
Visiting: New_York
Visiting: Miami
Visiting: New_Orleans
Visiting: Boston

Process finished with exit code 0

************************************************************************************************/