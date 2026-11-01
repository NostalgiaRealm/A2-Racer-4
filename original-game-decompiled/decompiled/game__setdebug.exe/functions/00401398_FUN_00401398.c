
/* ==== FUN_00401398 @ 00401398 ==== 
 * signature: int * __register FUN_00401398(void)
 * body: 00401398-004013e6
 */

int * FUN_00401398(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_0044744c == (int *)0x0) {
    puVar1 = LocalAlloc(0,0x644);
    if (puVar1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    *puVar1 = DAT_00447448;
    iVar3 = 0;
    DAT_00447448 = puVar1;
    do {
      piVar2 = puVar1 + iVar3 * 4 + 1;
      *piVar2 = (int)DAT_0044744c;
      iVar3 = iVar3 + 1;
      DAT_0044744c = piVar2;
    } while (iVar3 != 100);
  }
  piVar2 = DAT_0044744c;
  DAT_0044744c = (int *)*DAT_0044744c;
  return piVar2;
}


