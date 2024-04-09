#include "../inc/Register_32bits.h"

Register_32bits::Register_32bits()
{
    mValue=0;
    mHasJustChanged=false;
}

Register_32bits::~Register_32bits()
{

}

/*
void Register_32bits::set16bitsRegisterType(bool mType)
{
    mFullRegister=mType;
}
*/

void Register_32bits::setHasJustChanged(bool pVal)
{
    mHasJustChanged=pVal;
}

void Register_32bits::resetChanged()
{
    mHasJustChanged=false;
}

uint32_t Register_32bits::getValue()
{
        return mValue;
}

void Register_32bits::setValue(uint32_t pValue)
{
    if (pValue!=mValue) 
    {
        mHasJustChanged=true;
    }

    mValue=pValue;
}

bool Register_32bits::hasJustChanged()
{
    return mHasJustChanged;
}
