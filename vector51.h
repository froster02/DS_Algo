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
            int *oldArr = arr;
            arr = new int[2*ts];
            ts = 2 * ts;
            for(int i=0; i<cs; i++)
                arr[i] = oldArr[i];
            //clear the old memeory
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
};