#pragma once
#define TINYOBJLOADER_IMPLEMENTATION
#include <vector>
#include "obj3d.h"
#include "shader.h"
#include "TextureManager.h"

class faceDemo {
public:
	faceDemo();
	~faceDemo();
	void init();
	void render();
	void terminate();
	void setup();
	void loop();
private:

	void loadOBJ(char*);
	void loadShader();
	void loadTexture(char* file_kd, char* file_bump);
	void initBuffer();
	void initFBO();
	static void keyboard(GLFWwindow* window, int key, int scancode, int action, int mods);
	static void mousecontrol(GLFWwindow* window, int button, int action, int mods);
	GLFWwindow* window;
	obj3d* iface;
	shader* bling;
	GLint program;
	GLuint loc_model_view;
	GLuint loc_projection;
	GLuint loc_translucency;
	GLuint loc_map_kd;
	GLuint loc_map_bump;
	GLuint texture_kd;
	GLuint texture_bump;
	GLuint loc_light_pos;
	GLuint loc_light_color;
	GLuint loc_Kd;
	GLuint loc_global_ambient;
	GLuint loc_mode;
	vec3 Kd;
	vec3 global_ambient;
};