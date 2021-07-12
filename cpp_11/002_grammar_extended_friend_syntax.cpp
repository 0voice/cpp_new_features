class Poly;
typedef Poly P; 

class LiLei 
{
	friend class Poly; // C++98通过, C++11通过 
}; 

class Jim 
{ 
	friend Poly;       // C++98失败, C++11通过 
};

class HanMei
{ 
	friend P;          // C++98失败, C++11通过 
};
