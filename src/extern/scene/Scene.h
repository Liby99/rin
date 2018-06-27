#ifndef SCENE_H
#define SCENE_H

#include <vector>

#include "Camera.h"
// #include "Object.h"
// #include "Light.h"

namespace rin {
    
    class Scene {
    protected:
        
        Camera activeCamera;
        // std::vector<Light *> lights;
        // std::vector<Object *> objects;
        
    public:
        
        Scene();
        
        Camera & getCamera();
        void setCamera(Camera & cam);
        
        // Basic object list
        // void addObject(Object & obj);
        // Object & getObject(int i);
        // int numObjects();
        //
        // // Light list
        // void addLight(Light & lgt);
        // Light & getLight(int i);
        // int numLights();
        //
        // // Update draw
        // void update();
        // void draw();
        
    private:
        
    };
}

#endif
