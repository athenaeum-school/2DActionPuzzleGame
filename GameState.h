//
//  GameState.h
//
//  Created by athenaeum on 2014/11/15.
//
//

#ifndef __GameState__
#define __GameState__

#include <iostream>
#include "cocos2d.h"
#include "GameObject.h"

using namespace cocos2d;

class GameLayer;
class ObjectManager;

class GameState : public CCNode
{
public:
    virtual void stateUpdate(float dt) = 0;
    virtual bool onStateEnter() = 0;
    virtual bool onStateExit() = 0;
    virtual bool onTouchBeganEvent() = 0;
	virtual void onTouchMovedEvent() = 0;
	virtual void onTouchEndedEvent() = 0;

    virtual std::string getStateID() = 0;
    
    GameState();
    ~GameState();
    
private:
    
    bool m_loadingComplete;
    bool m_exiting;
	
 
protected:
	GameLayer* _gameL;
	ObjectManager* _gm;
	std::vector<GameObject*> _gObjects;

};

#endif /* defined(__GameState__) */
