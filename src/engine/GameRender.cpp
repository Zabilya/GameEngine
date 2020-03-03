//
// Created by Azure Void on 25.02.2020.
//

#include "../../include/DebugHelper.h"
#include "../../include/GameRender.h"


void GameRender::Init() {
    try {
        DebugHelper::Log(new string("Render inited."));
    }
    catch (exception &ex) {
        DebugHelper::Log(DebugHelper::CreateLogMessage(new string(ex.what()), new string(__FILE__), __LINE__));
    }
}

//TODO а мы точно правильно принимаем objects?
void GameRender::DrawObjects(const vector<shared_ptr<GameObject>>& objects, glm::mat4 view) { //TODO: should be const idk how
    glm::mat4 model;
    for (const shared_ptr<GameObject> &object : objects) {
        Shader shader = object->GetShader();
        shader.SetMatrix4("view", view);
        model = glm::mat4(1.0f);
        model = glm::translate(model, object->GetPosition());
        model = glm::scale(model, object->GetScale());
        object->GetShader().SetMatrix4("model", model);
        object->GetModel().Draw(object->GetShader());
    }
}
