function getData(dataID, getNextData){
    setTimeout(() => {
        console.log(dataID," data");
        if (getNextData){
            console.log("fetching next data...")
            getNextData();
        }
    },2000);  //2s delay
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