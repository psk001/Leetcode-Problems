/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
    let res=[];
    let n= arr.length;
    
    for(let i=0; i<n; i++){
        let tem=[];
        for(let j=i; j<i+size && j<n; j++){
            tem.push(arr[j]);
        }
        i=i+size-1;
        res.push(tem);
    }
    
//     let tm=[];
    
    // for(let )
    
    return res;
};
