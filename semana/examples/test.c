int main(int a, set aba){
  int est;
  float bet;
  set kik;
  elem jot;
  est = est + bet + 3 + 1 - 2 + 5 - est;
  est = est - bet;
  est = est * bet;
  est = est / bet;

    if(!var1 && !var2 || !var3 && var4){

    }

    if(!is_set(x) && is_set(x) || meuSet < 2 && meuSet == 5 || meuSet > 2){
        add(5 in meuSet);
    }
    else
        add(6 in meuSet);

    for(j = 1; j <= 10; j = j+1){
      varlis = poka * 3;
      for(h = j; h >= 50; h = h+1){
        poka = varlis - 10;
        for(j=10; j > 3 ;j=j-1){
          varlis = varlis / 2;
          if(poka > 20) poka = poka - 5;
            else if(poka < 20) poka = poka - 2;
             else if (poka != 12) poka = poka + 1;
        }
      }
    }

    forall(abres in mySet) if(abres > 10) abres = abres + 1;
}

set tryTest(set testableSet) {
  read(input);
  add(input in testableSet);
  remove(1 in testableSet);
  write("removed");
  remove(5 in testableSet);
  writeln("removed one more time");
  remove(9 in testableSet);
  writeln('K');
  tryTest(testableSet);
  tryTest(testableSet, testableSet);
}