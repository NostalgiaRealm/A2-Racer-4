
/* ==== FUN_0040d53b @ 0040d53b ==== 
 * signature: undefined __register FUN_0040d53b(void)
 * body: 0040d53b-0040d545
 */

void FUN_0040d53b(void)

{
  char cVar1;
  char *unaff_ESI;
  
  do {
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      return;
    }
    unaff_ESI = unaff_ESI + 1;
  } while (cVar1 == ' ');
  return;
}


