return std::uses_allocator_construction_args<T>(alloc,
    std::piecewise_construct, std::tuple<>{}, std::tuple<>{}
);
