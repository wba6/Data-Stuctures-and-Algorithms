//
// Created by william on 11/30/22.
//

#include <vector>
void BubbleSort(std::vector<int>& vals) {
    //loop though n times which is the size of the list
        for(int i = 0;i<vals.size(); i++ ){
            //loop through n-i-1 times
            for (int j = 0; j < vals.size()-i-1; ++j) {
                //compare each value to the one after it
                if(vals.at(j) > vals.at(j+1)){
                    //if greater swap the values
                    std::iter_swap(&vals.at(j),&vals.at(j+1));
                }
            }
        }
};