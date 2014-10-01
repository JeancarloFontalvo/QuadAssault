#ifndef Smoke_h__
#define Smoke_h__

#include "Particle.h"

class Smoke : public Particle
{
	typedef Particle BaseClass;
public:
	Smoke( Vec2f const& pos );
	virtual void init();
	virtual void tick();
	virtual void onSpawn();
	virtual IRenderer* getRenderer();

};

#endif // Smoke_h__