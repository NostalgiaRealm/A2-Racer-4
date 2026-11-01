
/* ==== FUN_0040d546 @ 0040d546 ==== 
 * signature: undefined __register FUN_0040d546(void)
 * body: 0040d546-0040d561
 */

void FUN_0040d546(void)

{
  int unaff_EBP;
  char *unaff_ESI;
  
  while( true ) {
    if ((byte)(*unaff_ESI - 0x3aU) < 0xf6) break;
    *(uint *)(unaff_EBP + -4) = (uint)(byte)(*unaff_ESI - 0x30);
    unaff_ESI = unaff_ESI + 1;
  }
  return;
}


