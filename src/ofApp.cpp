#include "ofApp.h"

ofMesh triangle;
//--------------------------------------------------------------
void ofApp::setup(){
	// 构造 ofApp 对象时将会调用此方法
	// 用于加载对象或创建对象，用于渲染应用程序的第一帧
	// 首先需要创建网格
	triangle.addVertex(glm::vec3(0.0, 0.0, 0.0));
	triangle.addVertex(glm::vec3(0.0, 768.0f, 0.0));
	triangle.addVertex(glm::vec3(1024.0, 768.0, 0.0));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	// 每帧调用一次
	triangle.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	glm::vec3 curPos = triangle.getVertex(2);
	triangle.setVertex(2, curPos + glm::vec3(-10, 0, 0));
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
