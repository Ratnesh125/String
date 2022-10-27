getline() function is used to take input of the strings with spaces

cin>>str;
i/p ratnesh bharti
o/p ratnesh
coz when space encountered it terminates cin

to prevent this we use inline()
  it takes 3 parameters
    -cin
    -string_name
    -when to return ( by default set for "enter key") 
  if we wanna change when to return then pass this 3rd parameter any other symbol in single inverted commas
  
  inline(cin,str) ->we generally use this 
  inline(cin,str,'&') -> so in this when & is encountered inline function terminates.
  
