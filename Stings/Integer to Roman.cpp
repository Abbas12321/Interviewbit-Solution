string Solution::intToRoman(int A) {
    map<int,string>m;
    string ans="";
    m[0]="";
    m[1]="I", m[2]="II", m[3]="III", m[4]="IV", m[5]="V";
    m[6]="VI", m[7]="VII", m[8]="VIII", m[9]="IX", m[10]="X";
    while(A>=1000){
        ans+="M"; 
        A-=1000;
    }
    if(A>=900){
        ans+="CM"; 
        A-=900;
    }
    while(A>=500){
        ans+="D"; 
        A-=500;
    }
    if(A>=400){
        ans+="CD"; 
        A-=400;
    }
    while(A>=100){
        ans+="C"; 
        A-=100;
    }
    if(A>=90){
        ans+="XC"; 
        A-=90;
    }
    while(A>=50){
        ans+="L"; 
        A-=50;
    }
    if(A>=40){
        ans+="XL"; 
        A-=40;
    }
    while(A>10){
        ans+="X"; 
        A-=10;
    }
    ans+=m[A];
    return ans;
}
