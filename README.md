
# 🌞🌞🌞 2021年最新整理，500个 C++ 11 / 14 / 17 / 20 / 23 的新特性代码案例，包含lambda匿名函数，右值引用，auto，coroutine库，synchronization库


# 🛰 导航

* [C++11新特性](#cpp_11)
* [C++14新特性](#cpp_14)
* [C++17新特性](#cpp_17)
* [C++20新特性](#cpp_20)
* [C++23新特性](#cpp_23)


## <h1 id="cpp_11">C++11新特性</h1>
### <h3 id="cpp_11_keywords">关键字</h3>

#### <h5 id="cpp_11_new_keywords">新增关键字</h5>

* [thread_local](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#thread_local)
* [static_assert](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#static_assert)
* [nullptr](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#nullptr)
* [noexcept](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#noexcept)
* [decltype](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#decltype)
* [constexpr](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#constexpr)
* [char16_t](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#char16_t)
* [char32_t](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#char16_t)
* [alignof](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#alignof)
* [alignas](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_new_keywords_README.md#alignof)


#### <h5 id="cpp_11_meaning_changed__OR__new_meaning_added">含义变化或者新增含义关键字（meaning changed or new meaning added）</h5>

* [auto](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#auto)
* [class](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#clazz)
* [default](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#default)
* [delete](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#delete)
* [export](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#export)
* [extern](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#extern)
* [inline](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#inline)
* [mutable](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#mutable)
* [sizeof](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#sizeof)
* [struct](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#struct)
* [using](https://github.com/0voice/cpp_new_features/blob/main/cpp_11/001_meaning_keywords_README.md#using)

<br />

### <h3 id="cpp_11_RTTI">类型支持（基本类型、RTTI、类型特性）</h3>

#### <h5 id="cpp_11_RTTI_Primary_type_categories">Defined in header &lt;type_traits&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_void.cpp">is_void</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_integral.cpp">is_integral</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_floating_point.cpp">is_floating_point</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_array.cpp">is_array</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_enum.cpp">is_enum</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_union.cpp">is_union</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_class.cpp">is_class</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_function.cpp">is_function</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_pointer.cpp">is_pointer</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_lvalue_reference.cpp">is_lvalue_reference</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_rvalue_reference.cpp">is_rvalue_reference</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_member_object_pointer.cpp">is_member_object_pointer</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_member_function_pointer.cpp">is_member_function_pointer</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_fundamental.cpp">is_fundamental</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_arithmetic.cpp">is_arithmetic</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_scalar.cpp">is_scalar</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_object.cpp">is_object</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_compound.cpp">is_compound</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_reference.cpp">is_reference</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_member_pointer.cpp">is_member_pointer</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_const.cpp">is_const</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_volatile.cpp">is_volatile</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivial.cpp">is_trivial</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_copyable.cpp">is_trivially_copyable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_standard_layout.cpp">is_standard_layout</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_literal_type.cpp">is_literal_type</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_empty.cpp">is_empty</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_polymorphic.cpp">is_polymorphic</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_abstract.cpp">is_abstract</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_signed.cpp">is_signed</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_unsigned.cpp">is_unsigned</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_constructible.cpp">is_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_constructible.cpp">is_trivially_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_nothrow_constructible.cpp">is_nothrow_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_default_constructible.cpp">is_default_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_default_constructible.cpp">is_trivially_default_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_nothrow_default_constructible.cpp">is_nothrow_default_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_copy_constructible.cpp">is_copy_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_copy_constructible.cpp">is_trivially_copy_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_nothrow_copy_constructible.cpp">is_nothrow_copy_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_move_constructible.cpp">is_move_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_move_constructible.cpp">is_trivially_move_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_nothrow_move_constructible.cpp">is_nothrow_move_constructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_assignable.cpp">is_assignable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_assignable.cpp">is_trivially_assignable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_nothrow_assignable.cpp">is_nothrow_assignable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_copy_assignable.cpp">is_copy_assignable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_copy_assignable.cpp">is_trivially_copy_assignable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_nothrow_copy_assignable.cpp">is_nothrow_copy_assignable</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_is_move_assignable.cpp">is_move_assignable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_move_assignable.cpp">is_trivially_move_assignable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_nothrow_move_assignable.cpp">is_nothrow_move_assignable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_destructible.cpp">is_destructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_trivially_destructible.cpp">is_trivially_destructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_is_nothrow_destructible.cpp">is_nothrow_destructible</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_std_has_virtual_destructor.cpp">has_virtual_destructor</a>

<br />

### <h3 id="cpp_11_stl">STL容器</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_array.cpp">std::array</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_forward_list.cpp">std::forward_list</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_begin.cpp">std::begin</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_end.cpp">std::end</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_move.cpp">std::move</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_container_init.cpp">容器初始化</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_emplace.cpp">emplace</a>

#### <h5 id="cpp_11_unordered_containers">无序容器</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unordered_map.cpp">std::unordered_map</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unordered_multimap.cpp">std::unordered_multimap</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unordered_set.cpp">std::unordered_set</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unordered_multiset.cpp">std::unordered_multiset</a>

#### <h5 id="cpp_11_tuple">元组std::tuple</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_make_tuple.cpp">std::make_tuple</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_get.cpp">std::get</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_tie.cpp">std::tie</a>

#### <h5 id="cpp_11_hash">hash</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_hash_std_string.cpp">std::hash&lt;std::string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_hash_std_u16string.cpp">std::hash&lt;std::u16string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_hash_std_u32string.cpp">std::hash&lt;std::u32string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_hash_std_wstring.cpp">std::hash&lt;std::wstring&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_hash_std_error_code.cpp">std::hash&lt;std::error_code&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_hash_std_bitset.cpp">std::hash&lt;std::bitset&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_hash_std_type_index.cpp">std::hash&lt;std::type_index&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_hash_std_vector_bool.cpp">std::hash&lt;std::vector&lt;bool&gt;&gt;</a>
<!-- 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_thread_id.cpp">std::hash&lt;std&#58;&#58;thread&#58;&#58;id&gt;</a>
 -->

<br />

### <h3 id="cpp_11_smart_pointer">智能指针</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_shared_ptr.cpp">std::shared_ptr</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_weak_ptr.cpp">std::weak_ptr</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unique_ptr.cpp">std::unique_ptr</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_auto_ptr.cpp">auto_ptr(弃用)</a>

<br />

### <h3 id="cpp_11_regex">正则表达式</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_shared_ptr.cpp">basic_regex</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_weak_ptr.cpp">sub_match</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unique_ptr.cpp">match_results</a>

<br />

### <h3 id="cpp_11_function">函数</h3>

#### <h5 id="cpp_11_function_nonstatic">非静态成员函数</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_shared_ptr.cpp">cv限定函数</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_weak_ptr.cpp">引用限定</a>

#### <h5 id="cpp_11_function_template">函数对象模板</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unique_ptr.cpp">std::function</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unique_ptr.cpp">std::bind</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unique_ptr.cpp">std::bad_function_call</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unique_ptr.cpp">mem_fn</a>

<br />

### <h3 id="cpp_11_class">类</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">类型别名</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_member_init.cpp">类成员初始化</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_functor.cpp">仿函数(functor)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_delegating_constructors.cpp">委托构造函数</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_inheritance_constructor.cpp">继承构造函数</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_move_constructor.cpp">移动构造函数</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_move_assignment_operator.cpp">移动赋值运算符</a>
<br />

### <h3 id="cpp_11_template">模板</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_angle_bracket.cpp">尖括号“>”</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_aliases.cpp">别名模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_external_template.cpp">外部模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_variable_parameter_template.cpp">可变参数模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_default_template_parameters.cpp">默认模板参数</a>

<br />

### <h3 id="cpp_11_template">原子操作</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_bool.cpp">std::atomic&lt;bool&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_char.cpp">std::atomic&lt;char&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_signed_char.cpp">std::atomic&lt;signed char&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_unsigned_char.cpp">std::atomic&lt;unsigned char&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_short.cpp">std::atomic&lt;short&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_unsigned_short.cpp">std::atomic&lt;unsigned short&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_int.cpp">std::atomic&lt;int&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_unsigned_int.cpp">std::atomic&lt;unsigned int&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_long.cpp">std::atomic&lt;long&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_unsigned_long.cpp">std::atomic&lt;unsigned long&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_long_long.cpp">std::atomic&lt;long long&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_unsigned_long_long.cpp">std::atomic&lt;unsigned long long&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_char8_t.cpp">std::atomic&lt;char8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_char16_t.cpp">std::atomic&lt;char16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_char32_t.cpp">std::atomic&lt;char32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_wchar_t.cpp">std::atomic&lt;wchar_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int8_t.cpp">std::atomic&lt;std::int8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint8_t.cpp">std::atomic&lt;std::uint8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int16_t.cpp">std::atomic&lt;std::int16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint16_t.cpp">std::atomic&lt;std::uint16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int32_t.cpp">std::atomic&lt;std::int32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint32_t.cpp">std::atomic&lt;std::uint32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int64_t.cpp">std::atomic&lt;std::int64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint64_t.cpp">std::atomic&lt;std::uint64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int_least8_t.cpp">std::atomic&lt;std::int_least8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint_least8_t.cpp">std::atomic&lt;std::uint_least8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int_least16_t.cpp">std::atomic&lt;std::int_least16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint_least16_t.cpp">std::atomic&lt;std::uint_least16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int_least32_t.cpp">std::atomic&lt;std::int_least32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint_least32_t.cpp">std::atomic&lt;std::uint_least32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int_least64_t.cpp">std::atomic&lt;std::int_least64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint_least64_t.cpp">std::atomic&lt;std::uint_least64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int_fast8_t.cpp">std::atomic&lt;std::int_fast8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint_fast8_t.cpp">std::atomic&lt;std::uint_fast8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int_fast16_t.cpp">std::atomic&lt;std::int_fast16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint_fast16_t.cpp">std::atomic&lt;std::uint_fast16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int_fast32_t.cpp">std::atomic&lt;std::int_fast32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint_fast32_t.cpp">std::atomic&lt;std::uint_fast32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_int_fast64_t.cpp">std::atomic&lt;std::int_fast64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uint_fast64_t.cpp">std::atomic&lt;std::uint_fast64_t&gt;</a>
<!--
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_intptr_t.cpp">std::atomic&lt;std::intptr_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uintptr_t.cpp">std::atomic&lt;std::uintptr_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_size_t.cpp">std::atomic&lt;std::size_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_ptrdiff_t.cpp">std::atomic&lt;std::ptrdiff_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_intmax_t.cpp">std::atomic&lt;std::intmax_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_atomic_std_uintmax_t.cpp">std::atomic&lt;std::uintmax_t&gt;</a>
-->

<br />

### <h3 id="cpp_11_template">线程</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_std_thread.cpp">std::thread</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_std_mutex.cpp">std::mutex</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_std_lock.cpp">std::lock</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_std_call_once.cpp">std::call_once</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_std_atomic.cpp">std::atomic</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_std_cond_ition_variable.cpp">std::cond_ition_variable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_async.cpp">std::async</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_volatile.cpp">volatile</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_std_future.cpp">std::future</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_std_thread_std_thread_local.cpp">std::thread_local</a>

<br />

### <h3 id="cpp_11_exception">异常</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_exception_ptr.cpp">std::exception_ptr</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_make_exception_ptr.cpp">std::make_exception_ptr</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_current_exception.cpp">std::current_exception</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_rethrow_exception.cpp">std::rethrow_exception</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_nested_exception.cpp">std::nested_exception</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_throw_with_nested.cpp">std::throw_with_nested</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_rethrow_if_nested.cpp">std::rethrow_if_nested</a>
<!--
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_noexcept.cpp">std::noexcept</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_exception_std_terminate_handler.cpp">std::terminate_handler</a>
-->
<br />

### <h3 id="cpp_11_error">错误</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_error_std_error_category.cpp">std::error_category</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_error_std_generic_category.cpp">std::generic_category</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_error_std_error_condition.cpp">std::error_condition</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_error_std_errc.cpp">std::errc</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_error_std_error_code.cpp">std::error_code</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_error_std_system_error.cpp">std::system_error</a>

<br/>

### <h3 id="cpp_11_keywords">新语法</h3>

#### <h5 id="cpp_11_new_pretreatment">预处理</h5>

* <p>语法：__pragma(字符串字面量)</p>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_pragma.cpp">_Pragma运算符</a>

#### <h5 id="cpp_11_cplusplus_macro">C++宏(cplusplus macro)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_cpluscplus.h">_cplusplus宏</a>

#### <h5 id="cpp_11_for">基于范围的for语句</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_for_loop.cpp">for循环 for(x:range)</a>

####  <h5 id="cpp_11_alignment_support">对齐支持(alignment support)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_alignof.cpp">alignof</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_alignas.cpp">alignas</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_alignment_of.cpp">std::alignment_of</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_aligned_storage.cpp">std::aligned_storage</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_max_align_t.cpp">std::max_align_t</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_align.cpp">std::align</a>

####  <h5 id="cpp_11_explicit_conversion_operators">显式转换操作符(explicit conversion operators)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_explicit.cpp">explicit关键字</a>

####  <h5 id="cpp_11_static_assert">静态断言(static assert)</h5>

* <p>语法：static_assert(常量表达式，"提示字符串")</p>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_static_assert.cpp">static assert</a>

####  <h5 id="cpp_11_numeric_limits">数字限制(numeric limits)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_numeric_limits.cpp">数字限制</a>

####  <h5 id="cpp_11_raw_string">原始字符串(raw string)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_raw_string.cpp">原始字符串</a>

####  <h5 id="cpp_11_trailing_return_type_syntax">追踪返回类型语法(trailing return type syntax)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_trailing_return_type_syntax.cpp">追踪返回类型语法</a>

####  <h5 id="cpp_11_extended_friend_syntax">扩展的friend语法(extended friend syntax)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_extended_friend_syntax.cpp">扩展的friend语法</a>

####  <h5 id="cpp_11_extended_integer_types">扩展的整型(extended integer types)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_extended_integer_types.cpp">扩展的整型</a>

####  <h5 id="cpp_11_unrestricted_union">非受限联合体(unrestricted union)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_unrestricted_union.cpp">非受限联合体</a>

####  <h5 id="cpp_11_lnline_namespace">内联名字空间(lnline namespace)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_lnline.cpp">内联名字空间</a>

####  <h5 id="cpp_11_user_defined_literals">用户定义的字面量(user-defined literals)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_user_defined_literals.cpp">用户定义的字面量</a>

####  <h5 id="cpp_11_enum_class">强类型枚举(scoped and strongly typed enums)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_scoped_and_strongly_typed_enums.cpp">强类型枚举</a>

####  <h5 id="cpp_11_random_device">随机装置(random device)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_random_device.cpp">random device</a>

####  <h5 id="cpp_11_stdref_std_cref">std::ref和std::cref</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_stdref_stdcref.cpp">std::ref和std::cref</a>

####  <h5 id="cpp_11_constexpr">常量表达式(constexpr)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_constexpr.cpp">constexpr</a>

####  <h5 id="cpp_11_lamda">lamda表达式</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_lamda.cpp">lamda表达式</a>

####  <h5 id="cpp_11_nullptr">指针空值(nullptr)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_nullptr.cpp">nullptr</a>

####  <h5 id="cpp_11_preventing_narrowing">防止类型收窄(Preventing narrowing)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_preventing_narrowing.cpp">防止类型收窄</a>

####  <h5 id="cpp_11_initializer_lists">初始化列表(initializer lists)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_initializer_lists01.cpp">初始化列表——Initializer List</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_initializer_lists02.cpp">initializer_list<T>(作入参)</a>

####  <h5 id="cpp_11_Uniform_initialization_syntax_and_semantics">统一的初始化语法和语义(Uniform initialization syntax and semantics)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_Uniform_initialization_syntax_and_semantics.cpp">统一的初始化语法和语义</a>

####  <h5 id="cpp_11_POD">POD(plain old data)</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_POD.cpp">POD</a>
							
####  <h5 id="cpp_11_POD">long long整型</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_long_long.cpp">long long</a>
	
####  <h5 id="cpp_11_move_semantics">移动语义(move semantics)</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_move_semantics.cpp">move semantics</a>
	
####  <h5 id="cpp_11_rvalue_reference">右值引用(rvalue reference)</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_rvalue_reference.cpp">rvalue reference</a>

####  <h5 id="cpp_11_c99">c99特性(c99)</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_c99.cpp">c99特性</a>

####  <h5 id="cpp_11_SFINAE">一般化的SFINAE规则(generalized SFINAE rules)</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/002_grammar_SFINAE.cpp">generalized SFINAE rules</a>
	
<br/>

## <h1 id="cpp_14">C++14新特性</h1>

### <h3 id="cpp_14_RTTI">类型支持（基本类型、RTTI、类型特性）</h3>
	
### <h5 id="cpp_headfile_type_traits">Defined in header&lt;type_traits&gt;</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_type_traits_is_null_pointer.cpp">检查类型是否为 std::nullptr_t</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_type_traits_is_final.cpp">is_final(检查类型是否为 final 类类型)</a>

### <h5 id="cpp_headfile_utility">Defined in header&lt;utility&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_utility_exchange.cpp">exchange(将实参替换为一个新值，并返回其先前值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_utility_integer_sequence.cpp">integer_sequence(实现编译时整数数列)</a>

### <h5 id="cpp_headfile_initializer_list">Defined in header&lt;initializer_list&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_initializer_list_rbegin.cpp">rbegin(返回指向一个容器或数组的逆向迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_initializer_list_crbegin.cpp">crbegin(返回指向一个容器或数组的逆向迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_initializer_list_rend.cpp">rend(返回容器或数组的逆向尾迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_initializer_list_crend.cpp">crend(返回容器或数组的逆向尾迭代器)</a>

### <h5 id="cpp_headfile_initializer_list">Defined in header&lt;iterator&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in namespace std</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_iterator_make_reverse_iterator.cpp">make_reverse_iterator(创建拥有从实参推出的类型的 std::reverse_iterator)</a>

### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;array&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;deque&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;forward_list&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;iterator&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;list&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;map&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;regex&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;set&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;span&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;string&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;string_view&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;unordered_map&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;unordered_set&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;vector&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in namespace std</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_stl_begin.cpp">begin(返回指向容器或数组起始的迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_stl_cbegin.cpp">cbegin(返回指向容器或数组起始的迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_stl_end.cpp">end(返回指向容器或数组结尾的迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_stl_cend.cpp">cend(返回指向容器或数组结尾的迭代器)</a>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_stl_rbegin.cpp">rbegin(返回指向一个容器或数组的逆向迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_stl_crbegin.cpp">crbegin(返回指向一个容器或数组的逆向迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_stl_rend.cpp">rend(返回容器或数组的逆向尾迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/001_stl_crend.cpp">crend(返回容器或数组的逆向尾迭代器)</a>	


<!--	
* [函数返回值类型推导](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_01)
* [lambda参数auto](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_02)
* [变量模板](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_03)
* [别名模板](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_04)
* [[[deprecated]]标记](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_05)
* [二进制字面量与整形字面量分隔符](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_06)
* [std::make_unique](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_07)
* [std::shared_timed_mutex与std::shared_lock](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_08)
* [std::integer_sequence](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_09)
* [std::exchange](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_10)
* [std::quoted](https://github.com/0voice/cpp_new_features/blob/main/cpp_14/README.md#cpp_14_11)
-->
	
<br/>

## <h1 id="cpp_17">C++17新特性</h1>

### <h3 id="cpp_17_keywords">关键字</h3>

#### <h5 id="cpp_17_meaning_changed__OR__new_meaning_added">含义变化或者新增含义关键字（meaning changed or new meaning added）</h5>

* [register](https://github.com/0voice/cpp_new_features/blob/main/cpp_17/001_keywords_README.md#register)
	
### <h3 id="cpp_17_RTTI">类型支持（基本类型、RTTI、类型特性）</h3>
	
### <h5 id="cpp_headfile_type_traits">Defined in header&lt;type_traits&gt;</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_byte.cpp">byte(字节类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_aggregate.cpp">is_aggregate(检查类型是否聚合类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_swappable_with.cpp">is_swappable_with(检查一个类型的对象是否能与同类型或不同类型的对象交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_swappable.cpp">is_swappable(检查一个类型的对象是否能与同类型或不同类型的对象交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_nothrow_swappable_with.cpp">is_nothrow_swappable_with(检查一个类型的对象是否能与同类型或不同类型的对象交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_nothrow_swappable.cpp">is_nothrow_swappable(检查一个类型的对象是否能与同类型或不同类型的对象交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_invocable.cpp">is_invocable(检查类型能否以给定的实参类型调用（如同以 std::invoke）)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_invocable_r.cpp">is_invocable_r(检查类型能否以给定的实参类型调用（如同以 std::invoke）)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_nothrow_invocable.cpp">is_nothrow_invocable(检查类型能否以给定的实参类型调用（如同以 std::invoke）)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_is_nothrow_invocable_r.cpp">is_nothrow_invocable_r(检查类型能否以给定的实参类型调用（如同以 std::invoke）)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_invoke_result.cpp">invoke_result(推导以一组实参调用一个可调用对象的结果类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_void_t.cpp">void_t(变参别名模板)</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_conjunction.cpp">conjunction(变参的逻辑与元函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_disjunction.cpp">disjunction(变参的逻辑或元函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_ndisjunctionegation.cpp">ndisjunctionegation(逻辑非元函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/002_type_traits_integral_constant.cpp">integral_constant(具有指定值的指定类型的编译期常量)</a>

### <h5 id="cpp_headfile_utility">Defined in header&lt;utility&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/003_utility_as_const.cpp">as_const(获得到其实参的 const 引用)</a>
<!--
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/003_utility_in_place.cpp">in_place(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/003_utility_in_place_type.cpp">in_place_type(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/003_utility_in_place_index.cpp">in_place_index(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/003_utility_in_place_t.cpp">in_place_t(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/003_utility_in_place_type_t.cpp">in_place_type_t(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/003_utility_in_place_index_t.cpp">in_place_index_t(原位构造标签)</a>
-->
	
### <h5 id="cpp_headfile_tuple">Defined in header&lt;tuple&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/004_tuple_apply.cpp">apply(以一个实参的元组来调用函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/004_tuple_make_from_tuple.cpp">make_from_tuple(以一个实参元组构造对象)</a>

### <h5 id="cpp_headfile_optional">Defined in header&lt;optional&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/005_optional_optional.cpp">optional(可能或可能不保有一个对象的包装器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/005_optional_make_optional.cpp">make_optional(创建一个 optional 对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/005_optional_std_swap.cpp">std::swap(std::optional)(特化 std::swap 算法)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/005_optional_std_hash.cpp">std::hash&lt;std::optional&gt;(特化 std::hash 算法)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/005_optional_nullopt_t.cpp">nullopt_t(带未初始化状态的 optional 类型的指示器)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/005_optional_bad_optional_access.cpp">bad_optional_access(指示进行了到不含值的 optional 的有检查访问的异常)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/005_optional_nullopt.cpp">nullopt(nullopt_t 类型对象)</a>

### <h5 id="cpp_headfile_variant">Defined in header&lt;variant&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_variant.cpp">variant(类型安全的可辨识联合体)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_visit.cpp">visit(以一或多个 variant 所保有的各实参调用所提供的函数对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_holds_alternative.cpp">holds_alternative(检查某个 variant 是否当前持有某个给定类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_std_get.cpp">std::get(std::variant)(以给定索引或类型（若类型唯一）读取 variant 的值，错误时抛出异常)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_get_if.cpp">get_if(以给定索引或类型（若其唯一），获得指向被指向的 variant 的值的指针，错误时返回空指针)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_std_swap.cpp">std::swap(std::variant)(特化 std::swap 算法)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_monostate.cpp">monostate(用作非可默认构造类型的 variant 的首个可选项的占位符类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_bad_variant_access.cpp">bad_variant_access(非法地访问 variant 的值时抛出的异常)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_variant_size.cpp">variant_size(在编译时获得 variant 可选项列表的大小)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_variant_size_v.cpp">variant_size_v(在编译时获得 variant 可选项列表的大小)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_variant_alternative.cpp">variant_alternative(在编译时获得以其下标指定的可选项的类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_variant_alternative_t.cpp">variant_alternative_t(在编译时获得以其下标指定的可选项的类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_std_hash.cpp">std::hash&lt;std::variant&gt;(特化 std::hash 算法)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/006_variant_variant_npos.cpp">variant_npos(非法状态的 variant 的下标)</a>
	
### <h5 id="cpp_headfile_any">Defined in header&lt;any&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/007_any_any.cpp">any(可保有任何可复制构造 (CopyConstructible) 类型的实例的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/007_any_std_swap.cpp">std::swap(std::any)(特化 std::swap 算法)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/007_any_any_cast.cpp">any_cast(对被容纳对象的类型安全访问)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/007_any_make_any.cpp">make_any(创建 any 对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/007_any_bad_any_cast.cpp">bad_any_cast(当类型不匹配时按值返回形式的 any_cast 所抛出的异常)</a>

### <h5 id="cpp_headfile_charconv">Defined in header&lt;charconv&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/008_charconv_to_chars.cpp">to_chars(转换整数或浮点值到字符序列象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/008_charconv_from_chars.cpp">from_chars(转换字符序列到整数或浮点值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/008_charconv_chars_format.cpp">chars_format(指定 std::to_chars 和 std::from_chars 所用的格式)</a>

### <h5 id="cpp_headfile_initializer_list">Defined in header&lt;initializer_list&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/009_initializer_list_empty.cpp">empty(检查容器是否为空)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/009_initializer_list_data.cpp">data(获得指向底层数组的指针)</a>

### <h3 id="cpp_17_Containers_library">容器库</h3>
### <h5 id="cpp_headfile_map">Defined in header&lt;map&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/010_map_insert_or_assign.cpp">insert_or_assign(插入元素，或若键已存在则赋值给当前元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/010_map_try_emplace.cpp">try_emplace(若键不存在则原位插入，若键存在则不做任何事)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/010_map_extract.cpp">extract(从另一容器释出结点)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/010_map_merge.cpp">merge(从另一容器接合结点)</a>

### <h5 id="cpp_headfile_unordered_map">Defined in header&lt;unordered_map&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/011_unordered_map_insert_or_assign.cpp">insert_or_assign(插入元素，或若键已存在则赋值给当前元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/011_unordered_map_try_emplace.cpp">try_emplace(若键不存在则原位插入，若键存在则不做任何事)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/011_unordered_map_extract.cpp">extract(从另一容器释出结点)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/011_unordered_map_merge.cpp">merge(从另一容器接合结点)</a>

### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;array&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;deque&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;forward_list&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;iterator&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;list&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;map&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;regex&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;set&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;span&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;string&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;string_view&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;unordered_map&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;unordered_set&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;vector&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in namespace std</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/012_stl_size.cpp">size(返回容器或数组的大小)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/012_stl_empty.cpp">empty(检查容器是否为空)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_17/012_stl_data.cpp">data(获得指向底层数组的指针)</a>

<br/>

## <h1 id="cpp_20">C++20新特性</h1>
	
### <h3 id="cpp_20_keywords">关键字</h3>

#### <h5 id="cpp_20_new_keywords">新增关键字</h5>

* [char8_t](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_keywords_README.md#char8_t)
* [concept](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_keywords_README.md#concept)
* [consteval](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_keywords_README.md#consteval)
* [co_await](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_keywords_README.md#co_await)
* [co_return](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_keywords_README.md#co_return)
* [co_yield](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_keywords_README.md#co_yield)
* [requires](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_keywords_README.md#requires)
	
#### <h5 id="cpp_20_meaning_changed__OR__new_meaning_added">含义变化或者新增含义关键字（meaning changed or new meaning added）</h5>

* [export](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_keywords_README.md#export)
	
### <h3 id="cpp_20_RTTI">类型支持（基本类型、RTTI、类型特性）</h3>

### <h5 id="cpp_headfile_type_traits">Defined in header&lt;type_traits&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_is_bounded_array.cpp">is_bounded_array(检查类型是否为有已知边界的数组类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_is_unbounded_array.cpp">is_unbounded_array(检查类型是否为有未知边界的数组类型)</a>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_is_layout_compatible.cpp">is_layout_compatible(检查二个类型是否布局兼容)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_is_pointer_interconvertible_base_of.cpp">is_pointer_interconvertible_base_of(检查一个类型是否为另一类型的指针可互转换（起始）基类)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_is_pointer_interconvertible_with_class.cpp">is_pointer_interconvertible_with_class(检查一个类型的对象是否与该类型的指定子对象指针可互转换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_is_corresponding_member.cpp">is_corresponding_member(检查二个指定成员是否在二个指定类型中的公共起始序列中彼此对应)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_is_nothrow_convertible.cpp">is_nothrow_convertible(检查是否能转换一个类型为另一类型)</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_remove_cvref.cpp">remove_cvref(将 std::remove_cv 与 std::remove_reference 结合)</a>
<!--
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_common_reference.cpp">common_reference(确定类型组的共用引用类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_basic_common_reference.cpp">basic_common_reference(确定类型组的共用引用类型)</a>
-->
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_type_identity.cpp">type_identity(返回不更改的类型实参)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/002_rtti_is_constant_evaluated.cpp">is_constant_evaluated(检测调用是否在常量求值的语境内发生)</a>

### <h3 id="cpp_20_Coroutine">协程支持</h3>

### <h5 id="cpp_headfile_coroutine">Defined in header&lt;coroutine&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/003_rtti_coroutine_traits.cpp">coroutine_traits(用于发现协程承诺类型的特征类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/003_rtti_coroutine_handle.cpp">coroutine_handle(用于指代暂停或执行的协程)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/003_rtti_noop_coroutine.cpp">noop_coroutine(创建在等待或销毁时无操作的协程柄)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/003_rtti_noop_coroutine_promise.cpp">noop_coroutine_promise(用于无可观察作用的协程)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/003_rtti_noop_coroutine_handle.cpp">noop_coroutine_handle(std::coroutine_handle&lt;std::noop_coroutine_promise&gt; ，有意用于指代无操作协程)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/003_rtti_suspend_never.cpp">suspend_never(指示 await 表达式应该决不暂停)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/003_rtti_suspend_always.cpp">suspend_always(指示 await 表达式应该始终暂停)</a>

### <h3 id="cpp_20_compare">三路比较</h3>

### <h5 id="cpp_headfile_compare">Defined in header&lt;compare&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_std_coroutine_traits.cpp">std::coroutine_traits</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_std_coroutine_handle.cpp">std::coroutine_handle</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_three_way_comparable.cpp">three_way_comparable(指定运算符 <=> 在给定类型上产生一致的结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_three_way_comparable_with.cpp">three_way_comparable_with(指定运算符 <=> 在给定类型上产生一致的结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_partial_ordering.cpp">partial_ordering(三路比较的结果类型，支持所有 6 种运算符，不可替换，并允许不可比较的值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_weak_ordering.cpp">weak_ordering(三路比较的结果类型，支持所有 6 种运算符且不可替换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_strong_ordering.cpp">strong_ordering(三路比较的结果类型，支持所有 6 种运算符且可替换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_is_eq.cpp">is_eq(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_is_neq.cpp">is_neq(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_is_lt.cpp">is_lt(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_is_lteq.cpp">is_lteq(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_is_gt.cpp">is_gt(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_is_gteq.cpp">is_gteq(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_compare_three_way.cpp">compare_three_way(实现 x <=> y 的函数对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_compare_three_way_result.cpp">compare_three_way_result(获得三路比较运算符 <=> 在给定类型上的结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_common_comparison_category.cpp">common_comparison_category(给定的全部类型都能转换到的最强比较类别)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_strong_order.cpp">strong_order(进行三路比较并产生 std::strong_ordering 类型结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_weak_order.cpp">weak_order(进行三路比较并产生 std::weak_ordering 类型结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_partial_order.cpp">partial_order(进行三路比较并产生 std::partial_ordering 类型结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_compare_strong_order_fallback.cpp">compare_strong_order_fallback(进行三路比较并产生 std::strong_ordering 类型的结果，即使 operator<=> 不可用)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_compare_weak_order_fallback.cpp">compare_weak_order_fallback(进行三路比较并产生 std::weak_ordering 类型的结果，即使 operator<=> 不可用)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/004_rtti_compare_compare_partial_order_fallback.cpp">compare_partial_order_fallback(进行三路比较并产生 std::partial_ordering 类型的结果，即使 operator<=> 不可用</a>

### <h5 id="cpp_headfile_concepts">Defined in header&lt;concepts&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/005_rtti_concepts_ranges_swap.cpp">ranges::swap(交换两个对象的值)</a>

### <h5 id="cpp_headfile_utility">Defined in header&lt;utility&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/006_utility_cmp_equal.cpp">cmp_equal(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/006_utility_cmp_not_equal.cpp">cmp_not_equal(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/006_utility_cmp_less.cpp">cmp_less(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/006_utility_cmp_less_equal.cpp">cmp_less_equal(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/006_utility_cmp_greater_equal.cpp">cmp_greater_equal(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/006_utility_in_range.cpp">in_range(检查整数值是否在给定整数类型的范围内)</a>

<!--
### <h5 id="cpp_headfile_format">Defined in header&lt;format&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_format.cpp">format(在新 string 中存储参数的格式化表示)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_format_to.cpp">format_to(通过输出迭代器写其参数的格式化表示)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_format_to_n.cpp">format_to_n(通过输出迭代器写其参数的格式化表示，不超出指定的大小)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_formatted_size.cpp">formatted_size(确定存储其参数的格式化表示所需的字符数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_vformat.cpp">vformat(std::format 的使用类型擦除的参数表示的非模板变体)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_vformat_to.cpp">vformat_to(std::format_to 的使用类型擦除的参数表示的非模板变体)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_formatter.cpp">formatter(定义给定类型的格式化规则的类模板)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_format_error.cpp">format_error(格式化错误时抛出的异常类型)</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_basic_format_arg.cpp">basic_format_arg(提供对用户定义格式化器的格式化参数的访问的类模板)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_basic_format_parse_context.cpp">basic_format_parse_context(格式化字符串分析器状态)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_format_parse_context.cpp">format_parse_context(格式化字符串分析器状态)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_wformat_parse_context.cpp">wformat_parse_context(格式化字符串分析器状态)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_basic_format_context.cpp">basic_format_context(格式化状态，包括所有格式化参数和输出迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_format_context.cpp">format_context(格式化状态，包括所有格式化参数和输出迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_wformat_context.cpp">wformat_context(格式化状态，包括所有格式化参数和输出迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_visit_format_arg.cpp">visit_format_arg(用户定义格式化器的参数观览接口)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_make_format_args.cpp">make_format_args(创建引用所有格式化参数的类型擦除对象，可转换到 format_args)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_make_wformat_args.cpp">make_wformat_args(创建引用所有格式化参数的类型擦除对象，可转换到 format_args)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_basic_format_args.cpp">basic_format_args(提供对所有格式化参数的访问的类)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_format_args.cpp">format_args(提供对所有格式化参数的访问的类)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/007_format_wformat_args.cpp">wformat_args(提供对所有格式化参数的访问的类)</a>
-->

### <h5 id="cpp_headfile_memory">Defined in header&lt;memory&gt;</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_uninitialized_move.cpp">uninitialized_move(移动一个范围的对象到未初始化的内存区域)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_uninitialized_move_n.cpp">uninitialized_move_n(移动一定数量对象到未初始化内存区域)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_uninitialized_default_construct.cpp">uninitialized_default_construct(在范围所定义的未初始化的内存区域以默认初始化构造对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_uninitialized_default_construct_n.cpp">uninitialized_default_construct_n(在起始和计数所定义的未初始化内存区域用默认初始化构造对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_uninitialized_value_construct.cpp">uninitialized_value_construct(在范围所定义的未初始化内存中用值初始化构造对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_uninitialized_value_construct_n.cpp">uninitialized_value_construct_n(在起始和计数所定义的未初始化内存区域以值初始化构造对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_destroy_at.cpp">destroy_at(销毁在给定地址的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_destroy.cpp">destroy(销毁一个范围中的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/008_memory_destroy_n.cpp">destroy_n(销毁范围中一定数量的对象)</a>

	
<!--
### <h5 id="cpp_headfile_concepts">Defined in header&lt;memory_resource&gt;</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_polymorphic_allocator.cpp">polymorphic_allocator(以 std::memory_resource 构造，支持基于它的运行时多态的分配器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_memory_resource.cpp">memory_resource(一个抽象接口，用于各种封装内存资源的类)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_new_delete_resource.cpp">new_delete_resource(返回一个静态的程序范围 std::pmr::memory_resource，它使用全局 operator new 与 operator delete 分配和解分配内存</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_null_memory_resource.cpp">null_memory_resource(返回一个不进行任何分配的静态 std::pmr::memory_resource)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_get_default_resource.cpp">get_default_resource(获取缺省 std::pmr::memory_resource)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_set_default_resource.cpp">set_default_resource(设置缺省 std::pmr::memory_resource)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_pool_options.cpp">pool_options(一组池资源的构造函数选项)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_synchronized_pool_resource.cpp">synchronized_pool_resource(线程安全的 std::pmr::memory_resource，用于管理具有不同块大小的池中的分配)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_unsynchronized_pool_resource.cpp">unsynchronized_pool_resource(线程不安全的 std::pmr::memory_resource，用于管理具有不同块大小的池中的分配)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/009_memory_resource_monotonic_buffer_resource.cpp">monotonic_buffer_resource(一种特殊用途的 std::pmr::memory_resource，仅在资源被销毁时才释放所分配内存)</a>	
-->

### <h3 id="cpp_20_compare">Concepts library(概念库)</h3>

### <h5 id="cpp_headfile_concepts">Defined in header&lt;concepts&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_same_as.cpp">same_as(指定一个类型与另一类型相同)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_derived_from.cpp">derived_from(指定一个类型派生自另一类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_convertible_to.cpp">convertible_to(指定一个类型能隐式转换成另一类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_common_reference_with.cpp">common_reference_with(指定两个类型共有一个公共引用类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_common_with.cpp">common_with(指定两个类型共有一个公共类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_integral.cpp">integral(指定类型为整型类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_signed_integral.cpp">signed_integral(指定类型为有符号的整型类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_unsigned_integral.cpp">unsigned_integral(指定类型为无符号的整型类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_floating_point.cpp">floating_point(指定类型为浮点类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_assignable_from.cpp">assignable_from(指定一个类型能从另一类型赋值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_swappable.cpp">swappable(指定一个类型能进行交换，或两个类型能彼此交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_swappable_with.cpp">swappable_with(指定一个类型能进行交换，或两个类型能彼此交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_destructible.cpp">destructible(指定能销毁该类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_constructible_from.cpp">constructible_from(指定该类型的变量能从一组实参类型进行构造，或绑定到一组实参类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_default_initializable.cpp">default_initializable(指定能默认构造一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_move_constructible.cpp">move_constructible(指定能移动构造一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_copy_constructible.cpp">copy_constructible(指定能复制构造和移动构造一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_boolean_testable.cpp">boolean-testable(指定能用于布尔语境的类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_equality_comparable.cpp">equality_comparable(指定运算符 == 为等价关系)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_equality_comparable_with.cpp">equality_comparable_with(指定运算符 == 为等价关系)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_totally_ordered.cpp">totally_ordered(指定比较运算符在该类型上产生全序)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_totally_ordered_with.cpp">totally_ordered_with(指定比较运算符在该类型上产生全序)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_movable.cpp">movable(指定能移动及交换一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_copyable.cpp">copyable(指定能复制、移动及交换一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_semiregular.cpp">semiregular(指定能赋值、移动、交换及默认构造一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_regular.cpp">regular(指定类型为正则，即它既为 semiregular 亦为 equality_comparable)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_invocable.cpp">invocable(指定能以给定的一组实参类型调用的可调用类型)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_regular_invocable.cpp">regular_invocable(指定能以给定的一组实参类型调用的可调用类型)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_predicate.cpp">predicate(指定可调用类型为布尔谓词)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_relation.cpp">relation(指定可调用类型为二元关系)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_equivalence_relation.cpp">equivalence_relation(指定 relation 施加等价关系)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/010_concepts_strict_weak_order.cpp">strict_weak_order(指定一个 relation 所强加的是严格弱序)</a>

### <h3 id="cpp_20_memory">动态内存管理</h3>

### <h5 id="cpp_headfile_memory">Defined in header&lt;memory&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_uses_allocator_construction_args.cpp">uses_allocator_construction_args(准备匹配给定类型所要求的使用分配器构造的口味的参数列表)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_make_obj_using_allocator.cpp">make_obj_using_allocator(以使用分配器构造的手段创建给类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_uninitialized_construct_using_allocator.cpp">uninitialized_construct_using_allocator(以使用分配器构造的手段在指定的内存位置创建给定类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_construct_at.cpp">construct_at(在给定地址创建对象)</a>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_no-throw-input-iterator.cpp">no-throw-input-iterator(指定迭代器、哨位和范围上的某些操作不抛出)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_no-throw-forward-iterator.cpp">no-throw-forward-iterator(指定迭代器、哨位和范围上的某些操作不抛出)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_no-throw-sentinel-for.cpp">no-throw-sentinel-for(指定迭代器、哨位和范围上的某些操作不抛出)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_no-throw-input-range.cpp">no-throw-input-range(指定迭代器、哨位和范围上的某些操作不抛出)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_no-throw-forward-range.cpp">no-throw-forward-range(指定迭代器、哨位和范围上的某些操作不抛出)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_copy.cpp">ranges::uninitialized_copy(复制元素范围到未初始化的内存区域)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_copy_n.cpp">ranges::uninitialized_copy_n(复制一定量元素到未初始化的内存区域)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_fill.cpp">ranges::uninitialized_fill(复制一个对象到范围所定义的未初始化的内存区域)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_fill_n.cpp">ranges::uninitialized_fill_n(复制一个对象到起始与计数所定义的未初始化的内存区域)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_move.cpp">ranges::uninitialized_move(移动对象范围到未初始化的内存区域)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_move_n.cpp">ranges::uninitialized_move_n(移动一定量对象到未初始化的内存区域)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_default_construct.cpp">ranges::uninitialized_default_construct(在范围所定义的未初始化的内存区域以默认初始化构造对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_default_construct_n.cpp">ranges::uninitialized_default_construct_n(在起始与计数所定义的未初始化的内存区域以默认初始化构造对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_value_construct.cpp">ranges::uninitialized_value_construct(在范围所定义的未初始化的内存区域以值初始化构造对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_uninitialized_value_construct_n.cpp">ranges::uninitialized_value_construct_n(在起始与计数所定义的未初始化的内存区域以值初始化构造对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_destroy_at.cpp">ranges::destroy_at(销毁位于给定地址的元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_destroy.cpp">ranges::destroy(销毁范围中的元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_destroy_n.cpp">ranges::destroy_n(销毁范围中一定量的元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_ranges_construct_at.cpp">ranges::construct_at(在给定地址创建对象)</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_to_address.cpp">to_address(从指针式类型获得裸指针)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/011_memory_assume_aligned.cpp">assume_aligned(告知编译器指针已对齐)</a>

### <h3 id="cpp_20_memory">日期和时间工具</h3>

### <h5 id="cpp_headfile_chrono">Defined in header&lt;chrono&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_is_clock.cpp">is_clock(确定类型是否为时钟 (Clock))</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_is_clock_v.cpp">is_clock_v(确定类型是否为时钟 (Clock))</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_utc_clock.cpp">utc_clock(协调世界时 (UTC) 的时钟 (Clock))</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_tai_clock.cpp">tai_clock(国际原子时 (TAI) 的时钟 (Clock))</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_gps_clock.cpp">gps_clock(GPS 时间的时钟 (Clock))</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_file_clock.cpp">file_clock(用于文件时间的时钟 (Clock))</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_local_t.cpp">local_t(表示本地时间的伪时钟)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_clock_time_conversion.cpp">clock_time_conversion(定义如何转换一个时钟的时间点为另一个的特性类)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_clock_cast.cpp">clock_cast(转换一个时钟的时间点为另一个)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_time_of_day.cpp">time_of_day(表示一日中的时间)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_is_am.cpp">is_am(在 12 时和 24 时格式当天时刻之间翻译)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_is_pm.cpp">is_pm(在 12 时和 24 时格式当天时刻之间翻译)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_make12.cpp">make12(在 12 时和 24 时格式当天时刻之间翻译)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_make24.cpp">make24(在 12 时和 24 时格式当天时刻之间翻译)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_last_spec.cpp">last_spec(指示一个月中最后日期或星期的标签类)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_day.cpp">day(表示月之日期)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_month.cpp">month(表示年之月份)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_year.cpp">year(表示格里高利历中的年)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_weekday.cpp">weekday(表示格里高利历中星期之日)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_weekday_indexed.cpp">weekday_indexed(表示月份的第 n 个 weekday)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_weekday_last.cpp">weekday_last(表示月份的最后一个 weekday)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_month_day.cpp">month_day(表示特定 month 的特定 day)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_month_day_last.cpp">month_day_last(表示特定 month 的最后一日)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_month_weekday.cpp">month_weekday(表示特定 month 的第 n 个 weekday)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_month_weekday_last.cpp">month_weekday_last(表示特定 month 的最后一个 weekday)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_year_month.cpp">year_month(表示特定 year 的特定 month)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_year_month_day.cpp">year_month_day(表示特定的 year 、 month 和 day)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_year_month_day_last.cpp">year_month_day_last(表示特定 year 和 month 的最后一日)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_year_month_weekday.cpp">year_month_weekday(表示特定 year 和 month 的第 n 个 weekday)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_year_month_weekday_last.cpp">year_month_weekday_last(表示特定 year 和 month 的最后一个 weekday)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_operator.cpp">operator/(创建格里高利历日期的约定语法)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_tzdb.cpp">tzdb(描述 IANA 时区数据库的副本)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_tzdb_list.cpp">tzdb_list(表示 tzdb 的链表)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_get_tzdb.cpp">get_tzdb(访问和控制全球时区数据库信息)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_get_tzdb_list.cpp">get_tzdb_list(访问和控制全球时区数据库信息)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_reload_tzdb.cpp">reload_tzdb(访问和控制全球时区数据库信息)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_remote_version.cpp">remote_version(访问和控制全球时区数据库信息)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_locate_zone.cpp">locate_zone(定位基于其名称的 time_zone)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_current_zone.cpp">current_zone(返回当前的 time_zone)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_time_zone.cpp">time_zone(表示时区)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_sys_info.cpp">sys_info(表示在特定时间点的关于时区的信息)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_local_info.cpp">local_info(表示关于从本地时间转换到 UNIX 时间的信息)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_choose.cpp">choose(选择应如何解析歧义的本地时间)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_zoned_traits.cpp">zoned_traits(zoned_time 所用的时区指针的特性类)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_zoned_time.cpp">zoned_time(表示时区和时间点)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_leap_second.cpp">leap_second(含有关于插入闰秒的信息)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_time_zone_link.cpp">time_zone_link(表示时区的替用名)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_nonexistent_local_time.cpp">nonexistent_local_time(抛出以报告本地时间不存在的异常)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_ambiguous_local_time.cpp">ambiguous_local_time(抛出以报告本地时间有歧义的异常)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/012_chrono_parse.cpp">parse(从流分析 chrono 对象)</a>
	
### <h3 id="cpp_20_string">字符串</h3>

### <h5 id="cpp_headfile_string">Defined in header&lt;string&gt;</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/013_string_starts_with.cpp">starts_with(检查 string 是否始于给定前缀)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/013_string_ends_with.cpp">ends_with(检查 string 是否终于给定后缀)</a>
	
### <h5 id="cpp_headfile_string_view">Defined in header&lt;string_view&gt;</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/014_string_view_starts_with.cpp">starts_with(检查 string_view 是否始于给定前缀)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/014_string_view_ends_with.cpp">ends_with(检查 string_view 是否终于给定后缀)</a>
	
### <h5 id="cpp_headfile_cuchar">Defined in header&lt;cuchar&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/015_cuchar_mbrtoc8.cpp">mbrtoc8(转换窄多字节字符为 UTF-8 编码)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/015_cuchar_c8rtomb.cpp">c8rtomb(转换 UTF-8 字符串为窄多字节编码)</a>	

### <h3 id="cpp_20_Containers_library">容器库</h3>

### <h5 id="cpp_headfile_array">Defined in header&lt;array&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/016_array_to_array.cpp">to_array(从内建数组创建 std::array 对象)</a>

### <h5 id="cpp_headfile_vector">Defined in header&lt;vector&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/017_vector_erase.cpp">erase(std::vector)(擦除所有满足特定判别标准的元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/017_vector_erase_if.cpp">erase_if(std::vector)(擦除所有满足特定判别标准的元素)</a>

### <h5 id="cpp_headfile_map">Defined in header&lt;map&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/018_map_contains.cpp">contains(检查容器是否含有带特定键的元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/018_map_erase_if.cpp">erase_if(std::map)(擦除所有满足特定判别标准的元素)</a>

### <h5 id="cpp_headfile_unordered_map">Defined in header&lt;unordered_map&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/019_unordered_map_contains.cpp">contains(检查容器是否含有带特定键的元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/019_unordered_map_erase_if.cpp">erase_if(std::unordered_map)(擦除所有满足特定判别标准的元素)</a>

### <h5 id="cpp_headfile_span">Defined in header&lt;span&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/020_span_begin.cpp">begin(返回指向起始的迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/020_span_end.cpp">end(返回指向末尾的迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/020_span_rbegin.cpp">rbegin(返回指向起始的逆向迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/020_span_rend.cpp">rend(返回指向末尾的逆向迭代器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/020_span_front.cpp">front(访问第一个元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/020_span_back.cpp">back(访问最后一个元素)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/020_span_dynamic_extent.cpp">dynamic_extent(size_t 类型常量，指明 span 拥有动态长度)</a>

### <h5 id="cpp_headfile_span">Defined in namespace std</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_indirectly_readable.cpp">indirectly_readable(指定类型通过应用运算符 * 可读)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_indirectly_writable.cpp">indirectly_writable(指定可向迭代器所引用的对象写入值)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_weakly_incrementable.cpp">weakly_incrementable(指定 semiregular 类型能以前后自增运算符自增)</a> 	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_incrementable.cpp">incrementable(指定 weakly_incrementable 类型上的自增操作保持相等性，而且该类型为 equality_comparable)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_input_or_output_iterator.cpp">input_or_output_iterator(指定该类型对象可以自增且可以解引用)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_sentinel_for.cpp">sentinel_for(指定类型为某个 input_or_output_iterator 类型的哨位类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_sized_sentinel_for.cpp">sized_sentinel_for(指定可对一个迭代器和一个哨位应用 - 运算符，以在常数时间计算其距离)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_input_iterator.cpp">input_iterator(指定类型为输入迭代器，即可读取其所引用的值，且可前/后自增)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_output_iterator.cpp">output_iterator(指定类型为给定的值类型的输出迭代器，即可向其写入该类型的值，且可前/后自增)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_forward_iterator.cpp">forward_iterator(指定 input_iterator 为向前迭代器，支持相等比较与多趟操作)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_bidirectional_iterator.cpp">bidirectional_iterator(指定 forward_iterator 为双向迭代器，支持向后移动)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_random_access_iterator.cpp">random_access_iterator(指定 bidirectional_iterator 为随机访问迭代器，支持常数时间内的前进和下标访问)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_contiguous_iterator.cpp">contiguous_iterator(指定 random_access_iterator 为连续迭代器，指代内存中连续相接的元素)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_indirectly_readable_traits.cpp">indirectly_readable_traits(计算 indirectly_readable 类型的值类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_iter_value_t.cpp">iter_value_t(计算迭代器的关联类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_iter_reference_t.cpp">iter_reference_t(计算迭代器的关联类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_iter_difference_t.cpp">iter_difference_t(计算迭代器的关联类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_iter_rvalue_reference_t.cpp">iter_rvalue_reference_t(计算迭代器的关联类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_iter_common_reference_t.cpp">iter_common_reference_t(计算迭代器的关联类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_iterator_traits.cpp">iterator_traits(为迭代器各项性质提供统一接口)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_input_iterator_tag.cpp">input_iterator_tag(用于指示迭代器类别的空类类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_output_iterator_tag.cpp">output_iterator_tag(用于指示迭代器类别的空类类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_forward_iterator_tag.cpp">forward_iterator_tag(用于指示迭代器类别的空类类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_bidirectional_iterator_tag.cpp">bidirectional_iterator_tag(用于指示迭代器类别的空类类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_random_access_iterator_tag.cpp">random_access_iterator_tag(用于指示迭代器类别的空类类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/021_std_contiguous_iterator_tag.cpp">contiguous_iterator_tag(用于指示迭代器类别的空类类型)</a> 

### <h5 id="cpp_headfile_span">Defined in namespace std::ranges</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/022_ranges_iter_move.cpp">iter_move(将解引用迭代器的结果转型为其关联的右值引用类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/022_ranges_iter_swap.cpp">iter_swap(交换两个可解引用对象所引用的值)</a> 

### <h5 id="cpp_headfile_span">Defined in namespace std</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_indirectly_readable.cpp">indirectly_readable(指定类型通过应用运算符 * 可读)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_indirectly_writable.cpp">indirectly_writable(指定可向迭代器所引用的对象写入值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_weakly_incrementable.cpp">weakly_incrementable(指定 semiregular 类型能以前后自增运算符自增)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_incrementable.cpp">incrementable(指定 weakly_incrementable 类型上的自增操作保持相等性，而且该类型为 equality_comparable)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_input_or_output_iterator.cpp">input_or_output_iterator(指定该类型对象可以自增且可以解引用)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_sentinel_for.cpp">sentinel_for(指定类型为某个 input_or_output_iterator 类型的哨位类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_sized_sentinel_for.cpp">sized_sentinel_for(指定可对一个迭代器和一个哨位应用 - 运算符，以在常数时间计算其距离)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_input_iterator.cpp">input_iterator(指定类型为输入迭代器，即可读取其所引用的值，且可前/后自增)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_output_iterator.cpp">output_iterator(指定类型为给定的值类型的输出迭代器，即可向其写入该类型的值，且可前/后自增)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_forward_iterator.cpp">forward_iterator(指定 input_iterator 为向前迭代器，支持相等比较与多趟操作)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_bidirectional_iterator.cpp">bidirectional_iterator(指定 forward_iterator 为双向迭代器，支持向后移动)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_random_access_iterator.cpp">random_access_iterator(指定 bidirectional_iterator 为随机访问迭代器，支持常数时间内的前进和下标访问)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_contiguous_iterator.cpp">contiguous_iterator(指定 random_access_iterator 为连续迭代器，指代内存中连续相接的元素)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_incrementable_traits.cpp">incrementable_traits(计算 weakly_incrementable 类型的差类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_indirectly_readable_traits.cpp">indirectly_readable_traits(计算 indirectly_readable 类型的值类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_iter_value_t.cpp">iter_value_t(计算迭代器的关联类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_iter_reference_t.cpp">iter_reference_t(计算迭代器的关联类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_iter_difference_t.cpp">iter_difference_t(计算迭代器的关联类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_iter_rvalue_reference_t.cpp">iter_rvalue_reference_t(计算迭代器的关联类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_iter_common_reference_t.cpp">iter_common_reference_t(计算迭代器的关联类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_iterator_traits.cpp">iterator_traits(为迭代器各项性质提供统一接口)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_input_iterator_tag.cpp">input_iterator_tag(用于指示迭代器类别的空类类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_output_iterator_tag.cpp">output_iterator_tag(用于指示迭代器类别的空类类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_forward_iterator_tag.cpp">forward_iterator_tag(用于指示迭代器类别的空类类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_bidirectional_iterator_tag.cpp">bidirectional_iterator_tag(用于指示迭代器类别的空类类型)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_random_access_iterator_tag.cpp">random_access_iterator_tag(用于指示迭代器类别的空类类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/023_std_contiguous_iterator_tag.cpp">contiguous_iterator_tag(用于指示迭代器类别的空类类型)</a>
	
### <h5 id="cpp_headfile_span">Defined in header <iterator></h5>
### <h5 id="cpp_headfile_span">Defined in namespace std</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirectly_unary_invocable.cpp">indirectly_unary_invocable(指定可调用类型能以解引用某个 indirectly_readable 类型的结果进行调用)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirectly_regular_unary_invocable.cpp">indirectly_regular_unary_invocable(指定可调用类型能以解引用某个 indirectly_readable 类型的结果进行调用)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirect_unary_predicate.cpp">indirect_unary_predicate(指定可调用类型，在以解引用一个 indirectly_readable 类型的结果进行调用时，满足 predicate)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirect_binary_predicate.cpp">indirect_binary_predicate(指定可调用类型，在以解引用两个 indirectly_readable 类型的结果进行调用时，满足 predicate)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirect_equivalence_relation.cpp">indirect_equivalence_relation(指定可调用类型，在以解引用两个 indirectly_readable 类型的结果进行调用时，满足 equivalence_relation)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirect_strict_weak_order.cpp">indirect_strict_weak_order(指定可调用类型，在以解引用两个 indirectly_readable 类型的结果进行调用时，满足 strict_weak_order)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirectly_movable.cpp">indirectly_movable(指定可从 indirectly_readable 类型移动值给 indirectly_writable 类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirectly_movable_storable.cpp">indirectly_movable_storable(指定可从 indirectly_readable 类型移动值给 indirectly_writable 类型，且该移动可以通过中间对象进行)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirectly_copyable.cpp">indirectly_copyable(指定可从 indirectly_readable 类型复制值给 indirectly_writable 类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirectly_copyable_storable.cpp">indirectly_copyable_storable(指定可从 indirectly_readable 类型复制值给 indirectly_writable 类型，且该复制可以通过中间对象进行)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirectly_swappable.cpp">indirectly_swappable(指定能交换两个 indirectly_readable 类型所引用的值)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirectly_comparable.cpp">indirectly_comparable(指定能比较两个 indirectly_readable 类型所引用的值)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_permutable.cpp">permutable(指定在原位重排元素的算法的共用要求)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_mergeable.cpp">mergeable(指定通过复制元素将已排序序列归并到输出序列中的算法的要求)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_sortable.cpp">sortable(指定重排序列为有序序列的算法的共用要求)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_indirect_result_t.cpp">indirect_result_t(计算在解引用某组 indirectly_readable 类型的结果上调用可调用对象的结果)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_projected.cpp">projected(用于对接受投影的算法指定约束的辅助模板)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_move_sentinel.cpp">move_sentinel(用于 std::move_iterator 的哨位适配器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_common_iterator.cpp">common_iterator(适配一个迭代器类型及其哨位为一个公共迭代器类型)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_default_sentinel_t.cpp">default_sentinel_t(用于知晓其边界的迭代器的默认哨位)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_counted_iterator.cpp">counted_iterator(对到范围结尾距离进行跟踪的迭代器适配器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/024_iterator_unreachable_sentinel_t.cpp">unreachable_sentinel_t(始终与任何 weakly_incrementable 类型比较都不相等的哨位)</a> 

### <h5 id="cpp_headfile_span">Defined in header <iterator></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/025_iterator_ranges_advanc.cpp">ranges::advance(令迭代器前进给定的距离或到给定的边界)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/025_iterator_ranges_distance.cpp">ranges::distance(返回迭代器与哨位间的距离，或范围起始与结尾间的距离)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/025_iterator_ranges_next.cpp">ranges::next(自增迭代器给定的距离或到边界)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/025_iterator_ranges_prev.cpp">ranges::prev(自减迭代器给定的距离或到边界)</a> 

### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;array&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;deque&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;forward_list&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;iterator&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;list&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;map&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;regex&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;set&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;span&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;string&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;string_view&gt;</h5>	
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;unordered_map&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;unordered_set&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in header &lt;vector&gt;</h5>
### <h5 id="cpp_headfile_initializer_list">Defined in namespace std</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/026_std_ssize.cpp">ssize(返回容器或数组的大小)</a> 

### <h5 id="cpp_headfile_span">Defined in header &lt;ranges&gt;</h5>
### <h5 id="cpp_headfile_span">Defined in header &lt;iterator&gt;</h5>
### <h5 id="cpp_headfile_span">Defined in namespace std::ranges</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_begin.cpp">ranges::begin(返回指向范围起始的迭代器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_cbegin.cpp">ranges::cbegin(返回指向只读范围起始的迭代器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_end.cpp">ranges::end(返回指示范围结尾的哨位)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_cend.cpp">ranges::cend(返回指示只读范围结尾的哨位)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_rbegin.cpp">ranges::rbegin(返回指向范围的逆向迭代器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_crbegin.cpp">ranges::crbegin(返回指向只读范围的逆向迭代器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_rend.cpp">ranges::rend(返回指向范围的逆向尾迭代器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_crend.cpp">ranges::crend(返回指向只读范围的逆向尾迭代器)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_size.cpp">ranges::size(获得能在常数时间内计算大小的范围的大小)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_ssize.cpp">ranges::ssize(获得能在常数时间内计算大小的范围的大小，并将它转换成有符号整数)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_empty.cpp">ranges::empty(检查范围是否为空)</a> 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_data.cpp">ranges::data(获得指向连续范围的起始的指针)</a> 	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_20/027_ranges_ranges_cdata.cpp">ranges::cdata(获得指向只读连续范围的起始的指针)</a> 


<br/>

## <h1 id="cpp_23">C++23新特性</h1>

### <h3 id="cpp_23_RTTI">类型支持（基本类型、RTTI、类型特性）</h3>

### <h5 id="cpp_headfile_type_traits">Defined in header&lt;type_traits&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/001_rtti_is_scoped_enum.cpp">is_scoped_enum(检查类型是否为有作用域枚举类型)</a>

### <h5 id="cpp_headfile_utility">Defined in header&lt;utility&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/002_utility_to_underlying.cpp">to_underlying(转换枚举到其底层类型)</a>

### <h5 id="cpp_headfile_stacktrace">Defined in header&lt;stacktrace&gt;</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/003_stacktrace_stacktrace_entry.cpp">stacktrace_entry(栈踪中求值的表示)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/003_stacktrace_basic_stacktrace.cpp">basic_stacktrace(由栈踪条目组成的调用序列的近似表示)</a>

### <h3 id="cpp_23_memory">动态内存管理</h3>

### <h5 id="cpp_headfile_memory">Defined in header&lt;memory&gt;</h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/004_memory_out_ptr_t.cpp">out_ptr_t(与外来指针设置器交互，并在析构时重设智能指针)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/004_memory_out_ptr.cpp">out_ptr(以关联的智能指针和重设参数创建 out_ptr_t)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/004_memory_inout_ptr_t.cpp">inout_ptr_t(与外来指针设置器交互，从智能指针获得初始指针值，并在析构时重设它)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/004_memory_inout_ptr.cpp">inout_ptr(以关联的智能指针和重设参数创建 inout_ptr_t)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/004_memory_allocation_result.cpp">allocation_result(记录由 allocate_at_least 分配的存储的地址与实际大小)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/004_memory_allocate_at_least.cpp">allocate_at_least(经由分配器分配至少与请求的大小一样大的存储)</a>
	
### <h3 id="cpp_23_string">字符串</h3>

### <h5 id="cpp_headfile_string">Defined in header&lt;string&gt;</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/005_string_contains.cpp">contains(检查字符串是否含有给定的子串或字符)</a>

### <h5 id="cpp_headfile_string_view">Defined in header&lt;string_view&gt;</h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_23/005_string_view_contains.cpp">contains(检查字符串视图是否含有给定的子串或字符)</a>

---
	

<br/>
<br/>
<br/>
<br/>
<br/>

<h2  id="11">🤝 鸣谢</h2>

##### 为了让我们的repo内容更加的丰富，更加的专业。欢迎大家贡献patch，希望大家在issue里面出谋划策，我们期待你的加入。


<h2 id="22">联系专栏</h2> 

#### 零声教育，专注于c/c++Linux后台服务器开发架构技术学习提升。<br>
每天晚上8点【免费技术直播】：[分享Linux，Nginx，ZeroMQ，MySQL，Redis，fastdfs，MongoDB，ZK，流媒体，CDN，P2P，K8S，Docker，TCP/IP，协程，DPDK等技术内容，立即学习。](https://ke.qq.com/course/417774?flowToken=1037127)
  
#### 免费订阅直播链接【QQ：602878196, 微信：baby602878196】即可领取对标腾讯T9职级技术要求的后台开发学习图谱。

![大纲部分图.png](https://img11.360buyimg.com/ddimg/jfs/t1/37229/14/15620/149708/60e6a78eE5241eec1/d0f0c9d9aa1e4d99.png)

#### 微信扫码联系VIP课程咨询贝贝老师，免费领取更多福利干货资料【备注：GitHub C++新特性】
![barcode](https://user-images.githubusercontent.com/87458342/128681533-a1549d1a-2ccb-4e66-971f-1bd6f512913c.png)

