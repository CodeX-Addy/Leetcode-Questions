class Solution {
public:

    int countDevice(string&binary){
        int cnt = 0;
        for(auto i:binary){
            cnt += i - '0';
        }
        return cnt;
    }

    int numberOfBeams(vector<string>& bank) {
        vector<int>devices;
        for(auto row:bank)
            devices.push_back(countDevice(row));

        int beams = 0;
        for(int i=0; i<devices.size(); ++i){
            int j = i+1;
            while(j < devices.size()){
                beams += devices[i]*devices[j];
                if(devices[j] == 0)
                    j++;
                else
                    break;
            }
        }
        return beams;
    }
};
