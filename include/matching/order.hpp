#pragma once
#include <cstdint>

namespace matching {
    enum class Side{
        Buy,
        Sell
    };

    struct Order{
        std::uint64_t orderId;
        Side side;
        std::int64_t price;
        std::uint32_t quantity;
    };
}