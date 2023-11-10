double problemSolution1(float water) {
    float cost=13.0;
    int array[3]={30,20,10};
    double cos[4]={0.4,0.12,1.4,1.5};
    for(int count=0;count<3;count++)
    {
         if(water<=array[count])
             cost+=water*cos[count];
         else
             cost+=cos[count]*array[count];
        water-=array[count];
        if(water<0)
            break;
    }
    if(water>0)
        cost+=cos[3]*water;
    return cost;
}
