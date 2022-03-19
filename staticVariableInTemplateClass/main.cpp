#include <iostream>
#include <assert.h>

using namespace std;

template<class Type>
class TemplateClass{
public:
	Type a;
	inline const static bool b = true;
};


int main(){
	TemplateClass<int> intTemplateClass;
	TemplateClass<float> floatTemplateClass;
	cout << "address of intBase.sm: " <<  &(intTemplateClass.b) << endl;
	cout << "address of floatBase.sm: " <<  &(floatTemplateClass.b) << endl;
	
	assert(&(intTemplateClass.b) != &(floatTemplateClass.b));
	return 0;
}