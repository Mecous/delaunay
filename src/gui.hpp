//
//  gui.hpp
//  delaunay
//
//  Created by James Oldfield on 12/11/2015.
//
//

#ifndef gui_hpp
#define gui_hpp

#include "ofMain.h"
#include "ofxGui.h"
#include "ofEvents.h"

class GUI {
  
  public:
    explicit GUI();
    ~GUI();
    ofxPanel panel;
    ofxSlider<float> transp; // float slider from the template class
};

#endif /* gui_hpp */
