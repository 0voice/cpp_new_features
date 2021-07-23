struct Box {
	int value1;
	int value2;
};

template <typename _CharT>
struct std::formatter<Box, _CharT> {
	using _Pc = std::basic_format_parse_context<_CharT>;
	typename _Pc::iterator parse(_Pc& _ParseCtx)
	{	// 此函数用来解析字符串
		// 相关代码逻辑可参考 https://zh.cppreference.com/w/cpp/utility/format/formatter
		// 以及查看源码 format 文件的 _Formatter_base 类
		// C++内置类型的特化formatter均继承自此基类
		// 本人也在啃此源码中，但最近没时间，打算留待假期
	}

	template <class _FormatContext>
    typename _FormatContext::iterator format(const Box& v, _FormatContext& format_context)
    {
    	//
    }
}
