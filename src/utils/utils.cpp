//
// Created by 17776048 on 2019-09-05.
//

#include <GL/glew.h>

int checkNumberOfAttributes() {
    int nrAttributes;
    glGetIntegerv(GL_MAX_VERTEX_ATTRIBS, &nrAttributes);
    return nrAttributes;
}