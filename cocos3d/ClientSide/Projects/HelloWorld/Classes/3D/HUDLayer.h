#ifndef _HUD_LAYER_H_
#define _HUD_LAYER_H_
#include "Scenes/CC3Layer.h"
USING_NS_COCOS3D;

class CHUDLayer : public CC3Layer
{
public:
	virtual void	initializeControls();

	static CHUDLayer*	layer();

protected:
	bool			_isTracking;
};

#endif
