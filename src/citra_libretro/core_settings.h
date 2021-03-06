// Copyright 2017 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <string>

namespace LibRetro {

enum CStickFunction { Both, CStick, Touchscreen };

struct CoreSettings {

    ::std::string file_path;

    float deadzone = 1.f;

    LibRetro::CStickFunction analog_function;

    bool mouse_touchscreen;
    bool mouse_show_pointer;

} extern settings;

} // namespace LibRetro
