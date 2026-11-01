
/* ==== FUN_0040145c @ 0040145c ==== 
 * signature: int * __register FUN_0040145c(void)
 * body: 0040145c-004014aa
 */

int * FUN_0040145c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_004ac454 == (int *)0x0) {
    puVar1 = LocalAlloc(0,0x644);
    if (puVar1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    *puVar1 = DAT_004ac450;
    iVar3 = 0;
    DAT_004ac450 = puVar1;
    do {
      piVar2 = puVar1 + iVar3 * 4 + 1;
      *piVar2 = (int)DAT_004ac454;
      iVar3 = iVar3 + 1;
      DAT_004ac454 = piVar2;
    } while (iVar3 != 100);
  }
  piVar2 = DAT_004ac454;
  DAT_004ac454 = (int *)*DAT_004ac454;
  return piVar2;
}


