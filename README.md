# cpp_new_features
2021年最新整理，500个c++11/14/17/20的新特性代码案例，包含lambda匿名函数，右值引用，auto，coroutine库，synchronization库

-----------

# C++新特性

* [C++11新特性](#cpp_11)
  * [关键字](#cpp_11_keywords)
    * [新增关键字](#cpp_11_new_keywords)
    * [含义变化或者新增含义关键字](#cpp_11_meaning_changed__OR__new_meaning_added)
  * [新语法](#cpp_11_new_grammar)
    * [预处理](#cpp_11_new_pretreatment)
      * [_Pragma运算符](#cpp_11__Pragma运算符)
    * [C++宏(cplusplus macro)](#cpp_11_cplusplus_macro)
    * [新的for循环](#cpp_11_for)
      * [for(x:range)](#cpp_11_for_range)
    * [对齐支持(alignment support)](#cpp_11_alignment_support)
    * [显式转换操作符(explicit conversion operators)](#cpp_11_explicit_conversion_operators)
    * [静态断言(static assert)](#cpp_11_static_assert)
    * [数字限制(numeric limits)](#cpp_11_numeric_limits)
    * [原始字符串(raw string)](#cpp_11_raw_string)
    * [显式转换操作符(explicit conversion operators)](#cpp_11_explicit_conversion_operators)
    * [追踪返回类型语法(trailing return type syntax)](#cpp_11_trailing_return_type_syntax)
    * [扩展的friend语法(extended friend syntax)](#cpp_11_extended_friend_syntax)
    * [扩展的整型(extended integer types)](#cpp_11_extended_integer_types)
    * [非受限联合体(unrestricted union)](#cpp_11_unrestricted_union)
    * [内联名字空间(lnline namespace)](#cpp_11_lnline_namespace)
    * [用户定义的字面量(user-defined literals)](#cpp_11_user_defined_literals)
    
    											
    																						
							
    
__mindmap__topic新的for循环for(x:range)
* [C++14新特性](#cpp_14)
* [C++17新特性](#cpp_17)
* [C++20新特性](#cpp_20)
* [C++23新特性](#cpp_23)

<!--
# C++关键字
 <img src="https://www.0voice.com/uiwebsite/cpp_new_features/cpp_keywords.png"  alt="C++关键字" />
-->

<br/>
<br/>

## <h2 id="cpp_11">C++11新特性</h2>
### <h3 id="cpp_11_keywords">关键字</h3>

#### <h5 id="cpp_11_new_keywords">新增关键字</h5>

* [thread_local](#cpp_11_thread_local)
* [static_assert](#cpp_11_static_assert)
* [nullptr](#cpp_11_nullptr)
* [noexcept](#cpp_11_noexcept)
* [decltype](#cpp_11_decltype)
* [constexpr](#cpp_11_constexpr)
* [char32_t](#cpp_11_char32_t)
* [char16_t](#cpp_11_char16_t)
* [alignof](#cpp_11_alignof)
* [alignas](#cpp_11_alignas)


#### <h5 id="cpp_11_meaning_changed__OR__new_meaning_added">含义变化或者新增含义关键字（meaning changed or new meaning added）</h5>

* [auto](#cpp_11_auto)
* [class](#cpp_11_class)
* [default](#cpp_11_default)
* [delete](#cpp_11_delete)
* [export](#cpp_11_export)
* [extern](#cpp_11_extern)
* [inline](#cpp_11_inline)
* [mutable](#cpp_11_mutable)
* [sizeof](#cpp_11_sizeof)
* [struct](#cpp_11_struct)
* [using](#cpp_11_using)

<br />
### <h3 id="cpp_11_keywords">新语法</h3>
####  Type support


### <span style="font-weight: bold;">Language support library</span>

####  Type support

##### Additional basic types and macros

* [nullptr_t](#cpp_11_nullptr_t)
* [max_align_t](#cpp_11_max_align_t)

##### Runtime type identification

* [type_index](#cpp_11_type_index)

#### Type traits

##### Type properties

###### Primary type categories

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

###### Composite type categories

  * [is_fundamental](#cpp_11_is_fundamental)
  * [is_arithmetic](#cpp_11_is_arithmetic)
  * [is_scalar](#cpp_11_is_scalar)
  * [is_object](#cpp_11_is_object)
  * [is_compound](#cpp_11_is_compound)
  * [is_reference](#cpp_11_is_reference)
  * [is_member_pointer](#cpp_11_is_member_pointer)

###### Type properties

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
  
###### Supported operations

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

##### Property queries

* [alignment_of](#cpp_11_alignment_of)
* [rank](#cpp_11_rank)
* [extent](#cpp_11_extent)

##### Type relationships
* [is_same](#cpp_11_is_same)
* [is_base_of](#cpp_11_is_base_of)
* [is_convertible](#cpp_11_is_convertible)

#### Type modifications

##### Const-volatility specifiers

* [remove_cv](#cpp_11_remove_cv)
* [remove_const](#cpp_11_remove_const)
* [remove_volatile](#cpp_11_remove_volatile)
* [add_cv](#cpp_11_add_cv)
* [add_const](#cpp_11_add_const)
* [add_volatile](#cpp_11_add_volatile)

##### References
* [remove_reference](#cpp_11_remove_reference)
* [add_lvalue_reference](#cpp_11_add_lvalue_reference)
* [add_rvalue_reference](#cpp_11_add_rvalue_reference)

##### Pointers

* [remove_pointer](#cpp_11_remove_pointer)
* [add_pointer](#cpp_11_add_pointer)

##### Sign modifiers

* [make_signed](#cpp_11_add_pointer)
* [make_unsigned](#cpp_11_make_unsigned)

##### Arrays

* [remove_extent](#cpp_11_remove_extent)
* [remove_all_extents](#cpp_11_remove_all_extents)

##### Miscellaneous transformations

* [aligned_storage](#cpp_11_aligned_storage)
* [aligned_union](#cpp_11_aligned_union)
* [decay](#cpp_11_decay)
* [enable_if](#cpp_11_enable_if)
* [conditional](#cpp_11_conditional)
* [common_type](#cpp_11_common_type)
* [underlying_type](#cpp_11_underlying_type)

##### Helper classes

* [integral_constant](#cpp_11_integral_constant)

####  Program utilities

##### Program termination

* [quick_exit](#cpp_11_quick_exit)
* [_Exit](#cpp_11_exit)
* [at_quick_exit](#cpp_11_at_quick_exit)



<br />
### <span style="font-weight: bold;">Diagnostics library</span>

#### Error handling

##### Capture and storage of exception objects

* [exception_ptr](#cpp_11_exception_ptr)
* [make_exception_ptr](#cpp_11_make_exception_ptr)
* [current_exception](#cpp_11_current_exception)
* [rethrow_exception](#cpp_11_rethrow_exception)
* [nested_exception](#cpp_11_nested_exception)
* [throw_with_nested](#cpp_11_throw_with_nested)
* [rethrow_if_nested](#cpp_11_rethrow_if_nested)

##### Handling of failures in exception handling

* [get_terminate](#cpp_11_get_terminate)

##### Handling of exception specification violations

* [get_unexpected](#cpp_11_get_unexpected)
  
#### System error

* [error_category](#cpp_11_error_category)
* [generic_category](#cpp_11_generic_category)
* [system_category](#cpp_11_system_category)
* [error_condition](#cpp_11_error_condition)
* [errc](#cpp_11_errc)
* [error_code](#cpp_11_error_code)
* [system_error](#cpp_11_system_error)

<br />
### <span style="font-weight: bold;">General utilities library</span>

<span style="font-weight: 700;">Swap and type operations</span>

* [forward](#cpp_11_forward)
* [move](#cpp_11_move)
* [move_if_noexcept](#cpp_11_move_if_noexcept)
* [declval](#cpp_11_declval)

<span style="font-weight: 700;">Pairs and tuples</span>
* [piecewise_construct_t](#cpp_11_piecewise_construct_t)
* [piecewise_construct](#cpp_11_piecewise_construct)
* [tuple](#cpp_11_tuple)
* [tuple_size](#cpp_11_tuple_size)
* [tuple_element](#cpp_11_tuple_element)
  
<span style="font-weight: 700;">Hash support</span>
* [hash](#cpp_11_hash)


#### Smart pointers and allocators

##### Smart pointers

###### Pointer categories

* [unique_ptr](#cpp_11_unique_ptr)
* [shared_ptr](#cpp_11_shared_ptr)
* [weak_ptr](#cpp_11_weak_ptr)

###### Helper classes

* [owner_less](#cpp_11_owner_less)
* [enable_shared_from_this](#cpp_11_enable_shared_from_this)
* [bad_weak_ptr](#cpp_11_bad_weak_ptr)
* [default_delete](#cpp_11_default_delete)

##### Allocators

* [allocator_traits](#cpp_11_allocator_traits)
* [scoped_allocator_adaptor](#cpp_11_scoped_allocator_adaptor)

##### Uninitialized memory algorithms

* [uninitialized_copy_n](#cpp_11_allocator_traits)

##### Garbage collector support

* [declare_reachable](#cpp_11_declare_reachable)
* [undeclare_reachable](#cpp_11_undeclare_reachable)
* [declare_no_pointers](#cpp_11_declare_no_pointers)
* [undeclare_no_pointers](#cpp_11_undeclare_no_pointers)
* [pointer_safety](#cpp_11_pointer_safety)
* [get_pointer_safety](#cpp_11_get_pointer_safety)

##### Miscellaneous

* [pointer_traits](#cpp_11_pointer_traits)
* [addressof](#cpp_11_addressof)
* [align](#cpp_11_align)


#### [unique_ptr](#cpp_11_unique_ptr)
#### [shared_ptr](#cpp_11_shared_ptr)

#### Date and time

##### Clocks

* [system_clock](#cpp_11_system_clock)
* [steady_clock](#cpp_11_steady_clock)
  
##### Time point

* [time_point](#cpp_11_time_point)

##### Duration

* [duration](#cpp_11_duration)

#### Function objects

##### Function wrappers

* [function](#cpp_11_function)
* [bad_function_call](#cpp_11_bad_function_call)
* [mem_fn](#cpp_11_mem_fn)

##### Partial function application

* [bind](#cpp_11_bind)
* [is_bind_expression](#cpp_11_is_bind_expression)
* [is_placeholder](#cpp_11_is_placeholder)
* [_1, _2, _3, _4, ...](#cpp_11__1,_2,_3,_4,...)

##### Reference wrappers

* [reference_wrapper](#cpp_11_reference_wrapper)
* [ref](#cpp_11_ref)
* [cref](#cpp_11_cref)

##### Old binders and adaptors

* [unary_function](#cpp_11_unary_function)
* [binary_function](#cpp_11_binary_function)
* [binder1st](#cpp_11_binder1st)
* [binder2nd](#cpp_11_binder2nd)
* [bind1st](#cpp_11_bind1st)
* [bind2nd](#cpp_11_bind2nd)
* [pointer_to_unary_function](#cpp_11_pointer_to_unary_function)
* [pointer_to_binary_function](#cpp_11_pointer_to_binary_function)
* [ptr_fun](#cpp_11_ptr_fun)
* [mem_fun_t](#cpp_11_mem_fun_t)
* [mem_fun1_t](#cpp_11_mem_fun1_t)
* [const_mem_fun_t](#cpp_11_const_mem_fun_t)
* [const_mem_fun1_t](#cpp_11_const_mem_fun1_t)
* [mem_fun](#cpp_11_mem_fun)
* [mem_fun_ref_t](#cpp_11_mem_fun_ref_t)
* [mem_fun1_ref_t](#cpp_11_mem_fun1_ref_t)
* [const_mem_fun_ref_t](#cpp_11_const_mem_fun_ref_t)
* [const_mem_fun1_ref_t](#cpp_11_const_mem_fun1_ref_t)
* [mem_fun_ref](#cpp_11_mem_fun_ref)
  
#### hash

* [std::hash<std::string>](#cpp_11_std::hash<std::string)
* [std::hash<std::u16string>](#cpp_11_std::hash<std::u16string>)
* [std::hash<std::u32string>](#cpp_11_std::hash<std::u32string>)
* [std::hash<std::wstring>](#cpp_11_std::hash<std::wstring>)
* [std::hash<std::error_code>](#cpp_11_std::hash<std::error_code>)
* [std::hash<std::bitset>](#cpp_11_std::hash<std::bitset>)
* [std::hash<std::unique_ptr>](#cpp_11_std::hash<std::unique_ptr>)
* [std::hash<std::shared_ptr>](#cpp_11_std::hash<std::shared_ptr>)
* [std::hash<std::type_index>](#cpp_11_std::hash<std::type_index>)
* [std::hash<std::vector<bool>>](#cpp_11_std::hash<std::vector<bool>>)
* [std::hash<std::thread::id>](#cpp_11_std::hash<std::thread::id>)

#### Utility functions





#### Program utilities




Date and time
Function objects  −  hash
Utility functions
pair  −   tuple

### Strings library

basic_string
byte  −  multibyte  −  wide

### Containers library

array (C++11)  −  vector  −  deque
map  −  unordered_map (C++11)
set  −  unordered_set (C++11)

### Numerics library

### Input/output library

### Filesystem library


### Regular expressions library

### Atomic operations library

### Thread support library







<h2 id="cpp_14">C++14新特性</h2>

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

<h2 id="cpp_17">C++17新特性</h2>

<h2 id="cpp_20">C++20新特性</h2>

