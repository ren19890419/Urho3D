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

#include "../../Urho2D/ConstraintRope2D.h"
#include "../../LuaScript/LuaScriptUtils.h"

#include <kaguya.hpp>

namespace Urho3D
{

void RegisterConstraintRope2D(kaguya::State& lua)
{
    using namespace kaguya;

    lua["ConstraintRope2D"].setClass(UserdataMetatable<ConstraintRope2D, Constraint2D>()
        .addStaticFunction("new", &CreateObject<ConstraintRope2D>)

        .addFunction("SetOwnerBodyAnchor", &ConstraintRope2D::SetOwnerBodyAnchor)
        .addFunction("SetOtherBodyAnchor", &ConstraintRope2D::SetOtherBodyAnchor)
        .addFunction("SetMaxLength", &ConstraintRope2D::SetMaxLength)

        .addFunction("GetOwnerBodyAnchor", &ConstraintRope2D::GetOwnerBodyAnchor)
        .addFunction("GetOtherBodyAnchor", &ConstraintRope2D::GetOtherBodyAnchor)
        .addFunction("GetMaxLength", &ConstraintRope2D::GetMaxLength)

        .addProperty("ownerBodyAnchor", &ConstraintRope2D::GetOwnerBodyAnchor, &ConstraintRope2D::SetOwnerBodyAnchor)
        .addProperty("otherBodyAnchor", &ConstraintRope2D::GetOtherBodyAnchor, &ConstraintRope2D::SetOtherBodyAnchor)
        .addProperty("maxLength", &ConstraintRope2D::GetMaxLength, &ConstraintRope2D::SetMaxLength)
    );
}
}

#endif
