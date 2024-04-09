#ifndef REGISTER_32_BITS_H
#define REGISTER_32_BITS_H

#include <inttypes.h>
#include <stdio.h>

#include "../inc/common_values.h"

//class Register_8bits;

class Register_32bits 
{
public:
    Register_32bits();
    ~Register_32bits();

    uint32_t getValue();
    void setValue(uint32_t);
    //void set16bitsRegisterType(bool);
    //void setHighLowRegister(Register_8bits *, Register_8bits *);
    bool hasJustChanged();
    void resetChanged();
    void setHasJustChanged(bool);

private:
    uint32_t mValue;          
    bool mHasJustChanged;
};	

#endif
