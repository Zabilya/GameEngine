//
// Created by Azure Void on 25.02.2020.
//

#ifndef GAME_ENGINE_SMARTPOINTER_H
#define GAME_ENGINE_SMARTPOINTER_H

template<typename T> class SPointer {
public:
    SPointer(T* ptr) {
        _ptr = ptr;
    }

    ~SPointer() {
        delete _ptr;
    }

    T* operator->() {
        return _ptr;
    }

    T* operator*() {
        return *_ptr;
    }
private:
    T* _ptr;
};

#endif //GAME_ENGINE_SMARTPOINTER_H
