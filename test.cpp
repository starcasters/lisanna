#include <iostream> // For cerr and cout
#include <cstdlib> // For atoi()
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

class BitReader {
};
class BitWriter {
};

struct FieldInfo {
	
};

class DataType_Base {
	public:
	virtual void* New() = 0;
	virtual void Print(void * Data, void * pFieldInfo) = 0;
	virtual void Serialize(void * Data, void * pFieldInfo, void *  BitWriter) = 0;
	virtual void DeSerialize(void * Data, void * pFieldInfo, void * BitReader) = 0;
	virtual char* Name() = 0;
};

class DT_INT : public DataType_Base {
	public:
	void* New();
	void Print(void * Data, void * pFieldInfo);
	void Serialize(void * Data, void * pFieldInfo, void *  BitWriter);
	void DeSerialize(void * Data, void * pFieldInfo, void * BitReader);
	char* Name();
};

void* DataType_Base::New(){
	cerr << "pure virtual method" << endl;
}
void DataType_Base::Print(void * Data, void * pFieldInfo){
	cerr << "pure virtual method" << endl;
}
void DataType_Base::Serialize(void * Data, void * pFieldInfo, void *  BitWriter){
	cerr << "pure virtual method" << endl;
}
void DataType_Base::DeSerialize(void * Data, void * pFieldInfo, void * BitReader){
	cerr << "pure virtual method" << endl;
}
char* DataType_Base::Name(){
	cerr << "pure virtual method" << endl;
}

void* DT_INT::New(){
}
void DT_INT::Print(void * Data, void * pFieldInfo){
}
void DT_INT::Serialize(void * Data, void * pFieldInfo, void *  BitWriter){
}
void DT_INT::DeSerialize(void * Data, void * pFieldInfo, void * BitReader){
}
char* DT_INT::Name(){
	return "DT_INT";
}

int main() {
 DataType_Base* ab = new DT_INT();
 cout << ab->Name() << endl;
 DataType_Base* aa = (DataType_Base*)ab;
 cout << aa->Name() << endl;
 return 0;
}