#include "WorkerPartFactory.h"

WorkerPartFactory::WorkerPartFactory()
{
    //ctor
}

WorkerPartFactory::~WorkerPartFactory()
{
    //dtor
}

Head* WorkerPartFactory::createHead()
{
    Head *h = new Head();
    h->setHP(DEFAULT_HP);
    h->setInitiative(DEFAULT_INITIVE);
    return h;
}

Torso* WorkerPartFactory::createTorso()
{
    Torso *t = new Torso();
    t->setHP(DEFAULT_HP);
    t->setInventoryCapacity(DEFAULT_INVENTORY_CAPACITY);
    return t;
}

RightArm* WorkerPartFactory::createRightArm()
{
    RightArm *ra = new RightArm();
    ra->setHP(DEFAULT_HP);
    ra->setStrength(DEFAULT_STRENGTH);
    return ra;
}

RightLeg* WorkerPartFactory::createRightLeg()
{
    RightLeg *rl = new RightLeg();
    rl->setHP(DEFAULT_HP);
    rl->setSpeed(DEFAULT_SPEED);
    return rl;
}

LeftArm* WorkerPartFactory::createLeftArm()
{
    LeftArm *la = new LeftArm();
    la->setHP(DEFAULT_HP);
    la->setStrength(DEFAULT_STRENGTH);
    return la;
}

LeftLeg* WorkerPartFactory::createLeftLeg()
{
    LeftLeg *ll = new LeftLeg();
    ll->setHP(DEFAULT_HP);
    ll->setSpeed(DEFAULT_SPEED);
    return ll;
}

