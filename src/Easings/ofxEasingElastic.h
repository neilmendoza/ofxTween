#ifndef _PENNER_ELASTIC
#define _PENNER_ELASTIC

#include <math.h>
#include "ofxEasing.h"
#ifndef PI
#define PI  3.14159265
#endif

class ofxEasingElastic: public ofxEasing {

	public:
		ofxEasingElastic(float wobbleMultiplier = 1.f);

		void setWobbleMultiplier(float wobbleMultiplier);

		float easeIn(float t,float b , float c, float d);
		float easeOut(float t,float b , float c, float d);
		float easeInOut(float t,float b , float c, float d);
	
	private:
		float wobbleMultiplier;
};

#endif
