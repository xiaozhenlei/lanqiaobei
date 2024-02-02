int* plusOne(int* digits, int digitsSize, int* returnSize) {
    //正常情况
    for(int i = digitsSize - 1 ; i >= 0; i --){
        if (digits[i] < 9){
            digits[i]++;
        *returnSize = digitsSize;
        return digits;
        }else{
            //最后一位是9  
            digits[i] = 0;
        }
}
    //全部为9
    int* newdight = (int*)malloc((digitsSize + 1) * sizeof(int));
    newdight[0] = 1;
    for(int i = 1; i<digitsSize + 1;i++){
        newdight[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return newdight;
}