#include <iostream> 
#include <vector> 

using namespace std; 

class PascalTriangle
{
private:
    /* data */
public:
    PascalTriangle(/* args */);
    ~PascalTriangle();

    vector<vector<int> > generate(int numRows); 
};

PascalTriangle::PascalTriangle(/* args */)
{
}

PascalTriangle::~PascalTriangle()
{
}

vector<vector<int> > PascalTriangle::generate(int numRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    vector<vector<int> > temp;
    if(numRows == 0)
  	    return temp;
    vector<int> row;
    row.push_back(1);
    temp.push_back(row);
    if(numRows == 1)
    	return temp;
    row.push_back(1);
    temp.push_back(row);
    if(numRows == 2)
    	return temp;
    for(int j = 3;j <= numRows;j++){
    	vector<int> row;
    	row.push_back(1);
    	for(int i = 1;i < j-1;i++){
    		row.push_back(temp[j-2][i-1] + temp[j-2][i]);
    	}
    	row.push_back(1);
    	temp.push_back(row);
    }
    return temp;
        
    }


int main(int argc, char** argv)
{
    PascalTriangle pascaltriangle; 

    int nrow = 3; 

    vector<vector<int> > result; 

    result = pascaltriangle.generate(nrow); 

    for (size_t i = 0; i < result.size(); i++)
    {
        for (size_t j = 0; j < result[i].size(); j++)
        {
            std::cout  << result[i][j] << " " ;  
        }
        cout << std::endl; 
    }
    


    return 0; 
}