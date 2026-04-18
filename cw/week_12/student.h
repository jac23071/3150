class Student {
public:
	Student() {mt_ = final_ = 0;}
	Student(const std::string& s){
		name_ = s;
		mt_ = final_ = 0;
	}
	Student(const Student& s2){
		name_ = s2.name_;
		mt_ = s2.mt_;
		final_ = s2.final_;
		for (double x : s2.homeworks_)
			homeworks_.push_back(x);
	}
	//same thing as above but uses init list
	Student (const Student& s2):
		name_(s2.name_),
		mt_(s2.mt_),
		final_(s2.final_),
		homeworks_(s2.homeworks_){}
	Student (Student&& other):
		name_(std::move(other.name_)),
		mt_(other.mt_),
		final_(other.final_)
		homeworks_(std::move(other.homeworks_)){}
	Student& operator=(const Student& s){
		if (this == &s){return *this};

		name_ = s.name_;
		mt_ = s.mt_;
		final_ = s.final_;
		homeworks_ = s.homeworks_;
		return *this;
	}
	Student& operator = (Student &&s){
		name_ = std::move(s.name_);
		mt_ = s.mt_;
		final_ = s.final_;
		homeworks_ = std::move(s.homeworks_);
		return *this;
	}
	~Student(){
		std::cout << "Destroyed!"<< std::endl;
	}
	std::string name_;
	double mt_, final_;
	std::vector<double> homeworks_;
	void read(std::istream& is);
	void print(std::ostream& os);
};
