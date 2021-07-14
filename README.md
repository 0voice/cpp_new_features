# cpp_new_features
2021年最新整理，500个c++11/14/17/20/23的新特性代码案例，包含lambda匿名函数，右值引用，auto，coroutine库，synchronization库，持续更新中......

-----------

# C++新特性

* [C++11新特性](#cpp_11)
* [C++14新特性](#cpp_14)
* [C++17新特性](#cpp_17)
* [C++20新特性](#cpp_20)
* [C++23新特性](#cpp_23)

<br/>

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

#### <h5 id="cpp_11_RTTI_Primary_type_categories">Primary type categories</h5>

* [is_void](#cpp_11_is_void)
* [is_integral](#cpp_11_is_integral)
* [is_floating_point](#cpp_11_is_floating_point)
* [is_array](#cpp_11_is_array)
* [is_enum](#cpp_11_is_enum)
* [is_union](#cpp_11_is_union)
* [is_class](#cpp_11_is_class)
* [is_function](#cpp_11_is_function)
* [is_pointer](#cpp_11_is_pointer)
* [is_lvalue_reference](#cpp_11_is_lvalue_reference)
* [is_rvalue_reference](#cpp_11_is_rvalue_reference)
* [is_member_object_pointer](#cpp_11_is_member_object_pointer)
* [is_member_function_pointer](#cpp_11_is_member_function_pointer)

#### <h5 id="cpp_11_RTTI_Composite_type_categories">Composite type categories</h5>

* [is_fundamental](#cpp_11_is_fundamental)
* [is_arithmetic](#cpp_11_is_arithmetic)
* [is_scalar](#cpp_11_is_scalar)
* [is_object](#cpp_11_is_object)
* [is_compound](#cpp_11_is_compound)
* [is_reference](#cpp_11_is_reference)
* [is_member_pointer](#cpp_11_is_member_pointer)

#### <h5 id="cpp_11_RTTI_Type_categories">Type categories</h5>

* [is_const](#cpp_11_is_const)
* [is_volatile](#cpp_11_is_volatile)
* [is_trivial](#cpp_11_is_trivial)
* [is_trivially_copyable](#cpp_11_is_trivially_copyable)
* [is_standard_layout](#cpp_11_is_standard_layout)
* [is_literal_type](#cpp_11_is_literal_type)
* [is_empty](#cpp_11_is_empty)
* [is_polymorphic](#cpp_11_is_polymorphic)
* [is_abstract](#cpp_11_is_abstract)
* [is_signed](#cpp_11_is_signed)
* [is_unsigned](#cpp_11_is_unsigned)

#### <h5 id="cpp_11_RTTI_Supported_operations">Supported operations</h5>

* [is_constructible](#cpp_11_is_constructible)
* [is_trivially_constructible](#cpp_11_is_trivially_constructible)
* [is_nothrow_constructible](#cpp_11_is_nothrow_constructible)
* [is_default_constructible](#cpp_11_is_default_constructible)
* [is_trivially_default_constructible](#cpp_11_is_trivially_default_constructible)
* [is_nothrow_default_constructible](#cpp_11_is_nothrow_default_constructible)
* [is_copy_constructible](#cpp_11_is_copy_constructible)
* [is_trivially_copy_constructible](#cpp_11_is_trivially_copy_constructible)
* [is_nothrow_copy_constructible](#cpp_11_is_nothrow_copy_constructible)
* [is_move_constructible](#cpp_11_is_move_constructible)
* [is_trivially_move_constructible](#cpp_11_is_trivially_move_constructible)
* [is_nothrow_move_constructible](#cpp_11_is_nothrow_move_constructible)
* [is_assignable](#cpp_11_is_assignable)
* [is_trivially_assignable](#cpp_11_is_trivially_assignable)
* [is_nothrow_assignable](#cpp_11_is_nothrow_assignable)
* [is_copy_assignable](#cpp_11_is_copy_assignable)
* [is_trivially_copy_assignable](#cpp_11_is_trivially_copy_assignable)
* [is_nothrow_copy_assignable](#cpp_11_is_nothrow_copy_assignable)
* [is_move_assignable](#cpp_11_is_move_assignable)
* [is_trivially_move_assignable](#cpp_11_is_trivially_move_assignable)
* [is_nothrow_move_assignable](#cpp_11_is_nothrow_move_assignable)
* [is_destructible](#cpp_11_is_destructible)
* [is_trivially_destructible](#cpp_11_is_trivially_destructible)
* [is_nothrow_destructible](#cpp_11_is_nothrow_destructible)
* [has_virtual_destructor](#cpp_11_has_virtual_destructor)

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

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_unordered_map.cpp">std::unordered_map</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_unordered_multimap.cpp">std::unordered_multimap</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_unordered_set.cpp">std::unordered_set</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_unordered_multiset.cpp">std::unordered_multiset</a>

#### <h5 id="cpp_11_tuple">元组std::tuple</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_tuple_make_tuple.cpp">std::make_tuple</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_tuple_get.cpp">std::get</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_tuple_tie.cpp">std::tie</a>

#### <h5 id="cpp_11_hash">hash</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_u16string.cpp">std::hash&lt;std::u16string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_u32string.cpp">std::hash&lt;std::u32string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_wstring.cpp">std::hash&lt;std::wstring&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_error_code.cpp">std::hash&lt;std::error_code&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_bitset.cpp">std::hash&lt;std::bitset&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_type_index.cpp">std::hash&lt;std::type_index&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_vector.cpp">std::hash&lt;std::vector&lt;bool&gt;&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_thread_id.cpp">std::hash&lt;std::thread&gt;</a>

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
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">类成员初始化</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">仿函数(functor)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">委托构造函数</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">继承构造函数</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">移动构造函数</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">移动赋值运算符</a>
<br />

### <h3 id="cpp_11_template">模板</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">尖括号“>”</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">别名模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">外部模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">可变参数模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">默认模板参数</a>

<br />

### <h3 id="cpp_11_template">原子操作</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;bool&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;char&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;signed char&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;unsigned char&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;short&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;unsigned short&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;int&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;unsigned int&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;long&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;unsigned long&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;long long&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;unsigned long long&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;char8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;char16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;char32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;wchar_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int_least8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint_least8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int_least16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint_least16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int_least32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint_least32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int_least64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint_least64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int_fast8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint_fast8_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int_fast16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint_fast16_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int_fast32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint_fast32_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::int_fast64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uint_fast64_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::intptr_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uintptr_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::size_t&gt;/a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::ptrdiff_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::intmax_t&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic&lt;std::uintmax_t&gt;</a>

<br />

### <h3 id="cpp_11_template">线程</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::thread</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::mutex</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::lock</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::call_once</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::atomic</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::condition_variable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">async</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">volatile</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::future</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::thread_local</a>

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
<!-- 
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">错误类别的基类</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">鉴别通用错误类别</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">鉴别操作系统错误类别</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">保有可移植的错误码</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">列出所有标准<cerrno>宏常量的std::error_condition枚举</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">std::condition_variable</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">保有依赖于平台的错误码</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">用于报告拥有error_code的错误条件的异常类</a>
-->
<br />

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
	
### <h5 id="cpp_headfile_type_traits">定义于头文件<type_traits></h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_null_pointer.cpp">检查类型是否为 std::nullptr_t</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">is_final(检查类型是否为 final 类类型)</a>

### <h5 id="cpp_headfile_utility">定义于头文件 <utility></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">exchange(将实参替换为一个新值，并返回其先前值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">integer_sequence(实现编译时整数数列)</a>

### <h5 id="cpp_headfile_initializer_list">定义于头文件 <initializer_list></h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">rbegin(返回指向一个容器或数组的逆向迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">crbegin(返回指向一个容器或数组的逆向迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">rend(返回容器或数组的逆向尾迭代器)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">crend(返回容器或数组的逆向尾迭代器)</a>

 
 

	
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

	
<br/>

## <h1 id="cpp_17">C++17新特性</h1>

### <h3 id="cpp_17_keywords">关键字</h3>

#### <h5 id="cpp_17_meaning_changed__OR__new_meaning_added">含义变化或者新增含义关键字（meaning changed or new meaning added）</h5>

* [register](https://github.com/0voice/cpp_new_features/blob/main/cpp_17/001_meaning_keywords_README.md#register)
	
### <h3 id="cpp_17_RTTI">类型支持（基本类型、RTTI、类型特性）</h3>
	
### <h5 id="cpp_headfile_type_traits">定义于头文件<type_traits></h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_byte.cpp">byte(字节类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_aggregate(检查类型是否聚合类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_swappable_with(检查一个类型的对象是否能与同类型或不同类型的对象交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_swappable(检查一个类型的对象是否能与同类型或不同类型的对象交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_nothrow_swappable_with(检查一个类型的对象是否能与同类型或不同类型的对象交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_nothrow_swappable(检查一个类型的对象是否能与同类型或不同类型的对象交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_invocable(检查类型能否以给定的实参类型调用（如同以 std::invoke）)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_invocable_r(检查类型能否以给定的实参类型调用（如同以 std::invoke）)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_nothrow_invocable(检查类型能否以给定的实参类型调用（如同以 std::invoke）)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_nothrow_invocable_r(检查类型能否以给定的实参类型调用（如同以 std::invoke）)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">invoke_result(推导以一组实参调用一个可调用对象的结果类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">void_t(变参别名模板)</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">conjunction(变参的逻辑与元函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">disjunction(变参的逻辑或元函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">negation(逻辑非元函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">void_t(变参别名模板)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">bool_constant(具有指定值的指定类型的编译期常量)</a>

### <h5 id="cpp_headfile_utility">定义于头文件 <utility></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">as_const(获得到其实参的 const 引用)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">in_place(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">in_place_type(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">in_place_index(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">in_place_t(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">in_place_type_t(原位构造标签)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">in_place_index_t(原位构造标签)</a>

	
### <h5 id="cpp_headfile_tuple">定义于头文件 <tuple></h5>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">apply(以一个实参的元组来调用函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">make_from_tuple(以一个实参元组构造对象)</a>

### <h5 id="cpp_headfile_optional">定义于头文件 <optional></h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">optional(可能或可能不保有一个对象的包装器)</a>
	
### <h5 id="cpp_headfile_variant">定义于头文件 <variant></h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">variant(类型安全的可辨识联合体)</a>
	
### <h5 id="cpp_headfile_any">定义于头文件 <any></h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">any(可保有任何可复制构造 (CopyConstructible) 类型的实例的对象)</a>

### <h5 id="cpp_headfile_charconv">定义于头文件 <charconv></h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">to_chars(转换整数或浮点值到字符序列象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">from_chars(转换字符序列到整数或浮点值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">chars_format(指定 std::to_chars 和 std::from_chars 所用的格式)</a>

### <h5 id="cpp_headfile_initializer_list">定义于头文件 <initializer_list></h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">empty(检查容器是否为空)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">data(获得指向底层数组的指针)</a>
  

  
 

<br/>

## <h1 id="cpp_20">C++20新特性</h1>
	
### <h3 id="cpp_20_keywords">关键字</h3>

#### <h5 id="cpp_20_new_keywords">新增关键字</h5>

* [char8_t](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_new_keywords_README.md#char8_t)
* [concept](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_new_keywords_README.md#concept)
* [consteval](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_new_keywords_README.md#consteval)
* [co_await](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_new_keywords_README.md#co_await)
* [co_return](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_new_keywords_README.md#co_return)
* [co_yield](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_new_keywords_README.md#co_yield)
* [requires](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_new_keywords_README.md#requires)
	
#### <h5 id="cpp_20_meaning_changed__OR__new_meaning_added">含义变化或者新增含义关键字（meaning changed or new meaning added）</h5>

* [export](https://github.com/0voice/cpp_new_features/blob/main/cpp_20/001_meaning_keywords_README.md#export)
	
### <h3 id="cpp_20_RTTI">类型支持（基本类型、RTTI、类型特性）</h3>

### <h5 id="cpp_headfile_type_traits">定义于头文件<type_traits></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_bounded_array(检查类型是否为有已知边界的数组类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_unbounded_array(检查类型是否为有未知边界的数组类型)</a>
	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_layout_compatible(检查二个类型是否布局兼容)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_pointer_interconvertible_base_of(检查一个类型是否为另一类型的指针可互转换（起始）基类)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_pointer_interconvertible_with_class(检查一个类型的对象是否与该类型的指定子对象指针可互转换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_corresponding_member(检查二个指定成员是否在二个指定类型中的公共起始序列中彼此对应)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_nothrow_convertible(检查是否能转换一个类型为另一类型)</a>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">remove_cvref(将 std::remove_cv 与 std::remove_reference 结合)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">common_reference(确定类型组的共用引用类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">basic_common_reference(确定类型组的共用引用类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">type_identity(返回不更改的类型实参)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_constant_evaluated(检测调用是否在常量求值的语境内发生)</a>

### <h3 id="cpp_20_Coroutine">协程支持</h3>

### <h5 id="cpp_headfile_coroutine">定义于头文件 <coroutine></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">coroutine_traits(用于发现协程承诺类型的特征类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">coroutine_handle(用于指代暂停或执行的协程)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">noop_coroutine(创建在等待或销毁时无操作的协程柄)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">noop_coroutine_promise(用于无可观察作用的协程)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">noop_coroutine_handle(std::coroutine_handle<std::noop_coroutine_promise> ，有意用于指代无操作协程)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">suspend_never(指示 await 表达式应该决不暂停)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">suspend_always(指示 await 表达式应该始终暂停)</a>

### <h3 id="cpp_20_compare">三路比较</h3>

### <h5 id="cpp_headfile_compare">定义于头文件 <compare></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">std::coroutine_traits</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">std::coroutine_handle</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">three_way_comparable(指定运算符 <=> 在给定类型上产生一致的结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">three_way_comparable_with(指定运算符 <=> 在给定类型上产生一致的结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">partial_ordering(三路比较的结果类型，支持所有 6 种运算符，不可替换，并允许不可比较的值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">weak_ordering(三路比较的结果类型，支持所有 6 种运算符且不可替换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">strong_ordering(三路比较的结果类型，支持所有 6 种运算符且可替换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_eq(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_neq(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_lt(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_lteq(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_gt(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_gteq(具名比较函数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">compare_three_way(实现 x <=> y 的函数对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">compare_three_way_result(获得三路比较运算符 <=> 在给定类型上的结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">common_comparison_category(给定的全部类型都能转换到的最强比较类别)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">strong_order(进行三路比较并产生 std::strong_ordering 类型结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">weak_order(进行三路比较并产生 std::weak_ordering 类型结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">partial_order(进行三路比较并产生 std::partial_ordering 类型结果)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">compare_strong_order_fallback(进行三路比较并产生 std::strong_ordering 类型的结果，即使 operator<=> 不可用)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">compare_weak_order_fallback(进行三路比较并产生 std::weak_ordering 类型的结果，即使 operator<=> 不可用)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">compare_partial_order_fallback(进行三路比较并产生 std::partial_ordering 类型的结果，即使 operator<=> 不可用</a>

### <h5 id="cpp_headfile_concepts">定义于头文件 <concepts></h5>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">ranges::swap(交换两个对象的值)</a>

### <h5 id="cpp_headfile_utility">定义于头文件 <utility></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">cmp_equal(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">cmp_not_equal(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">cmp_less(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">cmp_less_equal(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">cmp_greater_equal(比较二个整数值，而无转换所致的值更改)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">in_range(检查整数值是否在给定整数类型的范围内)</a>
	
### <h5 id="cpp_headfile_format">定义于头文件 <format></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">format(在新 string 中存储参数的格式化表示)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">format_to(通过输出迭代器写其参数的格式化表示)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">format_to_n(通过输出迭代器写其参数的格式化表示，不超出指定的大小)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">formatted_size(确定存储其参数的格式化表示所需的字符数)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">vformat(std::format 的使用类型擦除的参数表示的非模板变体)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">vformat_to(std::format_to 的使用类型擦除的参数表示的非模板变体)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">formatter(定义给定类型的格式化规则的类模板)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">format_error(格式化错误时抛出的异常类型)</a>

### <h3 id="cpp_20_compare">Concepts library(概念库)</h3>

### <h5 id="cpp_headfile_concepts">定义于头文件 <concepts></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">same_as(指定一个类型与另一类型相同)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">derived_from(指定一个类型派生自另一类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">convertible_to(指定一个类型能隐式转换成另一类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">common_reference_with(指定两个类型共有一个公共引用类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">common_with(指定两个类型共有一个公共类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">integral(指定类型为整型类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">signed_integral(指定类型为有符号的整型类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">unsigned_integral(指定类型为无符号的整型类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">floating_point(指定类型为浮点类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">assignable_from(指定一个类型能从另一类型赋值)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">swappable(指定一个类型能进行交换，或两个类型能彼此交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">swappable_with(指定一个类型能进行交换，或两个类型能彼此交换)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">destructible(指定能销毁该类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">constructible_from(指定该类型的变量能从一组实参类型进行构造，或绑定到一组实参类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">default_initializable(指定能默认构造一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">move_constructible(指定能移动构造一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">copy_constructible(指定能复制构造和移动构造一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">boolean-testable(指定能用于布尔语境的类型)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">equality_comparable(指定运算符 == 为等价关系)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">equality_comparable_with(指定运算符 == 为等价关系)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">totally_ordered(指定比较运算符在该类型上产生全序)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">totally_ordered_with(指定比较运算符在该类型上产生全序)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">movable(指定能移动及交换一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">copyable(指定能复制、移动及交换一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">semiregular(指定能赋值、移动、交换及默认构造一个类型的对象)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">regular(指定类型为正则，即它既为 semiregular 亦为 equality_comparable)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">invocable(指定能以给定的一组实参类型调用的可调用类型)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">regular_invocable(指定能以给定的一组实参类型调用的可调用类型)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">predicate(指定可调用类型为布尔谓词)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">relation(指定可调用类型为二元关系)</a>	
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">equivalence_relation(指定 relation 施加等价关系)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">strict_weak_order(指定一个 relation 所强加的是严格弱序)</a>




	
	
<br/>

## <h1 id="cpp_23">C++23新特性</h1>

### <h3 id="cpp_23_RTTI">类型支持（基本类型、RTTI、类型特性）</h3>

### <h5 id="cpp_headfile_type_traits">定义于头文件<type_traits></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_rtti_is_aggregate.cpp">is_scoped_enum(检查类型是否为有作用域枚举类型)</a>

### <h5 id="cpp_headfile_utility">定义于头文件 <utility></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">to_underlying(转换枚举到其底层类型)</a>

### <h5 id="cpp_headfile_stacktrace">定义于头文件 <stacktrace></h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">stacktrace_entry(栈踪中求值的表示)</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_14/003_rtti_is_final.cpp">basic_stacktrace(由栈踪条目组成的调用序列的近似表示)</a>

