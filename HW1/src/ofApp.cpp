#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    circlePos.set(mouseX, mouseY);
    trianglePos.set(100, 100);
    
    radius= 10;
    catchUpSpeed= 0.01;
    
    ofBackground(100, 100, 100);
    
    c.set(198, 246, 55);
}

//--------------------------------------------------------------
void ofApp::update(){
    trianglePos.x= catchUpSpeed* mouseX+ (1-catchUpSpeed)* trianglePos.x;
    trianglePos.y= catchUpSpeed* mouseY+ (1-catchUpSpeed)* trianglePos.y;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 100, 100);
    ofDrawCircle(mouseX, mouseY, radius);
    ofSetColor(c);
    c. setBrightness(ofRandom(200, 250));
    ofDrawTriangle(trianglePos.x, trianglePos.y, trianglePos.x-10, trianglePos.y+ 20, trianglePos.x-20, trianglePos.y);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
