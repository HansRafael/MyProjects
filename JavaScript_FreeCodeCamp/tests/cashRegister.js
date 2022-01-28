const value = {
    PENNY: 0.01,
    NICKEL: 0.05, 
    DIME: 0.1,
    QUARTER: 0.25,
    ONE: 1,
    FIVE: 5,
    TEN: 10,
    TWENTY: 20,
    "ONE HUNDRED": 100
}

function trocoDoBar(change, cashRegister, quantidadeNotas){


    var newCashRegister = [];
    
    for(let i=tam; i>=0; i--){
        console.log('notas: '+quantidadeNotas[i])
        for(let j=0; j<quantidadeNotas[i]; j++){
            if(change > cashRegister[i][1]){
                change = change - (cashRegister[i][1] - value[cashRegister[i][0]]);
                cashRegister[i][1]-= cashRegister[i][1];
                newCashRegister.push([cashRegister[i][0],cashRegister[i][1]])
                console.log(change);
            }
            else{

            }
        }
    }
    


}

function right(cid,change){
    var newCid = [...cid];
    var newChange = change;
    var list =[]
    let tam = newCid.length - 1;
    let control = 0;

    for(let i=tam; i>=0; i--){
        if((newChange < newCid[i][1])){
            if(value[newCid[i][0]] < newChange){
                let count = 0;
                while(value[newCid[i][0]] <= newChange){
                    newChange -= value[newCid[i][0]]
                    count += value[newCid[i][0]]
                    newChange = newChange.toFixed(2);
                }
                list.push([newCid[i][0],count]);
                control += count;

            }else{
            }


        }
        else{
            newChange -= parseFloat(newCid[i][1]).toFixed(6);
            newChange = parseFloat(newChange.toFixed(6));
            list.push([newCid[i][0],newCid[i][1]])    
            control += parseFloat(newCid[i][1]).toFixed(6)
        }
        
    }
    return list;
}

function allMoney(cid){
    var allCash = 0;
    for(let i=0; i<cid.length; i++){
        allCash += cid[i][1]*100;
    }
    return allCash/=100;

}

function checkCashRegister(price,cash,cid){
    var caixa = {
        status: '',
        change: []
    }
    var giveChange = cash-price;
    var allCash = 0;
    var amountMoney = [];


    //----------quantidade do número de notas disponível---------
    for(let i=0; i<cid.length;i++){
        let string = value[cid[i][0]]*100;
        let cont = cid[i][1];
        amountMoney.push((cont/string)*100);
    }

    //----------todo o dinheiro disponível no caixa--------------
    allCash = allMoney(cid);
    //-------------------------------------------------------
    console.log(`o troco eh de  ${giveChange}`);

    //trocoDoBar(giveChange,cid, amountMoney);
    
    if(giveChange > allCash){
        caixa.status = 'INSUFFICIENT_FUNDS';
        return caixa;
    }else{
        let a = [];
        a = right(cid,giveChange);
        let money = allMoney(a);
        if(money<giveChange){
            console.log(`dinheiro do caixa eh: ${money}`);
            caixa.status = 'INSUFFICIENT_FUNDS';
            return caixa;
        }
        else if(money <= giveChange && allCash > giveChange){
            console.log(`dinheiro do caixa eh: ${money}`);
            caixa.status = 'OPEN';
            caixa.change = a;
            return caixa;

        }
        else if(money == giveChange){
            var revAr = [].concat(a).reverse();
            caixa.status = 'CLOSED';
            caixa.change = revAr;
            return caixa;
        }
        else if(money>giveChange){
            caixa.status = 'OPEN';
            caixa.change = a;
            return caixa;
        }

    }
    
}



console.log(checkCashRegister(19.5, 20, [["PENNY", 1.01], ["NICKEL", 2.05], ["DIME", 3.1], ["QUARTER", 4.25], ["ONE", 90], ["FIVE", 55], ["TEN", 20], ["TWENTY", 60], ["ONE HUNDRED", 100]]));
console.log(checkCashRegister(3.26, 100, [["PENNY", 1.01], ["NICKEL", 2.05], ["DIME", 3.1], ["QUARTER", 4.25], ["ONE", 90], ["FIVE", 55], ["TEN", 20], ["TWENTY", 60], ["ONE HUNDRED", 100]]));
console.log(checkCashRegister(19.5, 20, [["PENNY", 0.01], ["NICKEL", 0], ["DIME", 0], ["QUARTER", 0], ["ONE", 0], ["FIVE", 0], ["TEN", 0], ["TWENTY", 0], ["ONE HUNDRED", 0]]));
console.log(checkCashRegister(19.5, 20, [["PENNY", 0.01], ["NICKEL", 0], ["DIME", 0], ["QUARTER", 0], ["ONE", 1], ["FIVE", 0], ["TEN", 0], ["TWENTY", 0], ["ONE HUNDRED", 0]]));
console.log(checkCashRegister(19.5, 20, [["PENNY", 0.5], ["NICKEL", 0], ["DIME", 0], ["QUARTER", 0], ["ONE", 0], ["FIVE", 0], ["TEN", 0], ["TWENTY", 0], ["ONE HUNDRED", 0]]));