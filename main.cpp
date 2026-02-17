#include <iostream>
#include <string>
#include "BST.h"

int main()
{
    BST<int> intBST;
    BST<std::string> strBST;

    intBST.insert(10);
    intBST.insert(5);
    intBST.insert(12);
    intBST.insert(4);
    intBST.insert(8);
    intBST.insert(6);
    intBST.insert(7);
    intBST.insert(9);

    std::cout << std::endl 
               << "Tree:" << std::endl;
     intBST.graph(std::cout);

    intBST.inorder(std::cout);
    std::cout << std::endl;

    bool bFound = intBST.search(7);
    std::cout << "Search for 7 = " << std::boolalpha << bFound << std::endl;
    bFound = intBST.search(11);
    std::cout << "Search for 11 = " << std::boolalpha << bFound << std::endl;
    bFound = intBST.search(1);
    std::cout << "Search for 1 = " << std::boolalpha << bFound << std::endl;
    bFound = intBST.search(15);
    std::cout << "Search for 15 = " << std::boolalpha << bFound << std::endl;
    intBST.insert(14);

    std::cout << std::endl
              << "Verification Tree:" << std::endl;
    intBST.graph(std::cout);
    intBST.inorder(std::cout);
    std::cout << std::endl;
    intBST.preorder(std::cout);
    std::cout << std::endl;
    intBST.postorder(std::cout);
    std::cout << std::endl;

    try
    {
        intBST.insert(14);
    }
    catch(const std::exception& e)
    {
        std::cout << "Expected Exception on inserting 14: " << e.what() << std::endl;
    }

    try
    {
        intBST.remove(5);
    }
    catch(const std::exception& e)
    {
        std::cout << "!!Unexpected Error: " << e.what() << std::endl;
    }

    //std::cout << std::endl
    //          << "Tree:" << std::endl;
    //intBST.graph(std::cout);

    intBST.inorder(std::cout);
    std::cout << std::endl;
    try 
    {
        intBST.remove(5);
    }
    catch (std::runtime_error& e) 
    {
        std::cout << "Expected Exception on removing 5: " << e.what() << std::endl;
    }
    try
    {
        intBST.remove(11);
    }
    catch(const std::exception& e)
    {
        std::cout << "Expected Exception on removing 11: " << e.what() << std::endl;
    }
    
    std::cout << std::endl 
              << "Inorder: " << std::endl;
    intBST.inorder(std::cout);
    std::cout << std::endl;

    std::cout << std::endl
              << "Preorder: " << std::endl;
    intBST.preorder(std::cout);
    std::cout << std::endl;

    std::cout << std::endl
              << "Postorder: " << std::endl;
    intBST.postorder(std::cout);
    std::cout << std::endl;

    std::cout << std::endl
              << "Tree: " << std::endl;
    intBST.graph(std::cout);
    std::cout << std::endl;


    strBST.insert("hello");
    strBST.insert("world");
    strBST.insert("foo");
    strBST.insert("bar");
    std::cout << std::endl
              << "Inorder: " << std::endl;
    strBST.inorder(std::cout);
    std::cout << std::endl;

    std::cout << std::endl
              << "Tree:" << std::endl;
    strBST.graph(std::cout);

    std::cout << std::endl
              << "Preorder: " << std::endl;
    strBST.preorder(std::cout);
    std::cout << std::endl;

    std::cout << std::endl
              << "Postorder: " << std::endl;
    strBST.postorder(std::cout);
    std::cout << std::endl;
}
