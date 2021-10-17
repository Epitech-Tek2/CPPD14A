/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14A-clement.muth
** File description:
** RefPtr
*/

#include "RefPtr.hpp"

RefPtr::RefPtr(BaseComponent *rawPtr) :
    _rawPtr{rawPtr} {}

RefPtr::RefPtr(RefPtr const &other) :
    _rawPtr{other._rawPtr} {}

RefPtr::~RefPtr()
{
}

BaseComponent *RefPtr::get() const
{
    return (_rawPtr);
}

RefPtr& RefPtr::operator=(RefPtr const& refPtr)
{
    _rawPtr = refPtr._rawPtr;
    return (*this);
}