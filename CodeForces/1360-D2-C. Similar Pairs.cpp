    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        short int tc, length, odds, evens;
        cin>>tc;
        for(short int t=0; t<tc; t++){
            odds = 0, evens = 0;
            cin>>length;
            short int numbers[length];
            for(short int i=0; i < length; i++){
                cin>>numbers[i];
                (numbers[i]%2? odds : evens)++;
            }
            if(odds %2 == 0 && evens%2 == 0){
                cout<<"YES"<<endl;
                continue;
            }
            sort(numbers, numbers + length);
     
            bool isFound = false;
            for(short int i=0; i < length; i++){
                if(i + 1 < length && abs(numbers[i + 1] - numbers[i]) == 1){
                    i++;
                    isFound = true;
                    break;
                }
            }
            
            if(isFound){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        
        return 0;
    }