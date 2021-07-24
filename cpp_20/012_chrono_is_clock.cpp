
template<class>
struct is_clock : std::false_type {};
 
template<class T>
    requires
        requires {
            typename T::rep;
            typename T::period;
            typename T::duration;
            typename T::time_point;
            T::is_steady;
            T::now();
        }
struct is_clock<T> : std::true_type {};
