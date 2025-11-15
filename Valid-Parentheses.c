bool isValid(char* s) {
    const int MAX = 10000;
    char stack[MAX];
    int top = 0;

    for(int i = 0, c = s[i]; s[i] != '\0'; c = s[++i]) {
        if((c == '(') || (c == '{') || (c =='[')) {
            if(top == MAX) return false;
            stack[top++] = c;
        } else {
            if(top == 0) return false;
            
            char t = stack[--top];
            if(
                ( (t == '(') && (c != ')') ) ||         
                ( (t == '{') && (c != '}') ) ||
                ( (t == '[') && (c != ']') )
            ) return false;   
        }
    }

    return (top == 0);


}