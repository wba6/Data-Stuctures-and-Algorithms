//
// Created by william on 11/30/22.
//

#include <vector>
void BubbleShort(std::vector<int>& vals) {
        for(int i = 0;i<vals.size(); i++ ){
            for (int j = 0; j < vals.size()-i-1; ++j) {
                if(vals.at(j) > vals.at(j+1)){
                    std::iter_swap(&vals.at(j),&vals.at(j+1));
                }
            }
        }
};