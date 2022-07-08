// TODO: how to compile the shader?
#version 330
// in a single vertex position
// TODO: and its normal
layout (location = 0) in vec3 POSITION;
// TODO: Model-View-Projection Matrix

// Out transformed position
// TODO: and transformed normal

// main() to do the transform
void main() {
    gl_Position = vec4(POSITION, 1.0);
}
