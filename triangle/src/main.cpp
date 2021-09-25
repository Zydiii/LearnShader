#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	//ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context
	                                   // 设置 OpenGL 并创建窗口，应用程序将在其上显示帧画面
	ofGLWindowSettings glSettings;
	glSettings.setSize(1024, 768);
	glSettings.windowMode = OF_WINDOW;
	glSettings.setGLVersion(4, 1);
	ofCreateWindow(glSettings);

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp()); // 将控制流程传递给 ofApp 对象
	                       // 内置的函数都以 of 作为前缀

}
