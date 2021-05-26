#include "doctest.h"
#include "BinaryTree.hpp"
using namespace ariel;


int rand_num_0_to_1(){
    return (float)rand()/RAND_MAX;
}

int rand_num_0_to_100(){
    return rand()%100;
}

TEST_CASE("add left and right")
{
    ariel::BinaryTree<int> tree;
    tree.add_root(0);
    CHECK_NOTHROW(tree.add_left(0,1));
    CHECK_NOTHROW(tree.add_left(0,2));
    CHECK_NOTHROW(tree.add_right(0,3));
    CHECK_NOTHROW(tree.add_right(0,4));
    CHECK_NOTHROW(tree.add_right(0,5));
    CHECK_NOTHROW(tree.add_left(1,1));
    CHECK_NOTHROW(tree.add_left(1,2));
    CHECK_NOTHROW(tree.add_right(3,3));
    CHECK_NOTHROW(tree.add_right(4,4));
    CHECK_NOTHROW(tree.add_right(5,5));



}

TEST_CASE("Adding to nonexistent node")
{
    ariel::BinaryTree<int> tree;
    tree.add_root(0);
    CHECK_THROWS(tree.add_left(1,2));
    CHECK_THROWS(tree.add_left(1,5));
    CHECK_THROWS(tree.add_left(1,2));
    CHECK_THROWS(tree.add_left(1,3));
    CHECK_THROWS(tree.add_left(1,4));
    CHECK_THROWS(tree.add_left(1,5));
    CHECK_THROWS(tree.add_left(2,2));
    CHECK_THROWS(tree.add_left(3,5));
    CHECK_THROWS(tree.add_left(4,2));
    CHECK_THROWS(tree.add_left(5,3));
    CHECK_THROWS(tree.add_left(6,4));
    CHECK_THROWS(tree.add_left(7,5));
}

