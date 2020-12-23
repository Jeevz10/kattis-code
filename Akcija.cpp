#include <bits/stdc++.h>
using namespace std;

int main()

{

    int size, next;

    scanf("%d", &size);



    std::priority_queue<int> queue;

    while (size-- > 0)

    {

        scanf("%d", &next);

        queue.push(next);

    }



    int skip = 0, sum = 0;

    while (!queue.empty())

    {

        if (skip != 2) sum += queue.top();

        queue.pop();

        skip = skip == 2 ? 0 : skip + 1;

    }

    printf("%d\n", sum);

    return 0;

}
/*
int main() {
	int tc;
	priority_queue<int> input;
	
	cin >> tc;
	
	for(int i = 0;i < tc;i++) {
		int num;
		
		cin >> num;
		
		input.push(num); 
	}
	
	int sum = 0;
	
	for (int i = 0; i < input.size();i++) {
		
		if (i % 3 == 2) {
			input.pop();
			continue;
		}
		sum += input.top();
		input.pop();	
	}
	
	return 0;
}
*/
/*
int main() {
  	int tc,sum = 0;
  	vector<int> input;
  
  cin >> tc;
  
  for (int i = 0;i < tc;i++) {
    int num;
    
    cin >> num;
    sum += num;
    input.push_back(num);
  }
  
  
  int len,sum2;
  
  len = input.size();
  
  sort(input.begin(),input.end(),greater<int>());
  
  for (int i = 2;i < len;i += 3) {
    sum2 += input[i];
  }
  
  cout << sum - sum2 << endl;
  
  return 0;
}
*/
  
