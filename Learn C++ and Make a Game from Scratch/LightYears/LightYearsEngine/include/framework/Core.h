#include<stdio.h>
#include <memory>
#include <map>
#include <unordered_map>

namespace ly {

	/*
	This piece of code uses template aliases for the convenience of using some standard C++ types and containers:
	These aliases are made to make it easier to work with types and containers in code and can be useful for improving clarity and reducing the effort of writing programs.
	unique: This is an alias for std::unique_ptr, which is the object's own property and automatically deletes it when it goes out of scope.
	*/
	template <typename T>
	using unique = std::unique_ptr<T>;

	/*
	shared: This is an alias for std::shared_ptr that uses a reference counter to manage memory and object sharing.	*/
	template <typename T>
	using shared = std::shared_ptr<T>;

	/*
	weak: This is an alias for std::weak_ptr that serves to create weak references to objects managed by std::shared_ptr.
	*/
	template <typename T>
	using weak = std::weak_ptr<T>;

	/*
	List: This is an alias for std::vector, which is a dynamic array of objects.
	*/
	template <typename T>
	using List = std::vector<T>;

	/*
	Map: This is an alias for std::map, which is an associative container containing key-value pairs ordered by key. 
	At the same time, Pr is the default comparison function that determines the order of sorting keys in the Map.
	Ordered
	*/
	template <typename keyType, typename valType, typename Pr = std::less<keyType>>
	using Map = std::map<keyType, valType, Pr>;

	//faster and unordered
	template <typename keyType, typename valType, typename Hasher = std::hash<keyType>>
	using Dictionary = std::unordered_map<keyType, valType, Hasher>;
	


	//a macro
	#define LOG(M, ...) printf(M "\n", ##__VA_ARGS__)
}