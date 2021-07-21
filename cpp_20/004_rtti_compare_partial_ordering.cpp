void test_compare() 
{
    struct ts {
      int id;
      float f;
      std::partial_ordering operator<=>(const ts& that) const
      {
          if(id<0 || that.id<0)  return std::partial_ordering::unordered;
          if(f>that.f) return std::partial_ordering::greater;
          if(f<that.f) return std::partial_ordering::less;          
          return std::partial_ordering::equivalent;
      }
      bool operator==(const ts& that) const
      {
          return (*this<=>that)==0;
      }            
    };
    
    ts ta = {2, 1.0f};  
    ts  tb={3, 1.0f};
    std::cout<< (ta==tb) <<std::endl;
    std::cout<< (ta>tb) <<std::endl;
}
