#include <iostream>
#include <cmath>
using namespace std;

void printHashTriangle();
void countDownCountingUp();
void limitInnerLoop();
void drawHorizontalPyramid();
void drawVerticalPyramid();

int main()
{

    drawVerticalPyramid();
    return 0;
}

void drawVerticalPyramid(){
 int numRows = 21;
 int numColumns = ((numRows - 1) * 2);
 int midPoint = numColumns/2;

 cout << "drawing a vertical pyramid\n";

 // this wasn't in the book, just set the challenge to myself, took way too long on it
 for(int rows = 1; rows <= numRows; rows++){
    for(int cols = 1; cols <= numColumns; cols++){

           if(cols < (midPoint + rows) && cols > (midPoint - rows) ){
             cout << "#";
           }
           else {
             cout << " ";
           }
    }
    cout << "\n";
 }
}

void drawHorizontalPyramid(){
    cout << "experiment, count down by counting up, but subtracting 8 instead of 6\n";
    for(int row = 1; row <=7; row++){
        cout << (4 - std::abs(4 - row)) << "\n";
    }

    cout << "draw horizontal pyramid\n";

    int pyramidLevels = 25;
    // number of rows equal to max 'height' of pyramid multiplied by 2, with one deducted to take into account the 1 unit summit
    for(int row = 1; row <=(pyramidLevels * 2) - 1; row++){

        for(int hashNum = 1; hashNum <= (pyramidLevels - std::abs(pyramidLevels - row)); hashNum++){
            cout << "#";
        }
        cout << "\n";
    }
}

void limitInnerLoop(){
 cout << "limit inner loop\n";
 for(int row = 1; row <=5; row++){
    for(int hashNum = 1; hashNum <= 6 - row; hashNum++){
        cout << "#";
    }
    cout << "\n";
 }
}

void countDownCountingUp(){
    // workings (row * -1) + 6 can be reduced to (6 - row)
    cout << "Counting down by counting up\n";
    for(int row = 1; row <= 5; row++){
        cout << (6 - row) << "\n";
    }
}

void printHashTriangle(){
    cout << "Printing Hash Triangle:\n";
    int width = 5;
    int height = 5;

    for(int row = 0; row < height; row++){
        for(int i = 0; i < width; i++){
            cout << "#";
        }
        width--;
        cout << "\n";
    }
}

