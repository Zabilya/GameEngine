//
// Created by Azure Void on 25.02.2020.
//

#include "../../include/GameRender.h"


void GameRender::Init() {

}

void GameRender::DrawObjects(vector<GameObject*> *objects, glm::mat4 view) { //TODO: should be const idk how
    glm::mat4 model;
    for (auto object : *objects) {
        Shader shader = object->GetShader();
        shader.SetMatrix4("view", view);
        model = glm::mat4(1.0f);
        model = glm::translate(model, object->GetPosition());
        model = glm::scale(model, object->GetScale());
        object->GetShader().SetMatrix4("model", model);
        object->GetModel().Draw(object->GetShader());
    }
}
