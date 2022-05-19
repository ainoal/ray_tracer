#include "../lib/glfw/deps/glad/glad.h"
#include "../lib/glfw/deps/GL/glext.h"
#include "../lib/glfw/include/GLFW/glfw3.h"
#include <stdio.h>
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

int main() {
    // Make a window for image output
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(600, 600, "Raytracer", NULL, NULL);
    if (window == NULL) {
        std::cout << "Error: Failed to create a GLFW window" << "\n";
        glfwTerminate();
        return 1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Error: Failed to initialize GLAD" << "\n";
        return 1;
    }
    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.02f, 0.02f, 0.02f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}
