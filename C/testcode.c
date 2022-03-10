


// int string_words(char* str)  {

//     int count = 0;

//     for ( char* i = str; i != '\0'; ++i) {
        
//         if (*(i != ' ' && *i !='\t' && i != '\n') && (*(i+1) == ' '  *(i+1) =='\t'  *(i+1) == '\n' ))
//         count += 1;

//         if ( *(i+1) == '\0') break;

//     }
//     return count;
// }





int string_words(char* str)  {

    int count = 0;

    for ( char* i = str; i != '\0'; ++i) {
        
        if (*(i != ' '))

        if (*(i != ' ' && *i !='\t' && i != '\n') && (*(i+1) == ' '  *(i+1) =='\t'  *(i+1) == '\n' ))
        count += 1;

        if ( *(i+1) == '\0') break;

    }
    return count;
}





