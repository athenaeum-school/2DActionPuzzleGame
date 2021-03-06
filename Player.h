//
//  Player.h
//
//  Created by athenaeum on 2014/11/18.
//
//

#ifndef __Player__
#define __Player__

#define WISP_SET_POS ccp(100 ,150)
#define WISP_EXTEND 50

#include <iostream>
#include "GameObject.h"

USING_NS_CC;

class Player : public GameObject
{
public:
	Player(GameLayer* game);
	~Player();
	virtual void stateUpdate(float dt);
	static Player* create();
    b2BodyDef wispBodyDef(Player* wisp);
	b2FixtureDef wispFixtureDef(b2Shape* shape);
	CCSprite* initCrossOne();
	CCSprite* initCrossTwo();
	virtual void update (float dt);

	void addForceToWisp(CCNode* wisp);
	bool wispTouchBegan();
	void wispTouchMoved();
	void wispTouchEnded();
	bool wispRectTouch(CCNode* wisp, CCTouch* touch);
	bool touchWithProcess(CCNode* wisp, CCTouch* touch, bool flg);
	void chain(CCNode* wisp, CCTouch* touch);
	float extendAngle(CCNode* wisp);
	CCPoint extendPos(CCNode* wisp);
	void removeAndAdd(CCNode* wisp, CCTouch* touch);
	void setChainOne(CCNode* chain1, CCPoint pos);
	void setChainTwo(CCNode* chain2, CCPoint pos);
	CCNode* initChainOne(CCNode* chain1);
	CCNode* initChainTwo(CCNode* chain2);
	CCPoint calcPos(CCPoint touch);
	bool gThanPos(int dist);
	CCPoint calcRetPos(CCPoint touch, int dist);

private:
	Player* initWisp();
};

#endif /* defined(__Player__) */
