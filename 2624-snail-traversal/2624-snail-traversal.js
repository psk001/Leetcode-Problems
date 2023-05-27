/**
 * @param {number} rowsCount
 * @param {number} colsCount
 * @return {Array<Array<number>>}
 */
Array.prototype.snail = function(rowsCount, colsCount) {
    if(rowsCount*colsCount!==this.length)
        return [];
    
    let res= [];
    
    for(let i=0; i<rowsCount; i++){
        res[i]= [];
        for(let j=0; j<colsCount; j++){
            res[i][j]=0;
        }
    }
    
     
    let flag=1;
    let idx=0;
    let ccc=0, crc=0;
    
    while(idx<this.length){
        if(flag===1){
            for(let i=0; i<rowsCount; i++){
                res[i][ccc]=this[idx];
                idx++;
            }
            flag=2;
        }else{
            for(let i=rowsCount-1; i>=0; i--){
                res[i][ccc]= this[idx];
                idx++;
            }
            flag=1;
        }
        ccc++;
    }
    
    return res;
}

/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */