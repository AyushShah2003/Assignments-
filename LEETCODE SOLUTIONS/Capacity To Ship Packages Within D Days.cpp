class Solution {
public:
    vector<int> weights;
    int D;
    
    bool possible(int C){
        int days = 0;
        int i = 0; //next day starts from here
        
        while(i < weights.size()){
            int cap = 0;
            while(i < weights.size() && cap + weights[i] <= C){
                cap += weights[i++];
            }
            days++;
        }
        
        return days <= D;
    };
    
    int shipWithinDays(vector<int>& weights, int D) {
        this->weights = weights;
        this->D = D;
        
        //the capcacity must >= max weight of a goods
        int l = *max_element(weights.begin(), weights.end());
        //we can ship in 1 day
        int r = accumulate(weights.begin(), weights.end(), 0);
        int mid;
        
        while(l <= r){
            mid = (l + r)/2;
            // cout << l << " " << mid << " " << r << " " << possible(mid) << endl;
            if(possible(mid)){
                if(mid == l) return mid;
                r = mid;
            }else{
                //mid is not valid, increase the lower bound
                l = mid+1;
            }
            
        }
        
        return mid;
    }
};
