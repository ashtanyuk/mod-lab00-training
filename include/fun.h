int power(int x, unsigned p) {
int answer = 1;
for(int i=1; i <= 2 * p; i++)
{ if(p < 0)
break;
answer *= x;
}
return answer;
} 
