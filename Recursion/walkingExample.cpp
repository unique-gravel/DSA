#include <iostream>
using namespace std;

void reachHome(int src, int dest) {

    //base case
    if(dest == 0) {
        cout << "pahuch gaya :)" << endl; 
    }
    else {
        cout << "location: " << src << endl;
        reachHome(src+1, dest-1);
    }
}

int main()
{

    int src = 1;
    int dest = 10; // distance between starting point and home
    reachHome(src, dest);
    
    return 0;
}