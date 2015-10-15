#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
   }

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofColor colorOne;
    ofColor colorTwo;
    
    colorOne.set (255, 102, 204);
    colorTwo.set (84, 0, 255);
    
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);
    // Sets the background to a circular gradient
    
    //set one of flowers
    ofFill();
    ofSetColor(240,64,64);
    ofSetLineWidth(1);
    ofSetCircleResolution(20);
    ofEnableSmoothing();
    ofCircle(100,100, 40);//Blossom
    ofLine(100, 400 , 100, 100); //Stem
    ofTriangle(100, 270, 100, 300, 0, 220);// Left Leaf
    //  X,  Y,    X,   Y,   X,  Y
    ofTriangle(100, 270, 100, 300, 200, 220);// Right Leaf
    //  X,  Y,    X,   Y,   X,  Y*/
   
    //set two
    ofFill();
    ofSetColor(25, 0, 102);
    ofSetLineWidth(1);
    ofCircle(300,100, 40);//Blossom
    ofSetCircleResolution(20);
    ofEnableSmoothing();
    ofLine(300, 100 , 300, 400); //Stem
    
    ofTriangle(300, 270, 300, 300, 200, 220);// Left Leaf
    //  X,  Y,    X,   Y,   X,  Y
    ofTriangle(300, 270, 300, 300, 400, 220);// Right Leaf
    //  X,  Y,    X,   Y,   X,  Y

    

//set three of flowers
        ofFill();
    ofSetColor(204,255,102);//Lime Green
    ofCircle(500,100, 40);//Blossom
    ofLine(500, 100 , 500, 400); //Stem
    
    ofTriangle(500, 270, 500, 300, 400, 220);// Left Leaf
            //  X,  Y,    X,   Y,   X,  Y
    ofTriangle(500, 270, 500, 300, 600, 220);// Right Leaf
            //  X,  Y,    X,   Y,   X,  Y
    
  //set of Four
    ofFill();
    ofSetColor(17,112,80);//Dark Green 
    ofCircle(700,100, 40);//Blossom
    ofLine(700, 100 , 700, 400); //Stem
    
    ofTriangle(700, 270, 700, 300, 600, 220);// Left Leaf
            //  X,  Y,    X,   Y,   X,  Y
    ofTriangle(700, 270, 700, 300, 800, 220);// Right Leaf
            //  X,  Y,    X,   Y,   X,  Y

 
    
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
