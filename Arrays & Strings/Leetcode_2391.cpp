class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP = 0, pickM=0, pickG=0;
        int lastP = 0, lastM=0, lastG=0;
        int travelP = 0, travelM=0, travelG=0;
        
        for(int i=0; i<garbage.size(); ++i){
            string ch = garbage[i];
            for(int j=0; j<ch.size(); ++j){
                int a = ch[j];
                if(a == 'M'){
                    ++pickM;
                    lastM = i;
                }
                else if(a == 'G'){
                    ++pickG;
                    lastG = i;
                }
                else if(a == 'P'){
                    ++pickP;
                    lastP = i;
                }
            }
        }

        for(int i=0; i<lastP; ++i){
            travelP += travel[i];
        }
        for(int i=0; i<lastM; ++i){
            travelM += travel[i];
        }
        for(int i=0; i<lastG; ++i){
            travelG += travel[i];
        }

        int ans = (pickP + pickG + pickM) + (travelP + travelG + travelM);
        return ans;
    }
};
