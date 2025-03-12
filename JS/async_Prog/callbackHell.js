function getData(dataID, getNextData){
    //2s delay
    setTimeout(() => {
        console.log(dataID," data");
        if (getNextData){
            getNextData();
        }
    },2000);
}

// CALLBACK HELL
getData(1, () => {
    getData(2,()=>{
        getData(3,()=> {
            getData(4,()=> {
                getData(5,()=>{
                    getData(6);
                })
            })
        })
    });
})