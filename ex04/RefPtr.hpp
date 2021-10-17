
#ifndef REF_PTR_HPP_
#define REF_PTR_HPP_

#include <cstddef>
#include "BaseComponent.hpp"

class RefPtr
{
    public:
        RefPtr(BaseComponent *rawPtr);
        RefPtr(RefPtr const &other);
        RefPtr &operator=(RefPtr const &other);
        RefPtr() = default;
        ~RefPtr();

        BaseComponent *get() const;

    private:
        BaseComponent *_rawPtr;
        bool _isRefPtr;
};

#endif // REF_PTR_HPP_
