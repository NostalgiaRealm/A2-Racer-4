
/* ==== FUN_0040c84b @ 0040c84b ==== 
 * signature: undefined __register FUN_0040c84b(void)
 * body: 0040c84b-0040c855
 */

void FUN_0040c84b(void)

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


