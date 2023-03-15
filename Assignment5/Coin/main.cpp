#include "Coin.cpp"

main(){
    int times_heads = 0;
    int times_tails = 0;
    Coin coin;
    for (int i = 1; i <= 20; i++){
        coin.toss();
        cout<<"Facing Coin "<<i<<" : "<<coin.getSideUp()<<endl;
        if (coin.getSideUp() == "heads")
        {
            times_heads++;
        }else
        {
            times_tails++;
        }
    }
    cout<<"Numbers of times heads is : "<<times_heads<<endl;
    cout<<"Numbers of times tails is : "<<times_tails;
}