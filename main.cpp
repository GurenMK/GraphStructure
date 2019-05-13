#include <iostream>
#include <set>
#include <cassert>
#include "graph.h"

using namespace main_savitch_15;

int main() {

    graph<int> g;
    g.add_vertex(1);
    g.add_vertex(2);
    g.add_vertex(3);
    g.add_vertex(4);
    g.add_vertex(5);
    g.add_vertex(6);

    g.add_edge(1,2);
    assert(g.is_edge(1,2));
    g.add_edge(1,3);
    assert(g.is_edge(1,3));
    g.add_edge(1,4);
    assert(g.is_edge(1,4));
    g.add_edge(2,3);
    assert(g.is_edge(2,3));
    g.add_edge(2,4);
    assert(g.is_edge(2,4));
    g.add_edge(3,5);
    assert(g.is_edge(3,5));
    g.add_edge(5,6);
    assert(g.is_edge(5,6));
    g.add_edge(1,6);
    assert(g.is_edge(1,6));
    g.add_edge(3,4);
    assert(g.is_edge(3,4));

    assert(g.vertex_number(1) == 0);
    assert(g.vertex_number(6) == 5);

    int n1 = 1;
    std::set<int> nbr1 = g.neighbors(n1);
    std::cout << "\nNeighbors of " << n1 << ": ";
    for (std::set<int>::iterator itt=nbr1.begin(); itt!=nbr1.end(); ++itt) {
        std::cout << *itt << " ";
    }

    int n2 = 2;
    std::set<int> nbr2 = g.neighbors(n2);
    std::cout << "\nNeighbors of " << n2 << ": ";
    for (std::set<int>::iterator itt=nbr2.begin(); itt!=nbr2.end(); ++itt) {
        std::cout << *itt << " ";
    }

    int n3 = 3;
    std::set<int> nbr3 = g.neighbors(n3);
    std::cout << "\nNeighbors of " << n3 << ": ";
    for (std::set<int>::iterator itt=nbr3.begin(); itt!=nbr3.end(); ++itt) {
        std::cout << *itt << " ";
    }

    int n4 = 4;
    std::set<int> nbr4 = g.neighbors(n4);
    std::cout << "\nNeighbors of " << n4 << ": ";
    for (std::set<int>::iterator itt=nbr4.begin(); itt!=nbr4.end(); ++itt) {
        std::cout << *itt << " ";
    }

    int n5 = 5;
    std::set<int> nbr5 = g.neighbors(n5);
    std::cout << "\nNeighbors of " << n5 << ": ";
    for (std::set<int>::iterator itt=nbr5.begin(); itt!=nbr5.end(); ++itt) {
        std::cout << *itt << " ";
    }

    int n6 = 6;
    std::set<int> nbr6 = g.neighbors(n6);
    std::cout << "\nNeighbors of " << n6 << ": ";
    for (std::set<int>::iterator itt=nbr6.begin(); itt!=nbr6.end(); ++itt) {
        std::cout << *itt << " ";
    }

    std::cout << "\n";
    
    g.remove_edge(1,4);
    assert(!g.is_edge(1,4));

    return 0;
}