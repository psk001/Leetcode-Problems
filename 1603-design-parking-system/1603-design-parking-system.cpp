class ParkingSystem {
    int c1, c2, c3;
public:
    ParkingSystem(int big, int medium, int small) {
        c1=big, c2=medium, c3=small;
    }
    
    bool addCar(int carType) {
        if(carType==1 and c1>0){
            c1--;
            return true;
        }else if(carType==2 and c2>0){
            c2--;
            return true;
        }else if(carType==3 and c3>0){
            c3--;
            return true;
        }
        
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */