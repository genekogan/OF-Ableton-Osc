#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    sender.setup(HOST, PORTOUT);
    receiver.setup(PORTIN);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (ofGetKeyPressed())
    {
        ofxOscMessage msg;
        msg.setAddress("/live/device");
        msg.addIntArg(2);
        msg.addIntArg(0);
        msg.addIntArg(18);
        msg.addFloatArg(ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 1));
        sender.sendMessage(msg);
    }

    
    while(receiver.hasWaitingMessages())
    {
        cout << "received mesage"<<endl;
        // get the next message
        ofxOscMessage m;
        receiver.getNextMessage(&m);
        cout << "address : "<<m.getAddress() << endl;
    }
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

