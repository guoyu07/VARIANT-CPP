/**
 *  ValueDouble.h
 *
 *  Value of numeric type
 *
 *  @copyright 2014 Copernica BV
 */

/**
 *  Include guard
 */
#ifndef __COPERNICA_VARIANT_VALUEDOUBLE_H
#define __COPERNICA_VARIANT_VALUEDOUBLE_H

#include "../include/ValueImpl.h"

/**
 *  Set up namespace
 */
namespace Variant {

/**
 *  Numeric value implementation
 */
class ValueDouble : public ValueImpl
{
private:
    /**
     *  Value of this value
     */
    double _value;
public:
    /**
     *  Get the implementation type
     */
    virtual ValueType type() override
    {
        return ValueDoubleType;
    }

    /**
     *  Clone the implementation
     */
    virtual ValueImpl* clone() override
    {
        return new ValueDouble(_value);
    }

    /**
     *  Construct new integer value
     *
     *  @param  value
     */
    ValueDouble(double value) : _value(value) {}

    /**
     *  Convert the value to a number
     */
    virtual operator int () override
    {
        return _value;
    }

    /**
     *  Convert the value to a number
     */
    virtual operator double() override
    {
        return _value;
    }

    /**
     *  Convert the value to a string
     */
    virtual operator std::string () override
    {
        return std::to_string(_value);
    }
};

/**
 *  End namespace
 */
}

#endif /* ValueInt.h */