#ifndef SOLDIERROBOT_H
#define SOLDIERROBOT_H

#include <Robot.h>
#include <Head.h>
#include <LeftArm.h>
#include <LeftLeg.h>
#include <Part.h>
#include <RightArm.h>
#include <RightLeg.h>
#include <Torso.h>

class SoldierRobot : public Robot
{
    public:
        SoldierRobot();
        virtual ~SoldierRobot();
        int getTotalHP();
        virtual void printRobotAttributes();

        Head* getHead();
        Torso* getTorso();
        LeftArm* getLeftArm();
        LeftLeg* getLeftLeg();
        RightArm* getRightArm();
        RightLeg* getRightLeg();

        void setHead(Head *head);
        void setTorso(Torso *torso);
        void setLeftArm(LeftArm *leftArm);
        void setLeftLeg(LeftLeg *leftLeg);
        void setRightArm(RightArm *rightArm);
        void setRightLeg(RightLeg *rightLeg);
    protected:
    private:
        int totalUpHP();
};

#endif // HUMANOIDROBOT_H
