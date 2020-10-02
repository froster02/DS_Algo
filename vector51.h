/************************************************************   |ERROR|    *******************************************************/
class Vector51 {
    int cs;
    int ms;
    int *arr;

public:
    Vector51(){
        cs = 0;
        ms = 1;
        arr = new int[ms];
    }
    void push_back(int d){
        if(cs == ms){
            //array is fulls
            int *oldArr = arr;
            arr = new int[2*ms];
            int ms = 2 * ms;
            for(int i=0; i<cs; i++)
                arr[i] = oldArr[i];
            //clear the old memeory
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back(){
        cs--;
    }
    int front(){
        return arr[0];
    }
    int back(){
        return arr[cs - 1];
    }
    bool empty() {
        return cs == 0;
    }
    int Capacity(){
        return ms;
    }
    int at( int i){
        return arr[i];
    }
};