namespace std
{
  template<class _CharT>
  struct char_traits;
  template<typename _CharT, typename _Traits>
  class ostreambuf_iterator;
}
namespace boost { namespace date_time {
	int what;
    template <class CharT, class OutItrT = std::ostreambuf_iterator<CharT, std::char_traits<CharT> > >
    class special_values_formatter
    {
      typedef CharT char_type;
 
      static const char_type default_special_value_names[3][17];
    };
    template <class CharT, class OutItrT>
    const typename special_values_formatter<CharT, OutItrT>::char_type special_values_formatter<CharT, OutItrT>::default_special_value_names[3][17] = {
    };
  }
}
