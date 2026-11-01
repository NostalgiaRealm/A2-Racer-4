
/* ==== TObject.FreeInstance @ 00402f40 ==== 
 * signature: undefined __register TObject.FreeInstance(int * param_1)
 * body: 00402f40-00402f64
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TObject_FreeInstance(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  do {
    iVar1 = *(int *)(*piVar2 + -0x40);
    piVar2 = *(int **)(*piVar2 + -0x24);
    if (iVar1 != 0) {
      FUN_0040454c((int)param_1,iVar1);
    }
  } while (piVar2 != (int *)0x0);
  FUN_00402794((int)param_1);
  return;
}


