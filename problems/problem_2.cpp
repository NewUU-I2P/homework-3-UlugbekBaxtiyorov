float problemSolution2(float i, float j, float k) {
    float result=i;
    float array[3]={i,j,k};
    for(int count=1;count<3;count++)
        if(array[count]>result)
            result=array[count];

    return result;
}
