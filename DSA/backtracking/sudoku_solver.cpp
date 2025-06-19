#include<bits/stdc++.h>
using namespace std;
int v[9][9];
/**
 * given 9 x 9
 * soduko
 * with 9 3 x 3
 * blocks
 * rule to solve the sudoko
 * on every row or colume or in big cell no number is repeated
 * number be choice from 1-9
 */
bool check(int i,int j,int k){
    int ii = (i/3)*3;
    int jj = (j/3)*3;
    for(int a = 0;a<9;a++){
        if(v[a][j]==k) return false; // Check column
        if(v[i][a]==k) return false; // Check row
    }
    for(int a = ii;a<ii+3;a++){
        for(int b = jj;b<jj+3;b++){
            if(v[a][b]==k) return false; // Check 3x3 block
        }
    }
    return true;

}
void travel(int ii,int jj){
    // Find the next empty cell (starting from (ii, jj))
    int next_i = ii;
    int next_j = jj;
    bool found_empty = false;

    for(int i = ii; i < 9; i++) {
        for(int j = (i == ii ? jj : 0); j < 9; j++) {
            if(v[i][j] == -1) {
                next_i = i;
                next_j = j;
                found_empty = true;
                break; // Found an empty cell, break from inner loop
            }
        }
        if (found_empty) {
            break; // Found an empty cell, break from outer loop
        }
    }

    // Base case: If no empty cell is found, the Sudoku is solved
    if (!found_empty) {
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        exit(0); // Solution found, terminate the program
    }

    // Try numbers 1 to 9 for the current empty cell (next_i, next_j)
    for(int k = 1; k <= 9; k++) {
        if(check(next_i, next_j, k)) {
            v[next_i][next_j] = k; // Place the number

            // Calculate the next position to travel to
            int travel_next_i = next_i;
            int travel_next_j = next_j + 1;
            if (travel_next_j == 9) {
                travel_next_i++;
                travel_next_j = 0;
            }

            travel(travel_next_i, travel_next_j); // Recurse to fill the next empty cell
            v[next_i][next_j] = -1; // Backtrack: undo the placement if the recursive call didn't lead to a solution
        }
    }
    // If we reach here, it means no number from 1-9 worked for (next_i, next_j)
    // The function will naturally return to the previous recursion level to backtrack.
}

int main(){
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
            cin>>v[i][j];
        }
    }
    travel(0,0);
    // If travel finishes without calling exit(0), it means no solution was found
    // (though for valid Sudoku puzzles, it should always find one if it's solvable).
    return 0;
}
/**
5 3 -1 -1 7 -1 -1 -1 -1
6 -1 -1 1 9 5 -1 -1 4
-1 9 8 -1 -1 -1 -1 6 -1
8 -1 -1 -1 6 -1 -1 -1 3
4 -1 -1 8 -1 3 -1 -1 1
7 -1 -1 -1 2 -1 -1 -1 6
-1 6 -1 -1 -1 -1 2 8 -1
-1 -1 -1 4 1 9 -1 -1 5
-1 -1 -1 -1 8 -1 -1 7 9
*/