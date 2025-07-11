#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <iostream>
class VulkanApp {
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }
private:
    GLFWwindow* window;
    void initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        window = glfwCreateWindow(800, 600, "Vulkan Window", nullptr, nullptr);
    }
    void initVulkan() {
        // Initialize Vulkan here (this is a placeholder)
        std::cout << "Vulkan initialized." << std::endl;
    }
    void mainLoop() {
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }
    }
    void cleanup() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }
};
int main() {
    VulkanApp app;
    app.run();
    return 0;
}