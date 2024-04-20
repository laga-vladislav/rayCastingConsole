#include <iostream>

int WIDTH = 120;
int HEIGHT = 30;

int main()
{
    char* screen = new char[WIDTH * HEIGHT + 1];
    screen[WIDTH * HEIGHT] = '\0';
    for (int i = 0; i < WIDTH; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            float x = (float)i / WIDTH;
            float y = (float)j / HEIGHT;
            if (x * x + y * y <= 0.25)
                screen[i + j * WIDTH] = 'o';
            else
                screen[i + j * WIDTH] = ' ';
        }
    }
    printf(screen);
    getchar();
    delete[] screen;
    return 0;
}
