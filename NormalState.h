//
//  NormalState.h
//
//  Created by athenaeum on 2014/11/15.
//
//

#ifndef __NormalState__
#define __NormalState__

#include "GameState.h"
#include <cocos2d.h>
#include "ObjectManager.h"
#include "Player.h"
#include "Obstacles.h"
#include "Enemy.h"

using namespace cocos2d;

class NormalState : public GameState
{
public:
    virtual void stateUpdate(float dt);
    virtual bool onStateEnter();
    virtual bool onStateExit();
    virtual bool onTouchBeganEvent();
	virtual void onTouchMovedEvent();
	virtual void onTouchEndedEvent();
    
    virtual std::string getStateID() { return s_normalID; }
    
    NormalState();
    ~NormalState();
    
private:
    float _tileWidth;
    float _tileHeight;
    float _mapWidth;
    float _mapHeight;
	Player* _wisp;
	Enemy* _enemy;
	Obstacles* _obs;
	static const std::string s_normalID;
    
};


#endif /* defined(__NormalState__) */
