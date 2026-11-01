
/* ==== TObject.FreeInstance @ 00402cbc ==== 
 * signature: undefined __register TObject.FreeInstance(int * param_1)
 * body: 00402cbc-00402ce0
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
      FUN_00404234((int)param_1,iVar1);
    }
  } while (piVar2 != (int *)0x0);
  FUN_004026d0((int)param_1);
  return;
}


