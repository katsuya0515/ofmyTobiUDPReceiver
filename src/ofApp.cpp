#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //Initialize Tobi UDP Receiver
    receiver=new ofTobiiUDPReceiver(receiveData,8888);
    receiver->startThread();
}

//--------------------------------------------------------------
void ofApp::update(){

    cout << "x: "<< receiver->get_gaze_x()<<endl;
    cout << "y: "<<receiver->get_gaze_y()<<endl;
    cout << "timestap: "<<receiver->get_gaze_timestamp()<<endl;
}

//--------------------------------------------------------------
void ofApp::draw(){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
