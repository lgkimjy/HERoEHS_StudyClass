#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int blackjack, num_of_cards, card, closest;
    int i, j, k, sum, diff, stacked;
    vector<int> cards;
    vector<int> sum_3cards;

    cin>>num_of_cards>>blackjack;

    for(i=0; i<num_of_cards; i++){
        cin>>card;
        cards.push_back(card);
    }

    for(i=0; i<cards.size(); i++){
        for(j=0; j<cards.size(); j++){
            for(k=0; k<cards.size(); k++){
                if(i!=j && i!=k && j!=k){
                    sum = cards[i] + cards[j] + cards[k];
                    sum_3cards.push_back(sum);
                }
            }
        }
    }
    stacked = blackjack;
    for(i=0; i<sum_3cards.size(); i++){
        diff = blackjack - sum_3cards[i];
        if(diff == 0){
            closest = sum_3cards[i];
            break;
        }
        else if(diff < 0);
        else if(diff > 0 && diff < stacked){
            closest = sum_3cards[i];
            stacked = diff;
        }
    }

    cout<<closest<<endl;
    
    return 0;
}