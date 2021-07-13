# cpp_new_features
2021年最新整理，500个c++11/14/17/20的新特性代码案例，包含lambda匿名函数，右值引用，auto，coroutine库，synchronization库，持续更新中......

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

* [thread_local](#cpp_11_keywords_thread_local)
* [static_assert](#cpp_11_keywords_static_assert)
* [nullptr](#cpp_11_keywords_nullptr)
* [noexcept](#cpp_11_keywords_noexcept)
* [decltype](#cpp_11_keywords_decltype)
* [constexpr](#cpp_11_keywords_constexpr)
* [char32_t](#cpp_11_keywords_char32_t)
* [char16_t](#cpp_11_keywords_char16_t)
* [alignof](#cpp_11_keywords_alignof)
* [alignas](#cpp_11_keywords_alignas)


#### <h5 id="cpp_11_meaning_changed__OR__new_meaning_added">含义变化或者新增含义关键字（meaning changed or new meaning added）</h5>

* [auto](#cpp_11_keywords_auto)
* [class](#cpp_11_keywords_class)
* [default](#cpp_11_keywords_default)
* [delete](#cpp_11_keywords_delete)
* [export](#cpp_11_keywords_export)
* [extern](#cpp_11_keywords_extern)
* [inline](#cpp_11_keywords_inline)
* [mutable](#cpp_11_keywords_mutable)
* [sizeof](#cpp_11_keywords_sizeof)
* [struct](#cpp_11_keywords_struct)
* [using](#cpp_11_keywords_using)

<br />

### <h3 id="cpp_11_stl">STL容器</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_array.cpp">std::array</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_forward_list.cpp">std::forward_list</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_begin.cpp">std::begin</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_end.cpp">std::end</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_move.cpp">std::move</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_container_init.cpp">容器初始化</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_emplace.cpp">emplace</a>

#### <h5 id="cpp_11_new_unordered_containers">无序容器</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unordered_map.cpp">std::unordered_map</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unordered_multimap.cpp">std::unordered_multimap</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unordered_set.cpp">std::unordered_set</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_unordered_multiset.cpp">std::unordered_multiset</a>

#### <h5 id="cpp_11_tuple">元组std::tuple</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_make_tuple.cpp">std::make_tuple</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_get.cpp">std::get</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_std_tie.cpp">std::tie</a>

#### <h5 id="cpp_11_hash">hash</h5>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::u16string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::u32string&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::wstring&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::error_code&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::bitset&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::unique_ptr&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::shared_ptr&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::type_index&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp">std::hash&lt;std::vector&lt;bool&gt;&gt;</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_stl_hash_std_string.cpp"><p>std::hash&lt;std&#58;&#58;thread&#58;&#58;id&gt;</p></a>

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
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">显式默认和删除的函数</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_class_type_alias.cpp">并行动态初始化和析构</a>

<br />

### <h3 id="cpp_11_template">模板</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">尖括号“>”</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">别名模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">外部模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">可变参数模板</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">默认模板参数</a>

<br />

### <h3 id="cpp_11_template">原子操作</h3>

* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">atomic_bool</a>
* <a href="https://github.com/0voice/cpp_new_features/blob/main/cpp_11/003_template_std_unique_ptr.cpp">atomic_int</a>

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

<h1 id="cpp_14">C++14新特性</h1>

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

<h1 id="cpp_17">C++17新特性</h1>

<h1 id="cpp_20">C++20新特性</h1>

<h1 id="cpp_23">C++23新特性</h1>
	
