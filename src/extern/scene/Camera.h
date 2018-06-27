#ifndef CAMERA_H
#define CAMERA_H

#include "util/Transform.h"

namespace rin {
    class Camera {
    public:
        Transform transform;
        glm::vec3 dir;
    public:
        Camera();
    };
}

#endif
