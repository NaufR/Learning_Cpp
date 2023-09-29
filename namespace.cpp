# include <iostream>

namespace example{
    int ex = 1;
}

int main() {
    using namespace example;    
    
    int ex = 2;         
    int ex2 = 4;
    int sum = ex + ex2;
    
    std::cout << ex << '\n'; //this using ex in local
    std::cout << sum << '\n';
    std::cout << example::ex; //in here prefix namespace to take another entities
/*
    using namespce std; // reason some people using this line is for save litte bit of typing 
    // (but the consecuention is theres a lot 
        of entities in std ) one alternitive you
        can do this instead:

    using std::cout;    // and you don't need to prefix it again in below
    cout << ex << '\n';
    cout << sum << '\n';

*/




    return 0;
}
