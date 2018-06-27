#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>

namespace rin {
    class Camera {
    protected:
        glm::vec3 pos;
    public:
        Camera();
    };
}

#endif
