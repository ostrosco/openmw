#include "aiwander.hpp"
#include <iostream>

MWMechanics::AiWander::AiWander(int distance, int duration, int timeOfDay,std::vector<int> Idle):
    mDistance(distance), mDuration(duration), mTimeOfDay(timeOfDay), mIdle(Idle)
{
}

int MWMechanics::AiWander::getDistance() const
{
    return mDistance;
}

int MWMechanics::AiWander::getDuration() const
{
    return mDuration;
}

int MWMechanics::AiWander::getTimeOfDay() const
{
    return mTimeOfDay;
}

MWMechanics::AiPackage * MWMechanics::AiWander::clone() const
{
    return new AiWander(*this);
}

bool MWMechanics::AiWander::execute (const MWWorld::Ptr& actor)
{
    std::cout << "AiWadner completed.\n";
    return true;
}

int MWMechanics::AiWander::getTypeId() const
{
    return 0;
}

int MWMechanics::AiWander::getIdle(int index) const
{
    if(index < 0 || (uint)index > mIdle.size())
        return -1;
    return mIdle.at(index);
}
