set(CMAKE_CXX_STANDARD 11)

add_executable(nullptr nullptr.cpp)
add_executable(constexpr constexpr.cpp)
add_executable(initializer_list initializer_list.cpp)
add_executable(tuple tuple.cpp)
add_executable(auto_decltype auto_decltype.cpp)
add_executable(trail_type_inference trail_type_inference.cpp)
add_executable(rangebased_for_loop rangebased_for_loop.cpp)
add_executable(type_alias_template type_alias_template.cpp)
add_executable(variadic_template variadic_template.cpp)
add_executable(delegate_ctor delegate_ctor.cpp)
add_executable(inherit_ctor inherit_ctor.cpp)
add_executable(explicit_delete_default_function explicit_delete_default_function.cpp)
add_executable(enum_class enum_class.cpp)
add_executable(lambda lambda.cpp)
add_executable(std_function std_function.cpp)
add_executable(std_bind_placeholder std_bind_placeholder.cpp)