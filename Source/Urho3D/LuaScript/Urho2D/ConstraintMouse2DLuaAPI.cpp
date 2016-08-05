//
// Copyright (c) 2008-2016 the Urho3D project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifdef URHO3D_URHO2D

#include "../../Precompiled.h"

#include "../../Urho2D/ConstraintMouse2D.h"
#include "../../LuaScript/LuaScriptUtils.h"

#include <kaguya.hpp>

namespace Urho3D
{

void RegisterConstraintMouse2D(kaguya::State& lua)
{
    using namespace kaguya;

    lua["ConstraintMouse2D"].setClass(UserdataMetatable<ConstraintMouse2D, Constraint2D>()
        .addStaticFunction("new", &CreateObject<ConstraintMouse2D>)

        .addFunction("SetTarget", &ConstraintMouse2D::SetTarget)
        .addFunction("SetMaxForce", &ConstraintMouse2D::SetMaxForce)
        .addFunction("SetFrequencyHz", &ConstraintMouse2D::SetFrequencyHz)
        .addFunction("SetDampingRatio", &ConstraintMouse2D::SetDampingRatio)

        .addFunction("GetTarget", &ConstraintMouse2D::GetTarget)
        .addFunction("GetMaxForce", &ConstraintMouse2D::GetMaxForce)
        .addFunction("GetFrequencyHz", &ConstraintMouse2D::GetFrequencyHz)
        .addFunction("GetDampingRatio", &ConstraintMouse2D::GetDampingRatio)

        .addProperty("target", &ConstraintMouse2D::GetTarget, &ConstraintMouse2D::SetTarget)
        .addProperty("maxForce", &ConstraintMouse2D::GetMaxForce, &ConstraintMouse2D::SetMaxForce)
        .addProperty("frequencyHz", &ConstraintMouse2D::GetFrequencyHz, &ConstraintMouse2D::SetFrequencyHz)
        .addProperty("dampingRatio", &ConstraintMouse2D::GetDampingRatio, &ConstraintMouse2D::SetDampingRatio)
    );
}
}

#endif
