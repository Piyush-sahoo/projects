let string = "";
// function eval(string){
//     return string;
// }

let buttons = document.querySelectorAll(".btn");
Array.from(buttons).forEach((btn)=>{
    btn.addEventListener('click', (e)=>{
        
        if(e.target.innerHTML == '='){
            string = eval(string);
            
            document.querySelector("input").value = string;

        }
        else{

            console.log(e.target)
            string = string+ e.target.innerHTML;
            document.querySelector("input").value = string;
        }



    })
})



// from button array select each btn
//     add event listener to every button which is click over here ans the event listen event is e
//     console log e ka target which means the what the event targets


