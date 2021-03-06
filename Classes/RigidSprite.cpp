#include "RigidSprite.h"

RigidSprite::RigidSprite()
:m_pBody(NULL)
{
}

RigidSprite::~RigidSprite()
{
}

void RigidSprite::setRigidBody(b2Body* body)
{
	assert(body != NULL);
	m_pBody = body;
}

b2Body* RigidSprite::getBody(){
	return m_pBody;
}
