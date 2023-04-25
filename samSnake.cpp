#include <iostream>
using namespace std;
bool gameover;
const int width = 50;
const int height = 50;
int x,y,foodX,foodY,score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void draw ();

int main ()
{
    gameover = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    foodX = rand() & width;
    foodY = rand() & height;
    draw();
    return 0;
}

void draw (){
    system ("cls");

    for (int i = 0; i < width + 2; i++)
    {
        cout << "-";
    }
}
