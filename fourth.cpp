void select_price(vector<item>original,int n,int max,int min,string choice){
	if(choice=="NO"){
	    for(int i=0;i<n;i++){
		    h.push(original[i]);
	    }
	    while(!h.empty()){
	    	item store=h.top();
		    if(store.getprice()<=max){
			    if(store.top().getprice()>=min){
				    desired.push(store);
			    }
		    }
		    else{
			    undesired.push(store);
		    }
		    h.pop();
	    }
	    clean(undesired);
	    cout<<"NO PREVIOUS FILTER SELECTED THIS IS THE FIRST ONE :  "<<endl;
	    Print(desired);
	}
	if(choice=="YES"){
		while(!desired.empty()){
			item r=desired.top();
			h.push(r);
			desired.pop();
		}
		while(!h.empty()){
			item store=h.top();
			if(store.getprice()<=max){
				if(store.getprice()>=min){
					desired.push(store);
				}
			}
			else{
				undesired.push(store);
			}
			h.pop();
		}	
		clean(undesired);
	    cout<<"PREVIOUS FILTER SELECTED THIS IS THE SECOND ONE :  "<<endl;
	    Print(desired);
	}
}
