#include <iostream>
using namespace std;

double max(double * numbers, size_t count){      ///besides size_t ,int can be written.
    cout << "doubles overload called" << endl;
    double maximum{0};
    
    for(size_t i{0}; i < count ;++i){
        if(numbers[i]> maximum)
            maximum = numbers[i];
    }
    return maximum;   
}

size_t max(size_t * numbers, size_t count){
    cout << "size_ts overload called" << endl;

    size_t maximum{0};
    
    for(size_t i{0}; i < count ;++i){
        if(numbers[i]> maximum)
            maximum = numbers[i];
    }
    return maximum;   
}



size_t main(){

	double  doubles[] {10.8,30.6,12.3};
	size_t  size_ts[] {1,2,5,2,8,4};

    auto result = max(size_ts,size(size_ts));
    cout << "result : " << result << endl;

    auto result1 = max(doubles,size(doubles));
    cout<<result1<<endl;
   
    return 0;
}