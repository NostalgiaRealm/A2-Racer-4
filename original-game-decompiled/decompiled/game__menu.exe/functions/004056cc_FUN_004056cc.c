
/* ==== FUN_004056cc @ 004056cc ==== 
 * signature: undefined __register FUN_004056cc(int param_1)
 * body: 004056cc-00405729
 */

void FUN_004056cc(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_004aa020;
  if ((DAT_004aa020 != (int *)0x0) && (DAT_004aa020[1] == param_1)) {
    DAT_004aa020 = (int *)*DAT_004aa020;
    FUN_00402794((int)piVar2);
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
  FUN_00402794((int)piVar1);
  return;
}


