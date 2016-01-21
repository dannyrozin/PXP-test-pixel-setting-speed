#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    width =ofGetWidth();
    height =ofGetHeight();
    ourResultTexture = *  new ofTexture();								// create a ofTexture to hold the result info
    ourResultTexture.allocate(width, height, GL_RGB);					// allocate memory for the ofTextue (This is RGB no Alpha)
    ourResultPixels = new unsigned char[width*height*3];
    ofSetFrameRate(120);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int x = 0; x< width;x++){
        for (int y = 0; y< height;y++){
            for (int i = 0; i< 10;i++){
            unsigned char randomR = ofRandom(255);
            unsigned char randomG = ofRandom(255);
            unsigned char randomB = ofRandom(255);
            ourResultPixels[x*3+y*width*3]=randomR;
            ourResultPixels[x*3+y*width*3+1]=randomG;
            ourResultPixels[x*3+y*width*3+2]=randomB;
        }
        }
    }
    ourResultTexture.loadData(ourResultPixels, width, height, GL_RGB);
    ourResultTexture.draw(0,0);
    ofDrawBitmapString(ofGetFrameRate(), 100, 100);
    
    
    /*
     
     for (int i = 0; i< width*height*3;i++){
     unsigned char randomValue = ofRandom(255);
     ourResultPixels[i]=randomValue;
     
     }
     
     */
    ourResultTexture.loadData(ourResultPixels, width, height, GL_RGB);
    ourResultTexture.draw(0,0);
    ofDrawBitmapString(ofGetFrameRate(), 100, 100);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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