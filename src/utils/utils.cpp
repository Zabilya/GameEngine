//
// Created by 17776048 on 2019-09-05.
//

#include "utils.h"

int checkNumberOfAttributes() {
    int nrAttributes;
    glGetIntegerv(GL_MAX_VERTEX_ATTRIBS, &nrAttributes);
    return nrAttributes;
}

void showOpenglVersion() {
    cout << "Version is = " << glGetString(GL_VERSION) << endl;
}

void enablePoligonMode(bool isEnable) {
    if (isEnable) {
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    }
}