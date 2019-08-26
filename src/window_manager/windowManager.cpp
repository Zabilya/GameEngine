//
// Created by Илья Заболотний on 24/08/2019.
//

#include "windowManager.h"

using namespace std;

void frameBufferSizeCallback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
    cout << "ViewPort size is: " << width << " " << height << endl;
}
