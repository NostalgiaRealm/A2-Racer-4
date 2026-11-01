
/* ==== FUN_0040c856 @ 0040c856 ==== 
 * signature: undefined __register FUN_0040c856(void)
 * body: 0040c856-0040c871
 */

void FUN_0040c856(void)

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


