/* ✔ */

#pragma once

#include "ExtendedIOElement.hpp"
#include <Helpers/ArrayHelpers.hpp>

BEGIN_CS_NAMESPACE

/** 
 * @brief   A class for ExtendedIOElement%s with a fixed size.
 * 
 * This class is to make it easier to get an array of all pins of the element.
 */
template <uint16_t N>
class StaticSizeExtendedIOElement : public ExtendedIOElement {
  protected:
    StaticSizeExtendedIOElement() : ExtendedIOElement{N} {}

  public:
    /**
     * @brief   Get an array containing all pins of the element.
     */
    Array<pin_t, N> pins() const {
        return generateIncrementalArray<pin_t, N>(getStart());
    }

    static constexpr uint16_t length() { return N; }
};

END_CS_NAMESPACE