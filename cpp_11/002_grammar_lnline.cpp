namespace Parent
{
 
    inline namespace Child1
    {
        struct child1_data{int a;} ;
    }
    inline namespace Child2
    {
        struct child2_data{int b;} ;
    }
    namespace child3
    {
        child1_data data1;   
        child2_data data2;   
    }
}
