#include <cstdlib>
#include "List.h"
using namespace std;

//Main
int main(int argc, char** argv) {
    
    List Paul;
    
    Paul.AddNode(3);
    Paul.AddNode(5);
    Paul.AddNode(7);
    
    Paul.PrintList();
    
    Paul.DeleteNode(3);
    Paul.PrintList();
    return 0;
}

