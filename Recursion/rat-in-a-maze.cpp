#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> &visited, vector<vector<int>> &maze, int n) {
    if((x >= 0 && x < n) && (y >=0 && y < n) && visited[x][y] == 0 && maze[x][y] == 1) {
        return true;
    }
    else {return false;}
    // return false;
}

void solve(vector<vector<int>> &maze, vector<vector<int>> &visited, string path, int x, int y, vector<string> &ans, int n) {

    //base case
    if(x == n-1 && y == n-1) {
        ans.push_back(path);
        return;
    } 

    visited[x][y] = 1;
    // int newx, newy;

    //down
    int newx = x+1;
    int newy = y;

    if(isSafe(newx, newy, visited, maze, n)) {
        path.push_back('D');
        solve(maze, visited, path, newx, newy, ans,  n);
        path.pop_back();
    }

    //up
    newx = x-1;
    newy = y;

    if(isSafe(newx, newy, visited, maze, n)) {
        path.push_back('U');
        solve(maze, visited, path, newx, newy, ans,  n);
        path.pop_back();
    }

    //left
    newx = x;
    newy = y-1;

    if(isSafe(newx, newy, visited, maze, n)) {
        path.push_back('L');
        solve(maze, visited, path, newx, newy, ans,  n);
        path.pop_back();
    }

    //right
    newx = x;
    newy = y+1;

    if(isSafe(newx, newy, visited, maze, n)) {
        path.push_back('R');
        solve(maze, visited, path, newx, newy, ans,  n);
        path.pop_back();
    }

    visited[x][y] = 0;

}

int main()
{
    vector<vector<int>> maze {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}}; 
    int n = maze.size();

    vector<string> ans;

    int srcx = 0;
    int srcy = 0;
    vector<vector<int>> visited {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    string path = ""; 

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; i < n; j++) {
    //         visited[i][j] = 0;
    //     }
    // }

    

    solve(maze, visited, path, srcx, srcy, ans, n);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] <<  " ";
    } cout << endl;
    
    
    return 0;
}