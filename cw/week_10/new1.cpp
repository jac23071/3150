#include <iostream>
#include <memory>

using std::cout, std::cin, std::string, std::endl;

	template <class T>
	std::ostream& operator <<(
		std::ostream& os,
		const std::shared_ptr<T>& p
	){
		return os << p.get() << '[' << p.use_count() << ']'; // PLZ NEVER USE THIS LEGACY TECHNIQUE
	}

struct Foo{
	int a; 
	Foo(int x): a(x) {};
	~Foo(){ //destructor: called when a struct gets dealloc'd
		cout << "Foo(" << this << ") is destroyed!" << endl;
	}
};

void fun (std::shared_ptr<Foo> p){
	cout << "p in fun= " << p << endl;
}

void funToo (std::shared_ptr<Foo> p){
	cout << "p in funToo= " << p << endl;
}

void test1() {

	auto p = std::make_shared<Foo>(42);
	auto q = p;
	cout << "q is " << q << endl;
	fun(q);
	cout << "after fun q is " << endl;
	cout << "before funToo" << q << endl;
	funToo(q);
	cout << "after funToo" << q << endl;
	q.reset();
	cout << "after q.reset()" << q << endl;
	p.reset();
	cout << "after p.reset()" << p << endl;

}

int main(){
	test1();
	cout << "Done!" << endl;
	return 0;

}
