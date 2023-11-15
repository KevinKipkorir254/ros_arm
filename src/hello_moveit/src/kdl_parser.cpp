#include <iostream>
#include <kdl_parser/kdl_parser.hpp>



int main()
{
KDL::Tree my_tree;
if (!kdl_parser::treeFromFile("r6bot.urdf.xacro", my_tree))
{
    std::cout << "Failed to construct kdl tree" ;
}
else 
{
    std::cout << "kdl tree contsructed";
}



using namespace std;
    cout << "Geeks for Geeks!";
    return 0;
}