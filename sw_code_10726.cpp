#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N , M, i;
    int binaryNum[32];
    bool allOne = false;
    cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> M ;
        i = 0;
        allOne = true;
		if(M == 0)
            allOne = false;
        while(N>0){
        	binaryNum[i] = M %2;
            if(binaryNum[i] == 0)
                allOne = false;
            M /= 2;
            N--;
            i++;
        }
        if(allOne == true)
	        cout << "#" << test_case << " ON"<< endl;
        else
            cout << "#" << test_case << " OFF" << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}