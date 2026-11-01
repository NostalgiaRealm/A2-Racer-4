
/* ==== FUN_0040515c @ 0040515c ==== 
 * signature: undefined __register FUN_0040515c(int param_1)
 * body: 0040515c-004051b9
 */

void FUN_0040515c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_00446018;
  if ((DAT_00446018 != (int *)0x0) && (DAT_00446018[1] == param_1)) {
    DAT_00446018 = (int *)*DAT_00446018;
    FUN_004026d0((int)piVar2);
    return;
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (piVar1[1] == param_1)) break;
    piVar2 = (int *)*piVar2;
  }
  *piVar2 = *piVar1;
  FUN_004026d0((int)piVar1);
  return;
}


