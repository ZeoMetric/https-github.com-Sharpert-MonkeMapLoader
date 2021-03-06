#pragma once

#include "custom-types/shared/macros.hpp"

DECLARE_CLASS(MapLoader, MapDescriptor, "UnityEngine", "MonoBehaviour", sizeof(Il2CppObject) + sizeof(void*),
        DECLARE_METHOD(void, Initialize);
        DECLARE_INSTANCE_FIELD(float, gravity);
    REGISTER_FUNCTION(MapDescriptor,
        REGISTER_METHOD(Initialize);
        REGISTER_FIELD(gravity);
    )
)