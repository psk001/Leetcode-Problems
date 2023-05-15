/**
 * @param {number} millis
 */
async function sleep(millis) {
    let t1= Date.now();
    let t2= Date.now();
    
    while(t2-t1 !=millis ){
        t2= Date.now();
    }
    
    return 'Resolved';
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */